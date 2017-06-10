
#ifndef A_H
#include<iostream>
#define A_H

class A
{
public:
	  A();
	  A(const A&rhs);
	  ~A();
	  friend std::ostream& operator<<(std::ostream& o, A& rhs);
	  static int getCounter();

protected:
	int m_var;
	static int m_counter;
	 
};

#endif // !A_h
