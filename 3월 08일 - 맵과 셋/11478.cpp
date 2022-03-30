#include <iostream>
#include <set>

using namespace std;

int countSubstr(string str)
{
	set<string> substr;

	for (int i = 0; i < str.size(); i++)
	{
		for (int j = 1; j <= str.size() - i + 1; j++)
		{
			substr.insert(str.substr(i, j));	//i�� �ε������� ���� j�� ���ڿ��� set�� ����
		}
	}

	return substr.size();
}

int main()
{
	string s;
	cin >> s;
	
	cout << countSubstr(s) << "\n";
}
