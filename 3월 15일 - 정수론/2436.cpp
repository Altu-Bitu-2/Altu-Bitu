/* (����)
* ���� �����غ��� ���� ���� ����̶� ���� �����µ�
* ���ؿ����� Ʋ���ٰ� �մϴ�. �� ������ ����ص� �� �𸣰ھ
* ���庸�� �ͽ��ϴ�!
*/
#include <iostream>

using namespace std;

int gcd(int x, int y)
{
	if (y == 0)
		return x;
	
	return gcd(y, x % y);
}

pair<int, int> gcdLcm(int n, int m)
{
	int a = 0, b = 0;
	int min = n + m;
	int temp;
	for (int i = 2; n * i <= m / i; i++)
	{
		if (m % i == 0 && (gcd(m / i, n * i) == n))
		{
			temp = n * i + m / i;
			if (min > temp)
			{
				min = temp;
				a = n * i;
				b = m / i;
			}
		}	
	}

	return make_pair(a, b);
}

int main()
{
	int n, m;
	cin >> n >> m;
	
	auto answer = gcdLcm(n, m);
	cout << answer.first << ' ' << answer.second << '\n';
}