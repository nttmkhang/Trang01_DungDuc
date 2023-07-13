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

string DaoNguoc(string);

int main()
{
	string n;
	cin >> n;

	cout << DaoNguoc(n);
	return 0;
}

string DaoNguoc(string x)
{
	stringstream stream;
	string dn;
	long cs = x.length();
	while (x[cs - 1] == '0')
		cs--;
	for (int i = 0; i <= cs - 1; i++)
		dn = x[i] + dn;
	stream << dn;
	return stream.str();
}