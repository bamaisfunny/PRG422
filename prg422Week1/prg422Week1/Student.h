#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include "Vector.h"

#define DEFAULT_CAP 10

class Student
{
private:
	int m_id;
	std::string m_FirstName;
	std::string m_LastName;
	VectorF m_grades;
	

public:
	Student(void);
	virtual ~Student(void);
	//Student(const Student & std);
	void AddGrades(float g);
	void debug(int x);
};

#endif 



