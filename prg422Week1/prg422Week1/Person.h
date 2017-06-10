#ifndef  PERSON_H
#define PERSON_H
#include <string>
#include"stdafx.h"
class Person
{
public: Person();
		Person(const Person&rhs);
		~Person();
		void born();
protected: std::string m_FirstName; 
		   int m_Age;
		   int m_Id;
		   double* m_grades;
		   int m_NumberGrades;
		   
};
#endif // ! PERSON_H

