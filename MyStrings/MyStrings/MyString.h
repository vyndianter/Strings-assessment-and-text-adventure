#pragma once

class MyStrLength
{
public:

	MyStrLength(int capacity)
	{
		m_capacity = capacity;
		m_size = 0;
		m_array = new int[m_capacity];
	}
	~MyStrLength()
	{
		if (m_array != nullptr) 
		{
			delete[] m_array;
		}
	}

	void Add(int item)
	{
		if (m_size < m_capacity) 
		{
			m_array[m_size++] = item; 
		}
		else
		{
			m_capacity += m_capacity;
			int* tempArray = new int[m_capacity];
			for (int i = 0; i < m_size; i++) 
			{
				tempArray[i] = m_array[i];
			}
			delete[] m_array;
			tempArray[m_size++] = item; 
			m_array = tempArray;
		}
	}
private:

	int* m_array;
	int m_capacity;
	int m_size;
};