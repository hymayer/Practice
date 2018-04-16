#include "stack.h"
#include <stdio.h>
#include <iostream>

template <class T> Stack<T>::Stack()
{
	m_maxSize = 100;
	m_size = 0;
	m_pT = new T[m_maxSize];
}

template <class T> Stack<T>::~Stack()
{
	delete[] m_pT;
}

template <class T> void Stack<T>::push(T t)
{
	m_size++;
	m_pT[m_size - 1] = t;
}

template <class T> T Stack<T>::pop()
{
	T t = m_pT[m_size - 1];
	m_size--;
	return t;
}

template <class T> bool Stack<T>::isEmpty()
{
	return m_size == 0;
}

int test_stack()
{
	Stack<int> intStack;
	intStack.push(1);
	intStack.push(2);
	intStack.push(3);

	while (!intStack.isEmpty())
	{
		printf("num:%d\n", intStack.pop());
	}

	system("pause");
	return 0;
}