// VL05_Dung.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

long long Tong(long);

int main()
{
	long n;
	cin >> n;
	cout << Tong(n);
	return 0;
}

long long Tong(long x)
{
	long s = 0;
	int dau = +1;
	for (int i = 1; i <= 3 * x + 1; i++)
	{
		s = s + dau * i;
		dau = -dau;
	}
	return s;
}