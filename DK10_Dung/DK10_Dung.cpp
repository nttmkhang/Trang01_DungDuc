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
bool KtNamNhuan(long);
string NgayTrongThang(int, long);

int main()
{
	int m;
	cin >> m;
	long y;
	cin >> y;
	
	cout << NgayTrongThang(m, y);
	return 0;
}


bool KtNamNhuan(long x)
{
	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
		return true;
	return false;
}

string NgayTrongThang(int k, long z)
{
	stringstream stream;
	if (k <= 0 || z <= 0 || k > 12 || z > 100000)
		stream << "INVALID";
	int Day[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (k == 2)
	{
		if (KtNamNhuan(z))
			stream << Day[2] + 1;
		else
			stream << Day[2];
	}
	stream << Day[k % 13];
	return stream.str();
}