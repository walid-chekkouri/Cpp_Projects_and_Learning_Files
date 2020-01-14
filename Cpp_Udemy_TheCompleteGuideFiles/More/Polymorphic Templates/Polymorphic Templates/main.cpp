#include <iostream>
#include <string>
#include <vector>


//how to use templates 
// polymorphically 

// Base class all pizzas inherit along with MakePizza
// which will be overridden
class Pizza {
public:
	virtual void MakePizza() = 0;
};

// The last templates that will be called
class NYStyleCrust {
public:
	std::string AddIngredient() {
		return "Crust so Thin You can See through it\n\n";
	}
};

class DeepDishCrust {
public:
	std::string AddIngredient() {
		return "Super Awesome Chicago Deep Dish Crust\n\n";
	}
};

// End of last templates called

// The middle templates called
template <typename T>
class LotsOfMeat : public T {
public:
	std::string AddIngredient() {
		return "Lots of Random Meat, " + T::AddIngredient();
	}
};

template <typename T>
class Vegan : public T {
public:
	std::string AddIngredient() {
		return "Vegan Cheese, Veggies, " + T::AddIngredient();
	}
};

// End of middle templates called

// We inherit from Pizza as well as the initial next template
template <typename T>
class MeatNYStyle : public T, public Pizza {
public:
	void MakePizza() {
		std::cout << "Meat NY Style Pizza : " <<
			T::AddIngredient();
	}
};

template <typename T>
class VeganDeepDish : public T, public Pizza {
public:
	void MakePizza() {
		std::cout << "Vegan Deep Dish : " <<
			T::AddIngredient();
	}
};

//MAIN FUNCTION
int main()
{
	// unique_ptr is a smart pointer that disposes of
	// a pointer when it is no longer in use
	std::vector<std::unique_ptr<Pizza>> pizzaOrders;

	// Generate Pizza types and place them at the end of the vector
	pizzaOrders.emplace_back(new MeatNYStyle<LotsOfMeat<NYStyleCrust>>());
	pizzaOrders.emplace_back(new VeganDeepDish<Vegan<DeepDishCrust>>());

	// Call the pizzas and execute the directions 
	// for making them
	for (auto& pizza : pizzaOrders) {
		pizza->MakePizza();
	}


	system("pause");
	return 0;
}
