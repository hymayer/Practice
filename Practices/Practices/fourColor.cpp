#include <iostream>
#include <vector>

using namespace std;


/*Ϊ��ǰ�ڵ�i��ɫ��graph��ͼ���������,history��¼��ǰ����ɫ���*/
void dfs(int i,vector<vector<int>> graph,vector<int> &history,int &count)
{
	int c;//c��ȡֵ��1-5����ʾ������ɫ
	if (i == graph.size())
	{
		vector<int>::iterator iter = history.begin();
		while (iter!=history.end())
		{
			cout << *iter << "";
			iter++;
		}
		cout << endl;
		count++;//��ǰ�Ѿ������������еĽڵ㣬�൱���ҵ�һ����ɫ����
		return;
	}
	
	for (c = 1; c <= 5; c++)
	{
		int ok = 1;
		for (int j = 0; j < i; j++)
		{
			if (graph[i][j] && history[j] == c)
				ok = 0;//���������ʹ������ͬ����ɫ
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