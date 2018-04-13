#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

/*
param[in]nums:���뼯��
param[in]target:Ŀ���
param[]index:
param[out]intermediate:�м���
param[out]result:�����
*/
void dfs(vector<int> nums, int target, int level, vector<int> &intermediate, vector<vector<int>> &result)
{//ͬһ��Ԫ�ؿ����ظ�ʹ��
	if (target == 0)
	{//�ҵ�һ���Ϸ���
		result.push_back(intermediate);
		return;
	}

	for (int i = level; i < nums.size(); i++)
	{
		if (target < nums[i])
			return;//��֦

		intermediate.push_back(nums[i]);
		dfs(nums, target - nums[i], i, intermediate, result);
		intermediate.pop_back();
	}
}


/*
param[in]nums:���뼯��
param[in]target:Ŀ���
param[]index:
param[out]intermediate:�м���
param[out]result:�����
*/
void dfs2(vector<int> nums, int target, int level, vector<int> &intermediate, vector<vector<int>> &result)
{//ÿ��Ԫ�����ֻ����һ��
	if (target == 0)
	{//�ҵ�һ���Ϸ���
		result.push_back(intermediate);
		return;
	}

	for (int i = level; i < nums.size(); i++)
	{
		if (target < nums[i])
			return;//��֦

		intermediate.push_back(nums[i]);
		dfs2(nums, target - nums[i], i+1, intermediate, result);
		intermediate.pop_back();
	}
}


vector<vector<int>> combinationSum(vector<int> nums, int target)
{
	vector<vector<int>> result;
	vector<int> intermediate;
	//dfs(nums, target, 0, intermediate, result);
	dfs2(nums, target, 0, intermediate, result);
	return result;
}

//int main()
int conbinationSum()
{
	int target,N;
	std::cin >> target>>N;
	vector<int> nums=vector<int>(N);
	for (int i = 0; i < N; i++)
		std::cin >> nums[i];
	std::sort(nums.begin(), nums.end());
	vector<vector<int>> result;

	result = combinationSum(nums, target);
	for (int i = 0; i < result.size(); i++)
	{
		printf("[");
		for (int j = 0; j < result[i].size(); j++)
			cout << result[i][j] << " ";
		printf("]\n");
	}

	system("pause");

	return 0;
}