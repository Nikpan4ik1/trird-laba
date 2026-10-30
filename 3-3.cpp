#include <iostream>
using namespace std;

int fibonacci(int n) {
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(){
    setlocale(LC_ALL, "ru-RU.UTF-8");

    int n;

    cout << "Введите число n: ";
    cin >> n;

    if (n < 0) {
        cout << "Ошибка. Число n должно быть неотрицательным." << endl;
        return 1;
    }
    if (cin.fail()) {
        cout << "Ошибка ввода. Введите число." << endl;
        return 1;
    }


    cout << "Число Фибоначчи под номером " << n << " равно " << fibonacci(n) << endl;

    return 0;
}