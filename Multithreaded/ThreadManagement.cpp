/*
	Thread Management
	https://www.youtube.com/watch?v=f2nMqNj7vxE
	Oyashi
	03/10/2017
*/

#include <iostream>
#include <thread>

using namespace std;

void function_1() {
	cout << "Beauty is only skin-deep\n" << endl;
}

class Functor {
public:
	void operator()() {
		for (int i = 0; i > -100; i--)
			cout << "fromt t1 " << i << endl;
	}
};

int main() {
	Functor fct;
	std::thread t1(fct); //t1 starts running

	try
	{
		for (int i = 0; i < 100; i++)
		{
			cout << "from main: " << i << endl;
		}
	}
	catch (const std::exception&)
	{
		t1.join();
		throw;
	}

	t1.join();

	return 0;
}