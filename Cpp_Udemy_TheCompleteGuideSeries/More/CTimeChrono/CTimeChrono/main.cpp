#include <iostream>
#include <string>
#include <chrono>
#include <ctime>



int GetMax(int a, int b) {

	return (a > b ? a : b);
}

void Chrono(int (*func)(int, int), int nb1, int nb2)
{
	typedef std::chrono::high_resolution_clock Time;
	typedef std::chrono::milliseconds ms;
	typedef std::chrono::duration<float> fsec;

	auto t0 = Time::now();

	std::cout << "The Larger number is: "<<func(nb1, nb2) << "\n";

	auto t1 = Time::now();

	fsec fs = t1 - t0;

	ms d = std::chrono::duration_cast<ms>(fs);

	std::cout << fs.count() << "s\n";
	std::cout << d.count() << "ms\n";
}

int main()
{


	Chrono(GetMax, 4, 6);//passing a function as an argument.


	system("pause");
	return 0;
}