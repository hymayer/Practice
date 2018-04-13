#include <iostream>
#include <vector>
#include <String>

using namespace std;


/*
param[in]s:������ַ���
param[in]startIndex:���ַ��������￪ʼ�ж�
param[in]step:�����ҵ���ip��ַ����һ�Σ���ȡ0,1,2,3,4
param[out]ip;�洢�м����
param[out]result:�洢�����
*/
void dfs(string s, int startIndex, int step, string &ip,vector<string> &result)
{
	if (startIndex == s.size() && step == 4)
	{//�ҵ�һ���Ϸ���
		ip.resize(ip.size() - 1);
		result.push_back(ip);
		return;
	}

	if (s.size() - startIndex > (4 - step) * 3||s.size()-startIndex<4-step)
	{//���Ϸ��ĵĽ⣬��֦
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
			break;//������ǰ׺Ϊ0����������0
	}
}

vector<string> restoreIP(string s)
{
	vector<string> result;
	string ip;//ip����м���
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