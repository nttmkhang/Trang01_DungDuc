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
	int UCLN = ucln(x, y);
	cout << x / UCLN << " " << y / UCLN;
}