#include <iostream>
#include <Windows.h>
using namespace std;

double f(double x) {
    return x * x - 4;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, epsilon, c;

    cout << "������ ��� ���� ������: ";
    cin >> a;
    cout << "������ ����� ���� ������: ";
    cin >> b;
    cout << "������ �������: ";
    cin >> epsilon;

    if (f(a) * f(b) >= 0) {
        cout << "���� ������ �� �������� ������." << endl;
        return 1;
    }

    while (b - a > epsilon) {
        c = (a + b) / 2;
        if (f(c) == 0) {
            break;
        }
        else if (f(a) * f(c) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }

    cout << "��������� �������� ������: " << c << endl;

    return 0;
}