#include "Framework.h"

/*

수포자는 수학을 포기한 사람의 준말입니다.
수포자 삼인방은 모의고사에 수학문제를 전부 찍으려 합니다.
수포자는 1번 문제부터 마지막 문제까지 다음과 같이 찍습니다.
1번 수포자가 찍는 방식 : 1,2,3,4,5,1,2,3,4,5
2번 수포자가 찍는 방식 : 2,1,2,3,2,4,2,5,2,1,2,3,2,4,2,5
3번 수포자가 찍는 방식 : 3,3,1,1,2,2,4,4,5,5,3,3,1,1,2,2,4,4,5,5

1번 문제부터 마지막 문제까지의 정답이 순서대로 들은 배열 answers가 주어졌을 때
가장 많은 문제를 맞힌 사람이 누구인지 배열에 담아 return 하도록 solution 함수를 작성해주세요.

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