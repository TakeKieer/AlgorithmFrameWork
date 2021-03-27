#include "Framework.h"


int main()
{
	vector<int> progresses = {93,30,55 };
	vector<int> speeds = { 1,30,5 };
	
	
	vector<int> result; //= ProgressCheckWorking(progresses,speeds);
	vector<int>::iterator resultIt;
	for (resultIt = result.begin(); resultIt != result.end(); resultIt++)
	{
		cout << *resultIt << endl;
	}
	
	return 0;
}

