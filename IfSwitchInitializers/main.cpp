#include <iostream>
using namespace std;

bool check(int x, int y)
{
	return x == y;
}

int switchArg(int x, int y)
{
	if (x > y)
		return 1;
	else
		return 2;
}

int main()
{
	if (bool s = check(1, 0); s)
	{
		cout << "The numbers are equal" << endl;
	}
	else
	{
		cout << "The numbers are not equal" << endl;
	}

	switch (int t = switchArg(10, 20); t)
	{
	case 1:
		cout << "x is greater than y" << endl;
		break;

	case 2:
		cout << "y is greater than x" << endl;
		break;

	default:
		cout << "Please choose a correct answer" << endl;
		break;
	}

	cin.get();
}