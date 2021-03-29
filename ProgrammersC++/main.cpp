#include "Framework.h"


int main()
{
	vector<int> progresses = {93,30,55 };
	vector<int> speeds = { 1,2,3,4,5 };
	
	
	vector<int> result = PracticeTest(speeds); //= ProgressCheckWorking(progresses,speeds);
	vector<int>::iterator resultIt;
	for (resultIt = result.begin(); resultIt != result.end(); resultIt++)
	{
		cout << *resultIt << endl;
	}
	
	return 0;
}

