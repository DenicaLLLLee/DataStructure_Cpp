#pragma once
class Rational
{
private:
	long num = 0, den = 0;
	void reduceToLowestTerm();
	long gcd(long a, long b);
public:
	Rational();
	Rational(long n, long d);
	Rational add(Rational ration);
	Rational sub(Rational ration);
	Rational mul(Rational ration);
	Rational div(Rational ration);
	bool equals(Rational ration);
	int compareTo(Rational ration);
	std::string toString();
	~Rational();
};

