#ifndef STRING_H
#define STRING_H
#include <string>
#include "Vector.h"
#include <cstring>
#include <iostream>
#include<chrono>
#include<ctime>


typedef unsigned long int count_t;
class String : public VectorS
{
public: 
	String()
		:VectorS()
	{

	}
	~String()
	{

	}
	String(const char* x)
		: Vector<char>()
	{
		for (unsigned int i = 0; i < strlen(x); i++)
		{
			addElement(x[i]);
		}
	}

	void Debug(int x)
	{
		for (int i = 0; i <x; i++)
		{
			// m_buffer[ 0 ] = 'a';
			std::cout << at(i);
		}
	}
	
	void UnitTest()
	{
		Debug(counter);
		String s1("1 ");
		String s2("2 ");
		String s3("3");

		Vector< String > v;
		v.addElement(s1);
		//v.addElement(s2);
		//v.addElement(s3);
		const unsigned int limit = 10000;
		String s("785ABC304ABC4417");
		std::cout<<s.FindFirstOccurence('0')<< std::endl;
		std::chrono::time_point<std::chrono::system_clock> start, end;
		start = std::chrono::system_clock::now();
		std::cout << s.Split("ABC") << std::endl;
		end = std::chrono::system_clock::now();
		std::chrono::duration<double> elapsed_seconds = end - start;
		std::cout << "num secs = " << elapsed_seconds.count() << std::endl;

			
		
	}
	
	inline count_t Capacity(void) { return counter; }
	// Goal: String s( "Julien" );
	// String s = "Julien"
	// std::string s = "Julien"6

	int FindFirstOccurence(char letter)
	{
		for (int i = 0; i < counter; i++)
		{
			if (letter == m_buffer[i])
			{
				return i;
			}
		}
		return -1;
	}

	String& operator=(const String& rhs)
	{
		this->Copy(rhs);
		return *this;
	}

	Vector<String> Split(const char* pattern)
	{
		Vector<String> res;
		int patLength = strlen(pattern);
		int count = 0;
		int min = 0;
		int temp = 0;
		int charCount = 0;
			for (int i = 0; i < capacity; i++)
			{
				if (pattern[0] == m_buffer[i])
				{
					int j = i;
					for (int k = 0; k < patLength; k++,j++)
					{
						if (pattern[k] == m_buffer[j])
						{
							count++;
						}
						else
						{
							count = 0;
						}
						if (count == patLength)
						{
							int newMin = i + count;
							String s;
							for (int k = min; k < i; k++)
							{
								//String s;
								s.addElement(m_buffer[k]);
								//res.addElement(s);
								charCount++;
							}
							res.addElement(s);
							min = newMin;
							count = 0;
						}
					}
				}

			}
		
			String s;
		for (int i = min; i < counter; i++)
		{
				//String s;
				s.addElement(m_buffer[i]);
				//res.addElement(s);
		}
		res.addElement(s);
		return res;
	}

};


#endif // !STRING_H

