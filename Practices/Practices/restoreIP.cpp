#include <iostream>
#include <vector>
#include <String>

using namespace std;


/*
param[in]s:输入的字符串
param[in]startIndex:从字符串的哪里开始判断
param[in]step:现在找的是ip地址的哪一段，可取0,1,2,3,4
param[out]ip;存储中间变量
param[out]result:存储最后结果
*/
void dfs(string s, int startIndex, int step, string &ip,vector<string> &result)
{
	if (startIndex == s.size() && step == 4)
	{//找到一个合法解
		ip.resize(ip.size() - 1);
		result.push_back(ip);
		return;
	}

	if (s.size() - startIndex > (4 - step) * 3||s.size()-startIndex<4-step)
	{//不合法的的解，剪枝
		return;
	}

	int num = 0;
	for (int i = startIndex; i < startIndex + 3; i++)
	{
		num = num*10+s[i] - '0';
		if (num <= 255)
		{
			ip+=s[i];
			dfs(s, i + 1,step + 1, ip + '.', result);
		}
		if (num == 0)
			break;//不允许前缀为0，但允许单个0
	}
}

vector<string> restoreIP(string s)
{
	vector<string> result;
	string ip;//ip存放中间结果
	dfs(s, 0, 0, ip, result);
	return result;
}

//int main()
void restoreIP()
{
	vector<string> result;
	string s;
	std::cin >> s;

	result = restoreIP(s);

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}

	system("pause");
	//return 0;
}