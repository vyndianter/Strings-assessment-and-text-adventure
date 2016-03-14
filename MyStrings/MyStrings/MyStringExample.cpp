class DynamicArray
{
public:

	DynamicArray(int capacity)
	{
		m_capacity = capacity;
		m_size = 0;
		m_array = new int[m_capacity];
	}
	~DynamicArray()
	{
		if (m_array != nullptr) //if the array exists, delete it 
		{
			delete[] m_array;
		}
	}

	void Add(int item)
	{
		if (m_size < m_capacity) //if size is less that capacity
		{
			m_array[m_size++] = item; // + 1 to size and fill the new spot with item
		}
		else
		{
			m_capacity += m_capacity;
			int* tempArray = new int[m_capacity];
			for (int i = 0; i < m_size; i++) // for loop to move items from m_array to tempArray
			{
				tempArray[i] = m_array[i];
			}
			delete[] m_array; // deleting previous array
			tempArray[m_size++] = item; // filling the tempArray with data
			m_array = tempArray; // Putting the tempArray back into the original m_array, dont use delete ad that will delete the data in both arrays. the else will delete it when it ends
		}
	}






private:

	int* m_array;
	int m_capacity;
	int m_size;
};