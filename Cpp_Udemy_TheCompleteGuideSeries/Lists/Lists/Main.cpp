#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std;

//function for printing the elements in a list 
void showlist(list <int> myList)
{
	list <int> ::iterator it;
	for (it = myList.begin(); it != myList.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

int main()
{

	list <int> myList1, myList2;


	for (int i = 0; i < 10; ++i)
	{
		myList1.push_back(i * 2);
		myList2.push_front(i * 3);
	}
	cout << "\nList 1 (myList1) is : ";
	showlist(myList1);

	cout << "\nList 2 (myList2) is : ";
	showlist(myList2);

	cout << "\nmyList1.front() : " << myList1.front();
	cout << "\nmyList1.back() : " << myList1.back();

	cout << "\nmyList1.pop_front() : ";
	myList1.pop_front();
	showlist(myList1);

	cout << "\nmyList2.pop_back() : ";
	myList2.pop_back();
	showlist(myList2);

	cout << "\nmyList1.reverse() : ";
	myList1.reverse();//Reverses the list
	showlist(myList1);

	cout << "\nmyList2.sort(): ";
	myList2.sort();//Sorts the list in increasing order.
	showlist(myList2);

	cout << "\nmyList2.remove(20): ";
	myList2.remove(27);
	showlist(myList2);

	cout << "\nmyList2.erase(it): ";
	list <int> ::iterator it = myList2.begin();
	myList2.erase(it);
	showlist(myList2);

	cout << "\Before nmyList2.swap(myList1): "<<endl;
	cout << "myList1: "; showlist(myList2);
	cout << "myList2: "; showlist(myList1);

	
	cout << "\After nmyList2.swap(myList1): " << endl;
	myList2.swap(myList1);
	cout << "myList1: "; showlist(myList2);
	cout << "myList2: "; showlist(myList1);

	/////////////////////////

	// Initialization of list 
	list<int> demo_list;

	// Assigning the value 100, 5 times 
	// to the list, list_demo. 
	demo_list.assign(5, 100);

	// Displaying the list 
	for (int itr : demo_list) {
		cout << itr << " ";
	}
	//////////////////////////////

	// Initialization of list 
	list<int> first_list;

	// Initializing second list 
	list<int> second_list;

	// Assigning the value 100, 5 times 
	// to the second_list. 
	second_list.assign(5, 200);

	// Copying second_list to first_list 
	first_list.assign(second_list.begin(),
		second_list.end());

	for (int itr : first_list) {
		cout << itr << " "<<endl;
	}
////////////////////////////////////////

	// declaring list 
	list<int> list1;

	// using assign() to insert multiple numbers 
	// creates 3 occurrences of "2" 
	list1.assign(3, 2);

	// initializing list iterator to beginning 
	list<int>::iterator itr = list1.begin();

	// iterator to point to 3rd position 
	advance(itr, 2);

	// using insert to insert 1 element at the 3rd position 
	// inserts 5 at 3rd position 
	list1.insert(itr, 5);

	// Printing the new list 
	cout << "The list after inserting"
		<< " 1 element using insert() is : ";
	for (list<int>::iterator i = list1.begin();
		i != list1.end();
		i++)
		cout << *i << " ";

	cout << endl;

	// using insert to insert 
	// 2 element at the 4th position 
	// inserts 2 occurrences 
	// of 7 at 4th position 
	list1.insert(itr, 2, 7);

	// Printing the new list 
	cout << "The list after inserting"
		<< " multiple elements "
		<< "using insert() is : ";

	for (list<int>::iterator i = list1.begin();
		i != list1.end();
		i++)
		cout << *i << " ";

	cout << endl;










	system("pause");
	return 0;
}
/*
front() – Returns the value of the first element in the list.
back() – Returns the value of the last element in the list .
push_front(g) – Adds a new element ‘g’ at the beginning of the list .
push_back(g) – Adds a new element ‘g’ at the end of the list.
pop_front() – Removes the first element of the list, and reduces size of the list by 1.
pop_back() – Removes the last element of the list, and reduces size of the list by 1
erase() – Removes a single element or a range of elements from the list.
empty() – Returns whether the list is empty(1) or not(0).
insert() – Inserts new elements in the list before the element at a specified position
assign() – Assigns new elements to list by replacing current elements and resizes the list.
remove() – Removes all the elements from the list, which are equal to given element
*/