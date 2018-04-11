#include <iostream>
#include <vector>
using namespace std;

void dfs(int i,int N,int index, vector<int> &visited)
{

	if (index == N)
	{
		cout << endl;
		return;
	}

	visited[i] = 1;
	cout << i << " ";

	for (int j = 0; j < N; j++)
	{
		if (!visited[j])
		{
			dfs(j, N,++index, visited);
		}
	}
}

//int fullPermutation()
int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		vector<int> visited=vector<int>(N, 0);
		dfs(i,N,0,visited);
	}
		

	system("pause");
	return 0;
}