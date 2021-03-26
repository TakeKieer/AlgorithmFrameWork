#include "Framework.h"

vector<int> SelectTwoNumberAdd(vector<int> numbers)
{
	vector<int> answer;

	for (int i = 0;i < numbers.size();i++)
	{
		for (int j = i + 1; j < numbers.size(); j++)
		{
			int check = numbers[i] + numbers[j];

			bool isSet = false;
			for (int index = 0; index < answer.size(); index++)
			{
				if (check == answer[index])
				{
					isSet = true;
				}
			}
			if (!isSet) answer.push_back(check);
		}
	}
	
	sort(answer.begin(), answer.end());

	return answer;
}