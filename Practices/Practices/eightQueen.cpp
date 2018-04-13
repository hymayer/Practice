#include <iostream>
#include <stdio.h>

using namespace std;

const int N = 8;
int C[N];//第i行皇后所在的列编号
int total = 0;

//逐行打印结果
void output()
{
	printf("no.%d\n", total);
	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			if (C[i] == j)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
}

bool check(int row, int column)
{
	bool ok = true;
	for (int i = 0; i < row; i++)
	{
		if (C[i] == column || row - i == column - C[i] || row - i == C[i] - column)
		{
			ok = false;
			break;
		}
	}
	return ok;
}

int search(int row)
{
	if (row == N)
	{
		total++;
		output();
		return total;
	}

	for (int j = 0; j < N; j++)
	{
		bool ok = check(row, j);
		if (ok)
		{
			C[row] = j;
			search(row + 1);
		}
	}
	//return total;
}

void enhtQuen()
//int main()
{
	int result = search(0);
	system("pause");
	//return 0;
}