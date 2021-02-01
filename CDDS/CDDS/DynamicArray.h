#pragma once
#include <iostream>

template<typename T> 
class DynamicArray 
{
public:
	DynamicArray<T>();
	~DynamicArray<T>();
	void addItem(T);
	bool removeItem(T);
	void sortItems();
	bool getItem(int index, T* item);
	int getLength();
	void print();
private:
	T* m_items;
	int m_length;
};

template<typename T>
inline DynamicArray<T>::DynamicArray()
{
}

template<typename T>
inline DynamicArray<T>::~DynamicArray()
{
	delete[] m_items;
}

template<typename T>
inline void DynamicArray<T>::addItem(T item) 
{
	T* temp = new T[getLength() + 1];

	for (int i = 0; i < getLength(); i++) 
	{
		temp[i] = m_items[i];
	}

	temp[getLength()] = item;

	m_items = temp;

	m_length++;
}

template <typename T>
inline bool DynamicArray<T>::removeItem(T item) 
{
	bool itemRemoved = false;

	T* temp = new T[getLength() - 1];

	int j = 0;
	for (int i = 0; i < getLength(); i++) 
	{
		if (item != temp[i]) 
		{
			temp[j] = m_items[i];
			j++;
		}
		else 
		{
			itemRemoved = true;
		}
	}

	m_items = temp;

	return itemRemoved;
}

template <typename T>
inline void DynamicArray<T>::sortItems() 
{
	for (int i = 0; i < getLength(); i++) 
	{
		for (int j = getLength() - 1; j > i; j--) 
		{
			if (m_items[j] < m_items[j - 1]) 
			{
				T temporary = m_items[j];
				m_items[j] = m_items[j - 1];
				m_items[j - 1] = temporary;
			}
		}
	}
}

template <typename T>
inline bool DynamicArray<T>::getItem(int index, T* item) 
{
	if (!item || index < 0 || index >= getLength()) 
	{
		return false;
	}

	item = &m_items[index];

	return true;;
}

template<typename T>
inline int DynamicArray<T>::getLength()
{
	return m_length;
}

template<typename T>
inline void DynamicArray<T>::print()
{
	for (int i = 0; i < getLength(); i++) 
	{
		std::cout << m_items[i] << std::endl;
	}
}
