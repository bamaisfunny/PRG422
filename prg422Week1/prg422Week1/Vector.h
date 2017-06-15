#ifndef VECTOR_H
#define VECTOR_H
#include<iostream>

#define DEFAULT_CAP 10

template <typename T> class Vector
{
public:
	 Vector()
	{
		 capacity = DEFAULT_CAP;
		 counter = 0;
		 m_buffer = new T[DEFAULT_CAP];
	}
	void addElement(T x)
	{
		if (counter + 1 > capacity)
		{
			std::cout << "Extension Called" << std::endl;
			capacity += DEFAULT_CAP;
			T* tempArray = new T[capacity];
			for (int i = 0; i <counter; i++)
			{
				tempArray[i] = m_buffer[i];
			}
			delete []m_buffer;
			m_buffer = new T[capacity];
			for (int i = 0; i < capacity; i++)
			{
				m_buffer[i] = tempArray[i];
			}
			delete []tempArray;
		}
		m_buffer[counter] = x;
		counter++;
	}
	T at(unsigned int a)
	{
		return m_buffer[a];
	}
	virtual ~Vector()
	{
		delete []m_buffer;
	}
	Vector(const Vector& rhs)
	{
		capacity = rhs.capacity;
		counter = rhs.counter;
		m_buffer = new T[capacity];
		for (int i = 0; i < counter; i++)
		{
			m_buffer[i] = rhs.m_buffer[i];
		}
	}

	friend std::ostream& operator<<(std::ostream& o, Vector& v)
	{
		o << "[";
		if (v.counter < 1)
		{
			o << "]";
			return o;
		}
		int ccount = 0;
		for (int i = 0; i < v.counter-1; i++)
		{
			o << v.m_buffer[i] << " ";
			ccount++;
		}
		o << v.m_buffer[ccount];
		o << "]";
		return o;
		
	}

	inline int Counter() { return counter;  }

	static void Unit_Test(void)
	{
		Vector< int > v;
		for( int i = 0; i < 20; i++ )
		v.addElement(i);
		//std::cout << v.Counter() << std::endl;
		std::cout << v << std::endl;
	}

	void Copy(const Vector& rhs)
	{
		if (this == &rhs)
		{
			return;
		}
		if (m_buffer != 0)
		{
			delete[] m_buffer;
		}
		capacity = rhs.capacity;
		counter = rhs.counter;
		m_buffer = new T[capacity];
		memcpy(m_buffer, rhs.m_buffer, capacity * sizeof(T));
		return;
	}




protected:
	T* m_buffer;
	int counter;
	int capacity;

};

typedef Vector< float > VectorF;
typedef Vector <char> VectorS;

//typedef double Real;
//
//void DoStuff(Real& r);

template <typename T> T DoStuff(T& r)
{
	return r;
}

void Testing();

template <typename T> void BubbleSort(T* rhs, int sizeT)
{
	bool swapped = false;
	do {
		swapped = false;
		for (int i = 0; i < sizeT -1; i++)
		{
			if (rhs[i] > rhs[i + 1])
			{
				int tmp = rhs[i];
				rhs[i] = rhs[i + 1];
				rhs[i + 1] = tmp;
				swapped = true;
			}
		}
	} while (swapped != false);
}



#endif // !VECTOR.H

