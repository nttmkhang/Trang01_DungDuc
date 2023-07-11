// VL15_Dung.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool KtHopLe(int, int);
int ucln(int, int);
void RutGon(int, int);

int main()
{
	int a;
	cin >> a;
	int b;
	cin >> b;

	RutGon(a, b);
	return 0;
}

bool KtHopLe(int x, int y)
{
	if (y == 0)
		return false;
	return true;
}

int ucln(int x, int y)
{
	x = abs(x);
	y = abs(y);
	while (y > 0)
	{
		x = x % y;
		swap(x, y);
	}
	return x;
}

void RutGon(int x, int y)
{
	if (KtHopLe(x, y))
	{
		int UCLN = ucln(x, y);
		if (x % y == 0)
			cout << x / y;
		else
			if (x * y > 0)
				cout << abs(x / UCLN) << " " << abs(y / UCLN);
			else 
				cout << -abs(x / UCLN) << " " << abs(y / UCLN);
	}
	else
		cout << "INVALID";
}