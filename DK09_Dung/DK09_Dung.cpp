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
bool KiemTraNamNhuan(long);

int main()
{
	long a;
	cin >> a;
	cout << process(a);
	return 0;
}

string process(long x)
{
	stringstream stream;
	if (x <= 0 || x > 100000)
		stream << "INVALID";
	else
	{
		if (KiemTraNamNhuan(x))
			stream << "YES";
		else
			stream << "NO";
	}
	return stream.str();
}

bool KiemTraNamNhuan(long x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		return true;
	return false;
}