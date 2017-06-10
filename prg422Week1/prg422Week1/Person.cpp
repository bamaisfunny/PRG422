#include "Person.h"
#include<iostream>
#include <string.h>
#include"stdafx.h"
Person::Person() 
{
	m_Age = 0;
	m_FirstName = "null";
	m_Id = 0;
	m_grades = new double[1];
	m_NumberGrades = 1;
	
}

Person::Person(const Person& rhs)
{
	m_Age = rhs.m_Age;
	m_FirstName = rhs.m_FirstName;
	m_Id = rhs.m_Id;
	if (rhs.m_NumberGrades > 0)
	{
		m_NumberGrades = rhs.m_NumberGrades;
		m_grades = new double[m_NumberGrades];
		memcpy(m_grades, rhs.m_grades, rhs.m_NumberGrades * sizeof(double));
	}
}
Person::~Person()
{
	delete[]m_grades;
	std::cout << "I am dead" << std::endl;
}
void Person:: born()
{
	std::cout << "I was born" << std::endl;
}