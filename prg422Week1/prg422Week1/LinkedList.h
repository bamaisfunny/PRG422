#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include "Int.h"
#include <cstdio>

template <typename T> class LinkedList
{
protected:
	int counter;
	
	
	T* head;

public:
	LinkedList()
	{
		head = NULL;
		tail = NULL;
		counter = 0;
	}
	/*void AddNode(int payload);
	void Print_Linked_List(Node* n);*/
	T* tail;
	void LinkedList::AddNode(int payload)
	{
		T *node = new T(payload);
		if (tail == NULL)
		{
			tail = node;
		}
		if (head != NULL)
		{
			std::cout << "My payload is " << node->m_payload << " and I am linked to node " << head->m_payload << std::endl;
		}
		if (counter != 0)
		{
			head->m_next = node;
		}
		head = node;
		counter++;
	}
	void LinkedList::Print_Linked_List(T* n)
	{
		std::cout << n->m_payload << std::endl;
		if (n->m_next != NULL)
		{
			Print_Linked_List(n->m_next);
		}
	}
	void Insert_After(int value, int payload)
	{
		T* node = new T(payload);
		T* currentNode = tail;
		while (currentNode.m_payload != value)
		{
			currentNode = currentNode.m_next;
		}
		node.m_next = currentNode.m_next;
		currentNode.m_next = node;
	}
	void Linked_Unit_Test()
	{
		LinkedList <Int> LL;
		LL.AddNode(32);
		LL.AddNode(6667);
		LL.AddNode(57869);
		Insert_After(6667, 52);
		LL.Print_Linked_List(LL.tail);
	}

};

#endif // !LINKEDLIST_H

