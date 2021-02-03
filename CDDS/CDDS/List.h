#pragma once

template<typename T>
class List
{
public:
	List();
	List(List<T>&);
	~List();
	void destroy();
	Iterator<T> begin();
	Iterator<T> end();
	bool contains(const T& object);
	const void pushFront(const T& value);
	void pushBack(const T& value);
	bool insert(const T& value, int index);
	bool remove(const T& value);
	const void print();
	void initialize();
	const bool isEmpty();
	bool getData(Iterator<T>& iter, int index);
	const int getLength();
	const List<T>& operator = (const List<T> & otherList);
	void sort();
private:
	Node<T> m_first;
	Node<T> m_last;
	int m_nodeCount;

};

template<typename T>
class Node
{
public:
	Node();
	Node(T value);
	Node<T>* next;
	Node<T>* previous;
	T data;

};

template<typename T>
class Iterator
{
public:
	Iterator();
	Iterator(Node<T>* node);
	Iterator<T> operator ++();
	Iterator<T> operator --();
	const bool operator == (const Iterator<T> & iter);
	const bool operator != (const Iterator<T> & iter);
	T operator *();
private:
	Node<T>* current;

};