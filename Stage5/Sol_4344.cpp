#include <iostream>

using namespace std;

double percent(int* stu, double avg, int num) {
	int count = 0;
	for (int i = 1; i <= stu[0]; i++)
	{
		if (stu[i] > avg)
		{
			count++;
		}
	}

	return ((double)count / (double)stu[0]) * 100;
}

int main() {
	int n, stu[1001];
	double per[100] = { 0 };

	// Input TC
	cin >> n; 

	// TC 만큼 반복
	for (int i = 0; i < n; i++)
	{
		// 첫번째 인덱스 : 학생 수, 그 이후로 각 학생의 점수
		int count = 0;
		double sum = 0;
		double avg = 0;
		while (true)
		{
			cin >> stu[count];
			if (count != 0)
			{
				sum += stu[count];
			}
			if (stu[0] == count)
			{
				break;
			}
			count++;
		}
		avg = sum / (double)(stu[0]);
		per[i] = percent(stu, avg, i);
	}

	for (int i = 0; i < n; i++)
	{
		cout << fixed;
		cout.precision(3);
		cout << per[i] << "%" << '\n';
	}
	return 0;
}
