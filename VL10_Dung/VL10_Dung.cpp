// vl10-DemChuSo.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int DemChuSo(string);

int main()
{
    string n;
    cin >> n;

    cout << DemChuSo(n);
    return 0;
}

int DemChuSo(string x)
{
    int dem = x.length();
    if (x[0] == '-')
        dem--;
    return dem;
}