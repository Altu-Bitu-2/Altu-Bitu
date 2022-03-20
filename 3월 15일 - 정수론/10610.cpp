#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void thirty(vector<int>& arr)
{
	/*
	* 30�� ������� 10���� ���������鼭 �������� ���� ������ ���� 3�� ����� �ȴ�.
	* 30�� ����� �������� 0�� ���ԵǾ�� �ϸ� ��� ���� ���� 3�� ������� �ϹǷ� ���� ū ���� ���� ū ���ں��� ������������ ������ ���̴�.
	*/
	int sum = 0;

	sort(arr.begin(), arr.end(), greater<>());	//������������ sorting
	if (arr[arr.size() - 1] != 0)	//10���� ���������� ������ ���ڸ��� 0�̾�� ��
	{
		cout << -1 << "\n";
		return;
	}

	for (int i = 0; i < arr.size(); i++)
		sum += arr[i];

	if (sum % 3 != 0)	//���� 3�� ����� �ƴϸ� 30�� ����� �ƴ�
	{
		cout << -1 << "\n";
		return;
	}

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i];
	cout << "\n";
}

int main()
{
	string s;
	vector<int> arr;
	
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		arr.push_back(s[i] - '0');

	thirty(arr);
}