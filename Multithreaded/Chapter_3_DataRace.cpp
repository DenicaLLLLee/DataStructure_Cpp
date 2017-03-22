/*
	Data Race and Mutex
	https://www.youtube.com/watch?v=3ZxZPeXPaM4
	Oyashi
	03/13/2017
*/

#include <iostream>
#include <string>
#include <thread>
#include <mutex>

using namespace std;

std::mutex mu;

/*
	Mutex should not be used like this
		mu.lock();
		cout << msg << id << endl;
		mu.unlock();
	Because, if the statement inside the mutex conditions
	throws an exception then our mutex remains locked,
	while is not good for our program.
	Therefore, we should use
		std::lock_guard<std::mutex> guard(mu);

	Since, cout is a global variable, other
	function can use cout without going through lock_guard
	
	Thus, in order to protect cout, please check
	example in Chapter_3_DataRace_A

*/

void shared_print(string msg, int id) {
	std::lock_guard<std::mutex> guard(mu);
	cout << msg << id << endl;
}

void function_1() {
	for (int i = 0; i > -100; i--)
		shared_print("fromt t1 ", i);
}


int main() {
	std::thread t1(function_1); //t1 starts running

	for (int i = 0; i < 100; i++)
	{
		shared_print("from main ", i);
	}

	t1.join();

	return 0;
}