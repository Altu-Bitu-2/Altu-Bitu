#include <iostream>
#include <deque>
#include <vector>

using namespace std;

void findInitCard(vector<int>& vec, deque<int>& deq, int size)
{
	for (int i = 1; i <= size; i++)
	{
		int x = vec[size - i];
		if (x == 1)
		{
			//�� �տ� ����
			deq.push_front(i);
		}
		else if (x == 2)
		{
			//�� �տ� �ִ� �� ������ i���� ī�带 �տ� ���� ���� �ٽ� �տ� ����
			int temp = deq.front();
			deq.pop_front();
			deq.push_front(i);
			deq.push_front(temp);
		}
		else
		{
			//�� �ڿ� ����
			deq.push_back(i);
		}
	}
}

int main()
{
	int n;
	vector<int> seq;
	deque<int> card;
	
	cin >> n;
	seq.assign(n, 0);

	for (int i = 0; i < n; i++)
		cin >> seq[i];

	findInitCard(seq, card, n);
	while(!card.empty())
	{
		cout << card.front() << " ";
		card.pop_front();
	}
	cout << "\n";
}