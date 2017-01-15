#include <string>
#include "Chapter_9_ClassesObjects\HeaderFiles\Rational.h"

Rational::Rational()
{
	this->num = 0;
	this->den = 0;
}

Rational::Rational(long n, long d) {
	this->num = n;
	this->den = d;
	if (this->num < 0) {
		this->den = abs(this->den);
		this->num = -this->num;
	}
	reduceToLowestTerm();
}

Rational::~Rational()
{
}

Rational Rational::add(Rational r) {
	Rational newR;
	newR.num = (this->num * r.den) + (r.num * this->den);
	newR.den = this->den * r.den;
	if (newR.den != 0) newR.reduceToLowestTerm();
	return newR;
}

Rational Rational::sub(Rational r) {
	Rational newR;
	newR.num = (this->num * r.den) - (r.num * this->den);
	newR.den = this->den * r.den;
	if (newR.den != 0) newR.reduceToLowestTerm();
	return newR;
}

Rational Rational::mul(Rational r) {
	Rational newR;
	newR.num = this->num * r.num;
	newR.den = this->den * r.den;
	if (newR.den != 0) newR.reduceToLowestTerm();
	return newR;
}

Rational Rational::div(Rational r) {
	Rational newR;
	newR.num = (this->num * r.den);
	newR.den = this->den * r.num;
	if (newR.den != 0) newR.reduceToLowestTerm();
	return newR;
}

bool Rational::equals(Rational r) {
	if (this->num == r.num && this->den == r.den)
		return true;
	else
		return false;
}

int Rational::compareTo(Rational r) {
	long numerator = this->num / r.num;
	long denominator = this->den / r.den;
	if (numerator/denominator > 0)
		return 1;
	else if (numerator / denominator == 0)
		return 0;
	else
		return -1;
}

std::string Rational::toString() {
	std::string numerator = std::to_string(this->num);
	std::string denominator = std::to_string(this->den);
	return(numerator + "/" + denominator);
}

void Rational::reduceToLowestTerm() {
	long n = this->num < 0 ? -this->num : this->num;
	long d = this->den;
	long largest = n > d ? n : d;
	long smallest = n < d ? n : d;
	long divisor = gcd(largest, smallest);

	this->num /= divisor;
	this->den /= divisor;

	//for (int loop = largest; loop >= 2; loop--) {
	//	if (loop % this->num == 0 && loop % this->den == 0) {
	//		gcd = loop;
	//		break;
	//	}
	//	if (gcd != 0) {
	//		this->num /= gcd;
	//		this->den /= gcd;
	//	}
	//}
}

long Rational::gcd(long a, long b) {
	if (a == 0) return b;
	else if (b == 0) return a;
	else {
		return gcd(b, a % b);
	}
}