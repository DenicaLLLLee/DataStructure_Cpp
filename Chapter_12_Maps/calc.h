#pragma once
template <class T>
class calc
{
private:
	T num1;
	T num2;

public:
	calc();
	~calc();
	T add(T a, T b);
	T sub(T a, T b);
	T mul(T a, T b);
	T div(T a, T b);
	void calculate(std::function<T(T,T)> fn, T a, T b);
};

template <class T>
inline calc<T>::calc() {
	num1 = 0;
	num2 = 0;
}

template <class T>
inline T calc<T>::add(T a, T b) {
	return a + b;
}

template <class T>
inline T calc<T>::sub(T a, T b) {
	return (a > b ? a - b : b - a);
}

template <class T>
inline T calc<T>::mul(T a, T b) {
	return a * b;
}

template <class T>
inline T calc<T>::div(T a, T b) {
	return (a > b ? a / b : b / a);
}

template <class T>
inline void calc<T>::calculate(std::function<T(T,T)> fn, T a, T b) {
	std::cout << fn(a, b) << std::endl;
}