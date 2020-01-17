#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <ctime>
#include <thread>
#include <mutex>


/*
int GetRandom(int max) {//Generate random number <max.
	srand(time(NULL));
	return rand() % max;
}*/

std::string GetTime(){//Return current time.

	auto nowTime = std::chrono::system_clock::now();
	std::time_t sleepTime = std::chrono::system_clock::to_time_t(nowTime);

	return std::ctime(&sleepTime);
	
}

double accountBalance = 400;

std::mutex accountLock;

void getMoney(int id, double withdrawalAmount)
{
	std::lock_guard<std::mutex> getMoneyLocky(accountLock);//restrict access to the entire scope of this function.
	/*accountLock.lock();
	/ *
	*safe code here
	* /
	accountLock.unlock();*///This is not exception safe.
	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << "Id: " << id<<" |Amount: " <<
		withdrawalAmount <<" on "<< GetTime();

	if (accountBalance - withdrawalAmount >= 0)//withdraw from balance
	{
		accountBalance -= withdrawalAmount;
		std::cout << "New balance: " << accountBalance << std::endl;
	}
	else
	{
		std::cout << "No Enough Balance!!" <<std::endl;
		std::cout << "Current balance: " << accountBalance << std::endl;
	}
}

int main()
{

	std::thread threads[10];//these threads will access the accountBalance randomly, no priorities involved.
	for (int i = 0; i < 10; ++i)
	{
		threads[i] = std::thread(getMoney,i, 80);
	}

	for (int i = 0; i < 10; ++i)
	{
		threads[i].join();
	}


	return 0;
}