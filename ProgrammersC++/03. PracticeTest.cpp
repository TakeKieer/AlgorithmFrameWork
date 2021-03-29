#include "Framework.h"

/*

�����ڴ� ������ ������ ����� �ظ��Դϴ�.
������ ���ι��� ���ǰ�翡 ���й����� ���� ������ �մϴ�.
�����ڴ� 1�� �������� ������ �������� ������ ���� ����ϴ�.
1�� �����ڰ� ��� ��� : 1,2,3,4,5,1,2,3,4,5
2�� �����ڰ� ��� ��� : 2,1,2,3,2,4,2,5,2,1,2,3,2,4,2,5
3�� �����ڰ� ��� ��� : 3,3,1,1,2,2,4,4,5,5,3,3,1,1,2,2,4,4,5,5

1�� �������� ������ ���������� ������ ������� ���� �迭 answers�� �־����� ��
���� ���� ������ ���� ����� �������� �迭�� ��� return �ϵ��� solution �Լ��� �ۼ����ּ���.

*/

vector<int> PracticeTest(vector<int> answers) 
{
	vector<int> answer;

	int tester1[5] = { 1,2,3,4,5 };
	int tester2[8] = { 2,1,2,3,2,4,2,5 };
	int tester3[10] = { 3,3,1,1,2,2,4,4,5,5 };

#define ARR_SIZE 3
	int score[ARR_SIZE] = { 0 };
	

	for (int i = 0;i < answers.size();i++)
	{
		if (tester1[i % 5] == answers[i]) score[0]++;
		if (tester2[i % 8] == answers[i]) score[1]++;
		if (tester3[i % 10] == answers[i]) score[2]++;
	}

	int maxValue = max(score[0], score[1]);

	for (int i = 1; i < ARR_SIZE - 1;i++)
	{
		if (maxValue < max(score[i], score[i + 1]))
		{
			maxValue = max(score[i], score[i + 1]);
		}
	}
	
	for (int i = 0;i < ARR_SIZE;i++)
	{
		if (score[i] == maxValue)
		{
			answer.push_back(i+1);
		}
	}


	return answer;
}