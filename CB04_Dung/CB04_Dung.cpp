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


int main()
{
	long a;
	cin >> a;
	long b;
	cin >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	if (b == 0)
		cout << "ERROR";
	else
		cout << fixed << setprecision(2) << (float)a / b;
	return 0;
}