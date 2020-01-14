#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS_GLOBALS


#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <thread>
// A thread is a block of code (ex: the main function is a thread).
int GetRandom(int max)
{
	srand(time(NULL));
	return rand() % max;
}

void ExecuteThread(int id)
{
	// Get current time
	auto nowTime = std::chrono::system_clock::now();

	// Convert to a time we can output
	std::time_t sleepTime =
		std::chrono::system_clock::to_time_t(nowTime);

	// Convert to current time zone
	tm myLocalTime = *localtime(&sleepTime);

	// Print full time information
	std::cout << "Thread " << id << " Sleep Time : " << std::ctime(&sleepTime) << "\n";

	// Get separate pieces
	/*std::cout << "Month : " <<myLocalTime.tm_mon << "\n";
	std::cout << "Day : " <<myLocalTime.tm_mday << "\n";
	std::cout << "Year : " <<myLocalTime.tm_year + 1900 << "\n";
	std::cout << "Hours : " <<myLocalTime.tm_hour << "\n";
	std::cout << "Minutes : " <<myLocalTime.tm_min << "\n";*/
	std::cout << "Seconds : " << myLocalTime.tm_sec << "\n\n";

	std::this_thread::sleep_for(std::chrono::seconds(GetRandom(7)));//sleep for a time up to x seconds.(3s max).

	nowTime = std::chrono::system_clock::now();
	sleepTime = std::chrono::system_clock::to_time_t(nowTime);
	std::cout << "Thread " << id << " Awake Time : " << std::ctime(&sleepTime) << "\n";
}
int main() {

	std::thread th1(ExecuteThread, 1);// spawn new thread that calls ExecuteThread()

	th1.join();// pauses until th1 finishes.

	std::thread th2(ExecuteThread, 2);

	th2.join();// pauses until th2 finishes.


	std::cout << " main function finished\n";

	system("pause");
	return 0;

}
