#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

string Xuat(vector<long>);
void Nhap(vector<long>&);

int main()
{
    vector<long> b;
    Nhap(b);
    sort(b.begin(), b.end());
    cout << Xuat(b);
    return 0;
}

void Nhap(vector<long>& a)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long x;
        cin >> x;
        a.push_back(x);
    }
}

string Xuat(vector<long> a)
{
    stringstream stream;
    for (int i = a.size() - 1; i >= 0; i--)
        stream << a[i] << " ";
    return stream.str();
}