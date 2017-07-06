#include "Int.h"
#include <cstdio>

Int::Int(int value)
{
	m_payload = value;
	m_next = NULL;
}
	std::ostream& operator<<(std::ostream& o, Int& v)
	{
		o << "[";
		o << v.m_payload;
		o << "]";
		return o;
	}


	Int::Int()
	{
		m_payload = 0;
		m_next = NULL;
	}
	bool Int::operator>(Int&rhs)
	{
		return	(m_payload > rhs.m_payload);
	}