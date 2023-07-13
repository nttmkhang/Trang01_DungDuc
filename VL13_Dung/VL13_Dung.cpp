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
bool KtHoanHao(long);

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
	if (KtHoanHao(x))
		stream << "YES";
	else
		stream << "NO";
	return stream.str();
}

bool KtHoanHao(long x)
{
	long s = 0;
	for (long i = 1; i < x; i++)
		if (x % i == 0)
			s += i;
	if (s == x)
		return true;
	else
		return false;
}