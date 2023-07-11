#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <algorithm>
using namespace std;

string LonNhat(int, int);

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cout << LonNhat(a, b);
	return 0;
}

string LonNhat(int x, int y)
{
	stringstream stream;
	if (x > y)
		stream << x;
	else
		stream << y;
	return stream.str();
}