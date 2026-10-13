
#include <iostream>
#include <cmath>

using namespace std;

// Prototyp funktsii
double f(double a, double b, double c);

int main()
{
    double s, t;

    cout << "s = ";
    cin >> s;

    cout << "t = ";
    cin >> t;

    double x = f(1, 1, t * t + s * s);

    double result = (f(t, s, 2) + f(1, s + t, t - s))
        / (1 + x * x);

    cout << "Result = " << result << endl;

    return 0;
}

// Vyznachennia funktsii
double f(double a, double b, double c)
{
    return (a + b + c) /
        (pow(sin(a * b), 2) + c * c);
}
