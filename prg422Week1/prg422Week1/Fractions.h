#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

template <typename T> class Fraction
{
protected:
	T* frac;

public:
	Fraction()
	{
		frac = new T[2];
	}
	Fraction(T num, T den)
	{
		frac = new T[2];
		frac[0] = num;
		frac[1] = den;
	}
	~Fraction()
	{
		delete[]frac;
	}
	void Add(Fraction& a, Fraction& b)
	{
		/*
		* Fraction _a = a;
		_a.frac = a.frac
		* Fraction _b = b;
		*/
		if (a.frac[1] != b.frac[1])
		{
			T tmp1 = a.frac[0] * b.frac[1];
			T tmp2 = b.frac[0] * a.frac[1];
			T tmp3 = a.frac[1] * b.frac[1];
			std::cout << tmp1 + tmp2 << "/" << tmp3 << std::endl;
		}
		else
		{
			T tmp1 = a.frac[0];
			T tmp2 = a.frac[1];
			T tmp3 = b.frac[0];
			std::cout << tmp1 + tmp3 << "/" << tmp2 <<std::endl;
		}
	}
	void Subtract(Fraction& a, Fraction& b)
	{
		if (a.frac[1] != b.frac[1])
		{
			T tmp1 = a.frac[0] * b.frac[1];
			T tmp2 = b.frac[0] * a.frac[1];
			T tmp3 = a.frac[1] * b.frac[1];
			std::cout << tmp1 - tmp2 << "/" << tmp3 << std::endl;
		}
		else
		{
			T tmp1 = a.frac[0];
			T tmp2 = a.frac[1];
			T tmp3 = b.frac[0];
			std::cout << tmp1 + tmp3 << "/" << tmp2 << std::endl;
		}
	}
	void Multiply(Fraction& a, Fraction& b)
	{
		T tmp1 = a.frac[0] * b.frac[0];
		T tmp2 = a.frac[1] * b.frac[1];
		std::cout << tmp1 << "/" << tmp2 << std::endl;
	}
	void Divide(Fraction& a, Fraction& b)
	{
		T tmp1 = a.frac[0] * b.frac[1];
		T tmp2 = a.frac[1] * b.frac[0];
		std::cout << tmp1 << "/" << tmp2 << std::endl;
	}
	
	void UnitTest()
	{
		Fraction<int> first(1, 5);
		Fraction<int> second(2, 7);
		Add(first, second);
		Subtract(first, second);
		Multiply(first, second);
		Divide(first, second);
	}
	typedef Fraction<int> FractionI;
};


#endif // !FRACTION.H

