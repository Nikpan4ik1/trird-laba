#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c) {
    if (a>b and a>c) {
        return a;
    } else if (b>a && b>c) {
        return b;
    } else if (c>a && c>b) {
        return c;
    } 
    else {
        cout << "Ошибка. НЕ смогли найти максимальное число" << endl;
        return 0;
    }
}

int main(){
    setlocale(LC_ALL, "ru-RU.UTF-8");
    int a, b, c;

    cout << "Введите три числа(через пробел): ";
    cin >> a >> b >> c;

    if (cin.fail()) {
        cout << "Ошибка. Введите числа." << endl;
        return 1;
    }

    int max = maxOfThree(a, b, c);
    cout << "Максимальное число: " << max << endl;

    return 0;
}