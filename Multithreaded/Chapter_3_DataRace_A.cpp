/*
	Data Race and Mutex
	https://www.youtube.com/watch?v=3ZxZPeXPaM4
	Oyashi
	03/13/2017
*/

#include <iostream>
#include <thread>
#include <string>
#include <mutex>
#include <fstream>

using namespace std;

class LogFile {
	std::mutex m_mutex;
	ofstream f;

public:
	LogFile() {
		f.open("log.txt");
	}

	~LogFile() {
		f.close();
	}

	void shared_print(string id, int value) {
		std::lock_guard<mutex> locker(m_mutex);
		cout << "from " << id << ":" << value << endl;
	}
};

void function_1(LogFile& log) {
	for (int i = 100; i >= -1; i--)
		log.shared_print(string("from t1 "), i);
}

int main() {
	LogFile log;
	thread t1(function_1, std::ref(log));

	for (int i = 0; i < 100; i++)
	{
		log.shared_print(string("from main"), i);
	}

	cout << "Hello Oyesh " << endl;

	t1.join();
	
}