/*
* ���� �ڵ��ε� ���ؿ����� �ð��ʰ��� ���⵵�ϰ� �ȳ��⵵ �ϰ� �׷��ϴ�...
* �ڵ带 �ٸ��� �����ϴ� ���� �������?
*/


#include <iostream>
#include <map>

using namespace std;

void testMemory()
{
	int n, m, temp;
	map<int, int> note;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		note[temp] = 1;
	}

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		if (note[temp] == 1)
			cout << "1\n";
		else
			cout << "0\n";
		/*
		* Ʃ�͸� �ڷῡ�� 46 �����̵� ������ �κп� �־��� �ڵ带 �������� ��
		* 0�� �������� �� �κ��� �׳�
		* cout << note[temp] << "\n";
		* �� �ص� ����������?
		*/
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;

	cin >> t;
	while (t--)
		testMemory();
}
