#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <algorithm>
using namespace std;
string ChenhLech(int, int);
int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cout << ChenhLech(a, b);
	return 0;
}

string ChenhLech(int x, int y)
{
	stringstream stream;
	stream << abs(x - y);
	return stream.str();
}