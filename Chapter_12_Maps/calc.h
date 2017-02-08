#pragma once
template <class T>
class calc
{
private:
	T num1;
	T num2;
	typedef T (*func)(T,T);

public:
	calc();
	calc(func fn, T a, T b);
	~calc();
	T add(T a, T b);
	T sub(T a, T b);
	T mul(T a, T b);
	T div(T a, T b);
};

template <class T>
inline calc<T>::calc() {
	num1 = 0;
	num2 = 0;
}

template <class T>
inline calc<T>::calc() {
	num1 = 0;
	num2 = 0;
}
