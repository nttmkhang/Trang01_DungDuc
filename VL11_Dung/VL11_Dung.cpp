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

string process(long);
bool KtNguyenTo(long);

int main()
{
	long n;
	cin >> n;
	cout << process(n);
	return 0;
}

string process(long x)
{
	stringstream stream;
	if (KtNguyenTo(x))
		stream << "YES";
	else
		stream << "NO";
	return stream.str();
}

bool KtNguyenTo(long x)
{
	if (x <= 1)
		return false;
	if (x == 2)
		return true;
	if (x == 3)
		return true;
	if (x % 2 == 0)
		return false;
	if (x % 3 == 0)
		return false;
	for (long i = 5; i * i <= x; i += 6)
		if (x % i == 0 || x % (i + 2) == 0)
			return false;
	return true;
}
