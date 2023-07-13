#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

string GiaiBacNhat(int, int);

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    cout << GiaiBacNhat(a, b);
    return 0;
}

string GiaiBacNhat(int a, int b)
{
    string temp;
    if (a == 0)
        if (b == 0)
            temp = "WOW";
        else
            temp = "NO";
    else
    {
        float x = (float)(-b) / a;
        stringstream stream;
        stream << fixed << setprecision(2) << x;
        temp = stream.str();
    }
    return temp;
}
