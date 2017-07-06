#ifndef INT_H
#define	INT_H
#include<iostream>


class Int
{
public:
	int m_payload;
	Int(int value);
	Int();
	Int* m_next;
	friend std::ostream& operator<<(std::ostream& o, Int& v);
	bool operator>(Int& rhs);

protected:

};

#endif // !INT_H

