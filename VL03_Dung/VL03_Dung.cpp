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
	int s = 0;
	for (int i = 2; i <= x; i++)
		s += i;
	stream << s + 2 * x;
	return stream.str();
}