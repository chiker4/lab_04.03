// Lab_04_03.cpp
// <Чикеречко Андрій>
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою
// Варіант 19
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, a, b, c, F;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(11) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x < 5 && b != 0) {
            F = a * (x + 7) * (x + 7) - b;
        }
        else if (x > 5 && b == 0) {
            F = (x - c * a) / a / x;
        }
        else {
            F = x / c;
        }
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(11) << setprecision(3) << F
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}