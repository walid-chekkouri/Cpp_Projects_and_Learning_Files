#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sys/types.h>
#include <sys/stat.h>

class Animal {

	// Private variables are only available to methods 
	// in the class
private:
	std::string name;
	double height;
	double weight;

	// Static variables share the same value for all
	// objects of the Animal class
	static int numOfAnimals;

	// Public fields and methods can be accessed by
	// anything with access to the object
public:
	std::string GetName() { return name; }

	// Because we don't know what an objects name is
	// because the class is created before the object
	// we can refer to all objects using this
	// The pointer operator is used to access an 
	// objects fields and methods
	void SetName(std::string name) { this->name = name; }
	double GetHeight() { return height; }
	void SetHeight(double height) { this->height = height; }
	double GetWeight() { return weight; }
	void SetWeight(double weight) { this->weight = weight; }

	// You can declare function prototypes
	void SetAll(std::string, double, double);

	// A constructor is called each time an object is created
	Animal(std::string, double, double);

	// Create an overloaded constructor for when no data is passed
	Animal();

	// A deconstructor is called automatically when an object
	// is deleted or is no longer used
	// The default is fine, but you should create custom ones
	// when you must release memory, or resources
	virtual ~Animal();

	// Static methods can only access static fields
	static int GetNumOfAnimals() { return numOfAnimals; }

	// Created to be overwritten
	virtual void ToString();

};

// Refer to class fields and methods with ::
int Animal::numOfAnimals = 0;

// Define the prototype method
void Animal::SetAll(std::string name, double height,
	double weight) {
	this->name = name;
	this->weight = weight;
	this->height = height;
	Animal::numOfAnimals++;
}

// Define the constructor
Animal::Animal(std::string name, double height,
	double weight) {
	this->name = name;
	this->weight = weight;
	this->height = height;
	Animal::numOfAnimals++;
}

Animal::Animal() {
	this->name = "";
	this->weight = 0;
	this->height = 0;
	Animal::numOfAnimals++;
}

Animal::~Animal() {
	std::cout << "Animal " << this->name <<
		" killed\n";
}

void Animal::ToString() {
	std::cout << this->name << " is " <<
		this->height <<
		" cms tall and " << this->weight <<
		" kgs in weight\n";
}

// Through inheritance a class inherits all fields and methods
// defined by the super, or inherited from class
class Dog : public Animal {
private:
	std::string sound = "Wooof";
public:
	// You can access to the private field name
	// by calling GetName()
	void MakeSound() {
		std::cout << "The dog " <<
			this->GetName() << " says " <<
			this->sound << "\n";
	}

	// The Dogs constructor
	Dog(std::string, double, double, std::string);

	// The default constructor calls Animals default
	// constructor
	Dog() : Animal() {};
	~Dog();

	// Overwrite ToString
	void ToString();

};

// Calls the superclasses constructor to handle
// initalization
Dog::Dog(std::string name, double height,
	double weight, std::string sound) :
	Animal(name, height, weight) {
	this->sound = sound;
}

Dog::~Dog()
{
	std::cout << " Dog killed!!\n";
}

// Overwrite ToString
void Dog::ToString() {
	// Because the attributes were private in Animal they must be retrieved 
	// by called the get methods
	std::cout << this->GetName() << " is " << this->GetHeight() <<
		" cms tall, " << this->GetWeight() <<
		" kgs in weight and says " << this->sound << "\n";
}

int main()
{
	// Create object without setting values in constructor
	Animal fred;
	fred.SetHeight(33);
	fred.SetWeight(10);
	fred.SetName("Fred");
	// Get the values for the Animal
	fred.ToString();

	fred.SetAll("Fred", 34, 12);

	fred.ToString();

	// Setting values with constructor
	Animal tom("Tom", 36, 15);
	tom.ToString();

	// Demonstrate inherited Dog class
	Dog spot("Spot", 38, 16, "Wooof");

	// See different output from overwritten ToString()
	spot.ToString();

	// Call static methods by using the class name to
	// show the total Animals created
	std::cout << "Number of Animals " <<
		Animal::GetNumOfAnimals() << "\n";



	Animal* animalPtr = new Animal("mimi", 30, 9);

	// do something with animalPtr.

	delete animalPtr;    // throw it away.

	animalPtr = new Dog("bou", 25, 20, "hoaf");
	animalPtr->ToString();

	// do something with swiss.

	delete animalPtr;    // throw it away.


	system("pause");
	return 0;
}