#include <iostream>
#include "EllieTest.h"


Ellie::Ellie()
{
	age = 23;
}

Ellie::~Ellie()
{
}

int Ellie::Add_Number_To_Age(int i)
{
	age = age + i;
	return age;
}
void Ellie::Ellie_Unit_Test()
{
	std::cout << Add_Number_To_Age(5) << std::endl;
	std::cout << Add_Number_To_Age(2097) << std::endl;
	std::cout << Add_Number_To_Age(age) << std::endl;
}