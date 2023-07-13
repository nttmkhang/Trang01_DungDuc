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

long TongChan(int, int);

int main()
{
	int a;
	cin >> a;
	int b;
	cin >> b;
	cout << TongChan(a, b);
	return 0;
}

long TongChan(int x, int y)
{
	long s = 0;
	for (int i = min(x, y); i <= max(x, y); i++)
		if (i % 2 == 0)
			s += i;
	return s;
}