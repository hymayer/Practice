#include <iostream>
#include <vector>

using namespace std;


/*为当前节点i着色，graph是图的连接情况,history记录当前的着色情况*/
void dfs(int i,vector<vector<int>> graph,vector<int> &history,int &count)
{
	int c;//c的取值从1-5，表示四种颜色
	if (i == graph.size())
	{
		vector<int>::iterator iter = history.begin();
		while (iter!=history.end())
		{
			cout << *iter << "";
			iter++;
		}
		cout << endl;
		count++;//当前已经遍历过了所有的节点，相当于找到一种着色方案
		return;
	}
	
	for (c = 1; c <= 5; c++)
	{
		int ok = 1;
		for (int j = 0; j < i; j++)
		{
			if (graph[i][j] && history[j] == c)
				ok = 0;//结点相邻且使用了相同的颜色
		}
		if (ok)
		{
			history[i]=c;
			dfs(i + 1, graph, history, count);
		}
	}
}

//int main()
int fourColor()
{

	int N;
	cin >> N;
	vector<int> history =vector<int>(N,0);
	int count = 0;
	vector<vector<int>> graph= vector<vector<int>>(N,vector<int>(N,0));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> graph[i][j] ;
		}
		
	}
		
	dfs(0, graph, history, count);

	cout << count << "" << endl;
	system("pause");
	return 0;
}