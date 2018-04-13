#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;


/*给定一个数字N,输出N的全排列，visited记录一个不同的排列*/
void dfs(int i,int N, vector<int> &visited)
{

	if (i == N)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d", visited[j]);
		}
		cout << endl;
		return;
	}

	for (int k = 1; k <= N; k++)
	{
		int ok = 1;
		for (int j = 0; j < i; j++)
		{
			
			if (visited[j] == k)
				ok = 0;
		}
		if (ok)
		{
			visited[i] = k;
			dfs(i + 1, N, visited);
		}
	}
}

int fullPermutation()
//int main()
{
	int N;
	cin >> N;

	vector<int> visited=vector<int>();// = vector<int>(N, 0);
	dfs(0,N,visited);

	system("pause");
	return 0;
}