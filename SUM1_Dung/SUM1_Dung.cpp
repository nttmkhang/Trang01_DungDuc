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

string Tong(long);

int main()
{
	long n;
	cin >> n;
	cout << Tong(n);
	return 0;
}

string Tong(long x)
{
	stringstream stream;
	if (x % 2 == 0)
		stream << (x / 2) * (x + 1);
	else
		stream << ((x + 1) / 2) * x;
	return stream.str();
}