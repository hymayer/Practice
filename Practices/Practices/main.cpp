#include <stdio.h>
#include <iostream>
#include "stack.h"
#include "stack.cpp"
using namespace std;

int main()
{
	Stack<int> intStack;
	intStack.push(1);
	intStack.push(2);
	intStack.push(3);

	while (!intStack.isEmpty())
	{
		printf("num:%d\n",intStack.pop());
	}

	system("pause");
	return 0;
}































//#include "practice.h"

//int main()
//{
//	//practice();
//	fourColor();
//	system("pause");
//	return 0;
//}


//�ݹ�����㷨α����
//void backtrack(t)
//{
//	if (t > n)Output(x);//Output��¼�������ǰ���н�
//	else
//	{
//		for (int i = f(n, t); i <= g(n, t); i++)
//		{//f(n,t)��g(n,t)�ֱ��ʾ�ڵ�ǰ�ڵ�δ����������������ʼ��ź���ֹ���
//			x[t] = h(i);
//			if (contraint(t) && bound(t))backtrack(t + 1);//constraint��bound�ֱ���Լ�������ͽ��޺���
//
//		}
//	}
//}



//���������㷨α����
//void iterativeBacktrack()
//{
//	int t = 1;
//	while (t > 0)
//	{
//		if (f(n, t) < g(n, t))
//		{
//			for (int i = f(n, t); i < g(n, t); i++)
//			{//���for�Ǳ�������ֵ����˼��ʵ����д��for�����߼�����
//				x[t] = h(i);
//				if (constraint(t) && bound(t))
//				{
//					if (sSolution(t))Output(x);//Solution�ж��Ƿ��Ѿ��õ�����Ľ�
//					else t + ;
//				}
//
//			}
//		}
//		t--;
//	}
//}

/*
DP���ĸ�����
1���������Ž�Ľṹ���������һ��״̬����ʾ���Ž�
2���ݹ�ض������Ž��ֵ���ҳ�״̬ת�Ʒ��̣�Ȼ��ݹ�ض���
3���������Ž��ֵ�����͵ķ������Ե����ϣ�Ҳ�����Զ�����
4�����ݼ�������еõ�����Ϣ����������Ž�
*/