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
long long Tong(int);

int main()
{
	int n;
	cin >> n;
	cout << Tong(n);
	return 0;
}

long long Tong(int x)
{
	long long s = 0;
	for (int i = 2; i <= x; i++)
		s += i;
	return s + 2 * x;
}