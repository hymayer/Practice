#include <iostream>
#include <vector>

using namespace std;




void dfs(int index, int M, vector<int> data,vector<int> &interSet, vector<vector<int>> &result)
{
	if (M==0)
	{
		result.push_back(interSet);
		return;
	}

	for (int i = index; i < data.size(); i++)
	{
		if (data[i] > M)
			return;
		
		interSet.push_back(data[i]);
	    dfs(i + 1, M - data[i], data, interSet, result);
		interSet.pop_back();		
		
	}

}



int main()
{
	int N,M;
	cin >> N>>M;
	vector<int> data = vector<int>(N);
	for (int i = 0; i < N; i++)
		cin >> data[i];

	vector<vector<int>> result;
	vector<int> interSet;

	dfs(0, M, data,interSet, result);

	for (int i = 0; i < result.size(); i++)
	{
		for (int j = 0; j < result[i].size(); j++)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}