#include <stdio.h>
#include <iostream>
#include <assert.h>


using namespace std;

char* strcpy(char* strDest, char* strSrc)
{
	assert(strDest!=NULL);
	assert(strSrc != NULL);

	char *ret = strDest;
	int i = 0;
	for (; strSrc[i] != '\n'; i++)
	{
		strDest[i] = strSrc[i];
	}
	strDest[i] = '\n';
	return ret;//这里的返回值是为了实现链式表达式

}

bool strcmp(char* strDest, char* strSrc)
{
	int i = 0;
	bool isCmp = true;
	for (; strSrc[i] != '\n'; i++)
	{
		if (strDest[i] != strSrc[i])
		{
			isCmp = false;
			break;
		}
	}
	if (strDest[i] != '\n')
		isCmp = false;

	return isCmp;
}

int strcmp(const char* s1, const char* s2)
{
	while (*s1 != '\n')
	{
		if (*s1 != *s2)
		{
			return -1;
		}
		else
		{
			s1++;
			s2++;
		}
	}
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


//递归回溯算法伪代码
//void backtrack(t)
//{
//	if (t > n)Output(x);//Output记录或输出当前可行解
//	else
//	{
//		for (int i = f(n, t); i <= g(n, t); i++)
//		{//f(n,t)和g(n,t)分别表示在当前节点未搜索过的子树的起始编号和终止编号
//			x[t] = h(i);
//			if (contraint(t) && bound(t))backtrack(t + 1);//constraint和bound分别是约束函数和界限函数
//
//		}
//	}
//}



//迭代回溯算法伪代码
//void iterativeBacktrack()
//{
//	int t = 1;
//	while (t > 0)
//	{
//		if (f(n, t) < g(n, t))
//		{
//			for (int i = f(n, t); i < g(n, t); i++)
//			{//这个for是遍历各个值的意思，实际中写成for会有逻辑错误
//				x[t] = h(i);
//				if (constraint(t) && bound(t))
//				{
//					if (sSolution(t))Output(x);//Solution判断是否已经得到问题的解
//					else t + ;
//				}
//
//			}
//		}
//		t--;
//	}
//}

/*
DP的四个步骤
1、描述最优解的结构。即抽象出一个状态来表示最优解
2、递归地定义最优解的值。找出状态转移方程，然后递归地定义
3、计算最优解的值。典型的方法是自底向上，也可以自顶向下
4、根据计算过程中得到的信息，构造出最优解
*/