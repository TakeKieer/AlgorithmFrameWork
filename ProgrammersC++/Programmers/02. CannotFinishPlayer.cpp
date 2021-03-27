#include "../Framework.h"

string CannotFinishPlayer(vector<string> participant, vector<string> completion)
{
	string answer = "";

	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());

	for (int i = 0; i < participant.size(); i++)
	{
		if (participant[i] != completion[i])
		{
			answer = participant[i];
			break;
		}
	}

	return answer;
}