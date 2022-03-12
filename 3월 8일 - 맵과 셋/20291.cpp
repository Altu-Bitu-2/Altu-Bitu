#include <iostream>
#include <map>

using namespace std;

void filenameExt(int n)
{
	string filename;
	map<string, int> ext;

	for (int i = 0; i < n; i++)
	{
		cin >> filename;
		int pos = filename.find(".");	
		ext[filename.substr(pos + 1)]++;	//.�ڿ� ���ڿ��� Ű�� value ���� �ϳ� ����
	}

	for (auto iter = ext.begin(); iter != ext.end(); iter++)
	{
		cout << iter->first << " " << iter->second << "\n";
	}
}

int main()
{
	int n;
	cin >> n;

	filenameExt(n);
}
