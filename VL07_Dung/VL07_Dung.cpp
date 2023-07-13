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

string ToHop(int, int);

int main()
{
	long long k;
	cin >> k;
	long long n;
	cin >> n;

	cout << ToHop(k, n);
	return 0;
}


string ToHop(int n, int k)
{
	stringstream stream;
	int v = 1;
	double kq = 1;
	if (n == k)
		kq = 1;
	if (n > k)
		for (int i = k + 1; i <= n; i++)
		{
			kq *= i;
			if (v <= n - k)
			{
				kq /= v;
				v++;
			}
		}
	for (int i = v; i <= n - k; i++)
		kq /= i;
	stream << kq;
	return stream.str();
}