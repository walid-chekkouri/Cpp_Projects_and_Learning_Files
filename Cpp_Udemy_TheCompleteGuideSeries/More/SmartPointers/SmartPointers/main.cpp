#include<iostream> 
#include<string> 
using namespace std;

// A generic smart pointer class 
template <class T>
class SmartPtr
{
	T* ptr;  // Actual pointer 
public:
	// Constructor 
	explicit SmartPtr(T* p = NULL) { ptr = p; }

	// Destructor 
	~SmartPtr() { delete(ptr); }
	//Since destructor is automatically called when an object goes out of scope,
	//the dynamically allocated memory would automatically deleted (or reference count can be decremented)

	// Overloading dereferncing operator 
	T& operator * () { return *ptr; }

	// Overloding arrow operator so that members of T can be accessed 
	// like a pointer (useful if T represents a class or struct or  
	// union type) 
	T* operator -> () { return ptr; }
	//There are no pointer arithmetics:++,--,etc
};

int main()
{
	SmartPtr<int> ptr(new int());
	*ptr = 20;
	cout << *ptr;


	system("pause");
	return 0;
}