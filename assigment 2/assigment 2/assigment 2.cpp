/*COMP-111 Programming Principles I Assignment 2
Dmitrii Frolov U214N1483*/
#include <iostream>
using namespace std;

int sort() 
{
	int x1, x2, x3, x4, srt;
	cin >> x1 >> x2 >> x3 >> x4;
	for (int i = 0; i <= 4; i++)
	{
		if (x1 > x2)
		{
			srt = x1;
			x1 = x2;
			x2 = srt;
		}
		if (x2 > x3)
		{
			srt = x2;
			x2 = x3;
			x3 = srt;
		}
		if (x3 > x4)
		{
			srt = x3;
			x3 = x4;
			x4 = srt;
		}
	}
	cout << "The midle numbers are " << x2 << " and " << x3;

	return 0;
}

int main()
{
	cout << "Enter 4 numbers: ";
	sort();
}