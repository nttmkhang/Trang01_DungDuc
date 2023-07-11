#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <algorithm>
using namespace std;

string process(int);
bool KtChinhPhuong(int);

int main()
{
	long n;
	cin >> n;
	cout << process(n);
	return 0;
}

string process(int k)
{
	stringstream stream;
	if (KtChinhPhuong(k))
		stream << "YES";
	else
		stream << "NO";
	return stream.str();
}

bool KtChinhPhuong(int k)
{
	for (int i = 0; i <= k; i++)
		if (i * i == k)
			return true;
	return false;
}