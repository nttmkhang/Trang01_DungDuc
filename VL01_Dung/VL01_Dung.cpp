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

string LietKe(long, long);

int main()
{
	long a;
	cin >> a;
	long b;
	cin >> b;
	LietKe(a, b);
	return 0;
}

string LietKe(long x, long y)
{
	stringstream stream;
	for (long i = x; i <= y; i++)
		stream << i << " ";
	return stream.str();
}