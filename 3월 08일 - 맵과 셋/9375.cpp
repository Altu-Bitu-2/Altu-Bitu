#include <iostream>
#include <map>

using namespace std;

int numCloth(int n)
{
	int ans = 1;
	string cloth, type;
	map<string, int> cl;

	while (n--)
	{
		cin >> cloth >> type;
		cl[type]++;
	}

	for (auto iter = cl.begin(); iter != cl.end(); iter++)
	{
		ans *= (iter->second + 1);	//���� ���� + 1(�� ���� ���)
	}

	return ans - 1;	//���� �� ���� ��� ����
}

int main()
{
	int t, n;
	cin >> t;

	while (t--)
	{
		cin >> n;
		cout << numCloth(n) << "\n";
	}
}
