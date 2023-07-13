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

void LietKe(long, long);

int main()
{
	long a;
	cin >> a;
	long b;
	cin >> b;
	LietKe(a, b);
	return 0;
}

void LietKe(long x, long y)
{
	for (long i = x; i <= y; i++)
		cout << i << " ";
}