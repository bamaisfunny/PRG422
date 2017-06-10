#pragma once

#include <iostream>
#define INITIAL_BUFFER 10
class MyString
{
public:
	MyString();
	MyString(const char* c_str);
	MyString(const MyString& MyString);
	virtual ~MyString();
	MyString& operator=(const MyString& rhs);
	friend std::iostream& operator<<(std::iostream& stream, const MyString& rhs);


protected:
	char* m_internal_container;
};