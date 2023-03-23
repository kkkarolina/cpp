#include<iostream>
#include<math.h>

using namespace std;

double a, b, c, x, d, x1, x2;

int main() {
    cout << "Podaj wspolczynnik a: ";
    cin >> a;
    cout << "Podaj wspolczynnik b: ";
    cin >> b;
    cout << "Podaj wspolczynnik c: ";
    cin >> c;
    cout << a << "x^2+" << b << "x+" << c << "=0" << endl;
    if (a == 0) {
        x = -c / b;
        cout << "x=" << x;
        return 0;
    }
    d = b * b - 4 * a * c;
    if (d > 0) {
        d = sqrt(d);
        x1 = (-b - d) / (2 * a);
        x2 = (-b + d) / (2 * a);
        cout << "x1=" << x1 << " x2=" << x2 << endl;
    } else if (d == 0) {
        x = -b / (2 * a);
        cout << "x=" << x << endl;
    } else {
        cout << "Brak rozwiazan rzeczywistych" << endl;
    }
    return 0;
}
