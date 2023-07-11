// CB07_Dung.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
	float r;
	cin >> r;
	cout << fixed << setprecision(3) << r * 2 * 3.14;
	cout << " ";
	cout << fixed << setprecision(3) << r * r * 3.14;
	return 0;
}