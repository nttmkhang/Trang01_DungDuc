#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

string GiaiBacNhat(int, int);
string GiaiBacHai(int, int, int);

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;

    cout << GiaiBacHai(a, b, c);
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

string GiaiBacHai(int a, int b, int c)
{
    if (a == 0)
        return GiaiBacNhat(b, c);

    string temp;
    int delta = b * b - 4 * a * c;
    if (delta < 0)
        temp = "NO";
    else
        if (delta == 0)
        {
            float x0 = (float)(-b) / (2 * a);
            stringstream stream;
            stream << fixed << setprecision(2) << x0;
            temp = stream.str();
        }
        else
        {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            stringstream stream;
            if (x1 < x2)
                stream << fixed << setprecision(2) << x1 << " " << x2;
            else
                stream << fixed << setprecision(2) << x2 << " " << x1;
            temp = stream.str();
        }
    return temp;
}