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

string Tong(int);

int main()
{
	int n;
	cin >> n;
	cout << Tong(n);
	return 0;
}

string Tong(int x)
{
	stringstream stream;
	float s = 0;
	for (int i = 2; i <= x; i++)
		s += (float)1 / i;
	stream << fixed << setprecision(4) << s;
	return stream.str();
}