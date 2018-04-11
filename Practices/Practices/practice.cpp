#include "practice.h"

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void percDown(vector<int> &arry,int i,int N)
{//传入当前需要下沉的元素下标i，将其在当前的堆中下沉
	int temp;
	int child;
	for (temp = arry[i]; i < N; i = child)
	{ 
		child = 2 * i + 1;
		if (child<N-1&&arry[child] < arry[child + 1])
			child++;
		/*if (child<N - 1 && temp < arry[child])
		{
			arry[i] = arry[child];
			arry[child] = temp;
		}*/
		if (child<N - 1 && temp < arry[child])
			arry[i] = arry[child];
		else
			break;
	}

}

void heapSort()
{
	int N;
	cin >> N;
	vector<int> arry;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		arry.push_back(a);
	}

	//建立堆
	for (int i = N / 2; i >= 0; i--)
		percDown(arry, i,N);

	for (int i = N - 1; i > 0; i--)
	{
		swap(arry[0], arry[i]);
		percDown(arry, 0, i);
	}

	for (int i = 0; i < N; i++)
		cout << arry[i] << " ";
}



void practice()
{
	heapSort();
}