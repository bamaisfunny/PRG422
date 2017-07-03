//#include "Person.h"
//#include <iostream>
//
//typedef void(*Str_Func_Ptr)(const char*);
//
//void Unit_Test_String()
//{
//	const char* value = "anthony";
//	Str_Func_Ptr FuncPtr = (Str_Func_Ptr)&reverseString;
//	(*FuncPtr)(value);
//	FuncPtr = (Str_Func_Ptr)&capString;
//	(*FuncPtr)(value);
//}
//
//void Modify_Input(int* ptr)
//{
//	*ptr += 2;
//}
//
//void Modify_Input_Without_Pointer(int a)
//{
//	a += 2;
//}
//
//void Practice_Pointers(void)
//{
//	int a = 1;
//	int b = 2;
//	int* ptr = &a;
//	std::cout << *ptr << std::endl;
//	ptr = &b;
//	Modify_Input(ptr);
//	std::cout << b << std::endl;
//	Modify_Input_Without_Pointer(a);
//	std::cout << a << std::endl;
//}
