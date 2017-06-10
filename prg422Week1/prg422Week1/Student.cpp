#include "Student.h"


Student::Student()
{
	m_FirstName = "Anthony";
	m_id = 1075;
	m_LastName = "Searles";
}

Student::~Student()
{
	
}

//Student::Student(const Student& std)
//{
//	m_FirstName = std.m_FirstName;
//	m_LastName = std.m_LastName;
//	m_id = std.m_id;
//	
//	
//	for (int i = 0; i < gradeCounter; i++)
//	{
//		m_grades[i] = std.m_grades[i];
//	}
//
//}
void Student::AddGrades(float g)
{
	m_grades.addElement(g);
}

void Student::debug(int x)
{
	std::cout << m_grades.at(x) << std::endl;
}