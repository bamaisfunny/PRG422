/* file : memory_example.cpp */

#include <iostream>



{
	int cap = 10;
	float* grades = new float[cap];
	for (int i = 0; i < cap; i++)
		grades[i] = i;

	float* ptr = grades;
	for (int i = 0; i < cap; i++)
		std::cout << ptr[i] << std::