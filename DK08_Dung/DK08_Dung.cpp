#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

string Tinh(double, char, double);

int main()
{
	double a;
	double b;
	char m;
	cin >> a;
	cin >> m;
	cin >> b;

	cout << Tinh(a, m, b);
	return 0;
}

string  Tinh(double a, char m, double b)
{
	stringstream stream;
	if (m == '/' && b == 0)
	{
		stream << "Math Error";
		return stream.str();
	}
	double kq;
	switch (m)
	{
	case '+':
		kq = (a + b);
		break;
	case '-':
		kq = a - b;
		break;
	case '*':
		kq = a * b;
		break;
	case '/':
		kq = a / b;
		break;
	}
	stream << fixed << setprecision(2) << kq;
	return stream.str();
}