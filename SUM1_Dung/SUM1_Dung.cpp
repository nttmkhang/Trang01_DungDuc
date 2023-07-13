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
	stringstream stream;
	if (x % 2 == 0)
		return (x / 2) * (x + 1);
	else
		return ((x + 1) / 2) * x;
}