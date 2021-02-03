#include "List.h"

template<typename T>
inline List<T>::List()
{
}

template<typename T>
inline List<T>::List(List<T>&)
{
}

template<typename T>
inline List<T>::~List()
{
}

template<typename T>
inline void List<T>::destroy()
{
}

template<typename T>
inline Iterator<T> List<T>::begin()
{
	return Iterator<T>();
}

template<typename T>
inline Iterator<T> List<T>::end()
{
	return Iterator<T>();
}

template<typename T>
inline bool List<T>::contains(const T& object)
{
	return false;
}

template<typename T>
inline const void List<T>::pushFront(const T& value)
{
	return void();
}

template<typename T>
inline void List<T>::pushBack(const T& value)
{
}

template<typename T>
inline bool List<T>::insert(const T& value, int index)
{
	return false;
}

template<typename T>
inline bool List<T>::remove(const T& value)
{
	return false;
}

template<typename T>
inline const void List<T>::print()
{
	return void();
}

template<typename T>
inline void List<T>::initialize()
{
}

template<typename T>
inline const bool List<T>::isEmpty()
{
	return false;
}

template<typename T>
inline bool List<T>::getData(Iterator<T>& iter, int index)
{
	return false;
}

template<typename T>
inline const int List<T>::getLength()
{
	return 0;
}

template<typename T>
inline const List<T>& List<T>::operator=(const List<T>& otherList)
{
	// TODO: insert return statement here
}

template<typename T>
inline void List<T>::sort()
{
}

template<typename T>
inline Iterator<T>::Iterator()
{
}

template<typename T>
inline Iterator<T>::Iterator(Node<T>* node)
{
}

template<typename T>
inline Iterator<T> Iterator<T>::operator++()
{
	return Iterator<T>();
}

template<typename T>
inline Iterator<T> Iterator<T>::operator--()
{
	return Iterator<T>();
}

template<typename T>
inline const bool Iterator<T>::operator==(const Iterator<T>& iter)
{
	return false;
}

template<typename T>
inline const bool Iterator<T>::operator!=(const Iterator<T>& iter)
{
	return false;
}

template<typename T>
inline T Iterator<T>::operator*()
{
	return T();
}

template<typename T>
inline Node<T>::Node()
{
}

template<typename T>
inline Node<T>::Node(T value)
{
}
