#include <iostream>
#include <vector>

using namespace std;

void reverseCard(int a, int b, vector<int>& list)
{
	while (a < b)	//������ ����Ű�� �ε����� ��ȿ�� ������
	{
		swap(list[a++], list[b--]);	//swap�ϰ� ������ ��������
	}
}

int main()
{
	int a, b;
	vector<int> arr(20, 0);
	for (int i = 0; i < 20; i++)
		arr[i] = i + 1;

	//�Է� �� ����
	for (int i = 0; i < 10; i++)
	{
		cin >> a >> b;
		reverseCard(a - 1, b - 1, arr);
	}

	//���
	for (int i = 0; i < 20; i++)
		cout << arr[i] << " ";
		
}
