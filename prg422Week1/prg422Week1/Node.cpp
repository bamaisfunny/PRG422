#include "Node.h"
#include <cstdio>

Node::Node(int load)
{
	m_next = NULL;
	m_payload = load;
}