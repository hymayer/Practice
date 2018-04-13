template <class T> class Stack
{
public:
	Stack();
	~Stack();
	void push(T t);
	T pop();
	bool isEmpty();

private:
	T *m_pT;
	int m_maxSize;
	int m_size;
};
#pragma once
