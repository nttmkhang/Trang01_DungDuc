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

double Tong(int);

int main()
{
	int n;
	cin >> n;
	cout << fixed << setprecision(4) << Tong(n);
	return 0;
}

double Tong(int x)
{
	double s = 0;
	for (int i = 2; i <= x; i++)
		s += (double)1 / i;
	return s;
}