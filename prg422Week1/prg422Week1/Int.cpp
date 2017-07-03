#include "Int.h"
#include <cstdio>

Int::Int(int value)
{
	m_payload = value;
	m_next = NULL;
}