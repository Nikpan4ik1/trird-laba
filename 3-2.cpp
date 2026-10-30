#include <iostream>
using namespace std;

double calculate(double a, double b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) {
                return a / b;
            } else {
                cout << "Ошибка: деление на ноль." << endl;
                return 0; 
            }
        default:
            cout << "Ошибка: неизвестная операция." << endl;
            return 0; 
    }
}

int main(){
    setlocale(LC_ALL, "ru-RU.UTF-8");

    double a, b;
    char op;

    cout << "Уравнение вида: a + b, a - b, a * b, a / b: ";
    cin >> a >> op >> b;

    if (cin.fail()) {
        cout << "Ошибка. Введите числа и операцию." << endl;
        return 1;
    }
    double done = calculate(a, b, op);
    cout << "Результат: " << done << endl;
    return 0;
}