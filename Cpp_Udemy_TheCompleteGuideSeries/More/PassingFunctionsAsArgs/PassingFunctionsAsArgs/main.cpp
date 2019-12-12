#include <iostream>
#include <string>
#include <windows.h>




int GetMax(int a, int b) {

	return (a > b ? a : b);
}

void Chrono(int (*func)(int, int), int nb1, int nb2, int delaySeconds)
{
	std::cout << " [Sleeping!] \n";
	Sleep(delaySeconds * 1000);//delay in seconds

	std::cout << "The Larger Number is: " << func(nb1, nb2) << "\n";

	std::cout << " [Awake!] \n";

}

int main()
{

	Chrono(GetMax, 4, 6, 5);


	std::cout << "Program Over! \n";
	system("pause");
	return 0;
}

//EXAMPLE 2.
/*
#include <stdio.h>
#include <iostream>

/ * Function declarations * /
void greetMorning();
void greeEvening();
void greetNight();

void greet(void (*greeter)());

int main()
{
	// Pass pointer to greetMorning function 
	greet(greetMorning);

	// Pass pointer to greetEvening function 
	greet(greeEvening);

	// Pass pointer to greetNight function 
	greet(greetNight);

	system("pause");
	return 0;
}

/ **
 * Function to print greeting message.
 *
 * @greeter     Function pointer that can point to functions
 *              with no return type and no parameters.
 * /
void greet(void (*greeter)())
{
	// Call greeter function pointer
	greeter();
}

void greetMorning()
{
	printf("Good, morning!\n");
}

void greeEvening()
{
	printf("Good, evening!\n");
}

void greetNight()
{
	printf("Good, night!\n");
}*/