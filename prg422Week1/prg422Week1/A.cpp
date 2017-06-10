#include "A.h"
#include<iostream>
#include<string>

int A::m_counter = 0;

A::A()
{
	m_var = 10;
	m_counter++;
}
A::A(const A&rhs)
{
	m_var = rhs.m_var;
}
A::~A()
{
	std::cout << "I am being called" << std::endl;
	m_counter--;
}
std::ostream& operator<< (std::ostream& o, A& rhs)
{
	o << "My unique variable is " << rhs.m_var;
	return o;
}

int A::getCounter()
{
	return m_counter;
}