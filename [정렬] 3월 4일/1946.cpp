#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxRecruit(int n)
{
	int doc_score, int_score;	//�����ɻ�, �������� ����
	int max_num = 1;			//���� ������ �ִ� ���Ի�� ��
	int com_score;				//���� ���� ���� ����
	vector<pair<int, int>> score(n);	//���� ���� �迭

	for (int i = 0; i < n; i++)
	{
		cin >> doc_score >> int_score;
		score[i] = make_pair(doc_score, int_score);
	}

	sort(score.begin(), score.end());	//�����ɻ� ������ �������� ����
	com_score = score[0].second;

	for (int i = 1; i < n; i++)			//���ĵ� �迭���� ������� �ڱ� �տ��� ���� �ְ� ������ ��
	{
		if (score[i].second < com_score)	//�ش� �����ڰ� �� ���� �����ڵ鿡���� �ְ� ������������ ���ٸ�	
		{
			max_num++;						//�ִ� �հ� �����ڼ� ����
			com_score = score[i].second;	//�� ������ ������Ʈ
		}
	}

	return max_num;
}

int main()
{
	int t;	//�׽�Ʈ ���̽� ����
	int n;	//������ ����

	//�Է�
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cout << maxRecruit(n) << "\n";
	}
}
