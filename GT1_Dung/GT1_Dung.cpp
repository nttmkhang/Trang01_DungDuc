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

string GiaiThua(long long);

int main()
{
	long long n;
	cin >> n;
	cout << GiaiThua(n);
	return 0;
}

string GiaiThua(long long x)
{
	stringstream stream;
	long long T = 1;
	for (int i = 1; i <= x; i++)
		T *= i;
	stream << T;
	return stream.str();
}