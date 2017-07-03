// prg422Week1.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "Person.h"
#include "A.h"
#include<string>
#include<iostream>
#include"String.h"
#include "Student.h"
#include "Vector.h"
#include "Fractions.h"
#include "Freedom.h"
#include "LinkedList.h"
#include "EllieTest.h"


std::string changeNames(std::string& s);
std::string changNamesBetter(std::string& s);



void UnitTest_Bubble_Sort()
{
	int tmpArray[] = { 10, 5, 7, -1, 0, 4 };
	BubbleSort(tmpArray, 6);
	for (int i = 0; i < 6; i++)
	{
		std::cout << tmpArray[i] << std::endl;
	}
}



void UnitTestString()
{
	reverseString("pineapple");
	capString("pinEapple");
}

int main()
{
	LinkedList<Int> L;
	L.Linked_Unit_Test();
	//LinkedListUnitTest();
	/*
	String s("Anthony Searles");
	String x("760.637.4471");
	x.UnitTest();
	Fraction <int> m;
	m.UnitTest();*/
	//std::cout<<x.Split("4");
	//std::cout << x.FindFirstOccurence('4');
	//Vector<int>::Unit_Test();
	//std::cout << s << std::endl;

	/*UnitTest_Bubble_Sort();
	UnitTestString();
	Unit_Test_String();

	Practice_Pointers();
	*/
	//Vector <int> v;
	//for (int i = 0; i < 30; i++)
	//{
	//	v.addElement(i);
	//	std::cout << v.at(i) << std::endl;
	//}

	//Student s;
	//for (int i = 0; i < 20; i++)
	//{
	//	s.AddGrades(i);
	//	s.debug(i);
	//}

	char c;
	//
 //  
	//std::string s = "Bert";
	//std::cout << changeNames(s);
	//std::cout << changNamesBetter(s);
	//
	//String s( "Anthony" );
	//s += " Searles"; // overload operator +=
	//s.printString(s);
	scanf("%c", &c);
	return 0;
}

std::string changeNames(std::string& s)
{
std::string* ptr = &s;
	std::string x = "Anthony";
	*ptr = x;
	return *ptr;
	
}
std::string changNamesBetter(std::string& s)
{
	s = "Anthony";
	return s;
}



