#include "Framework.h"

void VectorTestSpace();

int main()
{
	VectorTestSpace();
	
	return 0;
}

// Vector 사용법 공간
void VectorTestSpace()
{
	vector<int> number = { 5,0,2,7 };
	vector<int> result = SelectTwoNumberAdd(number);
	vector<int>::iterator resultIt;

	for (resultIt = result.begin(); resultIt != result.end(); resultIt++)
	{
		cout << *resultIt << endl;
	}
}