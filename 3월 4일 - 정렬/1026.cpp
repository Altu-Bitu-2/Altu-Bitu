/*
* ���� �Է��� �־��� �� ���� ����� �����µ� 
* �����ϸ� Ʋ�ȴٰ� �ϴ��󱸿�...
* ��� Ʋ�ȴ��� ����غ��� �� �𸣰ھ
* ���庸�� �ͽ��ϴ�...
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
int resorting(int n, vector<int>& a, vector<int> b)
{
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (b[i] < b[j] && a[i] < a[j])			//b�� ���� ���� a�� ���� ���� ��
				swap(a[i], a[j]);					//b[i]�� ���� �� ũ�� �������� a[i]���� �� �۾ƾ���
			else if (b[i] > b[j] && a[i] > a[j])
				swap(a[i], a[j]);
		}
	}

	for (int i = 0; i < n; i++)
		ans += a[i] * b[i];

	return ans;
}
*/

int resorting(int n)
{
	vector<int> a(n, 0), b(n, 0);
	int ans = 0;

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<>());

	for (int i = 0; i < n; i++)
		ans += a[i] * b[i];

	return ans;
}

int main()
{
	int n;
	cin >> n;
	
	cout << resorting(n) << "\n";
}