#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <algorithm>
using namespace std;

string LonNhat(int, int, int);

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << LonNhat(a, b, c);
	return 0;
}

string LonNhat(int x, int y, int z)
{
	stringstream stream;
	if (z > max(x, y))
		stream << z;
	else
		stream << max(x, y);
	return stream.str();
}