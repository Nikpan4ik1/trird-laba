#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru-RU.UTF-8");

    srand(time(NULL));
    int rand_num = 1 + rand() % 100;

    int vvod;

    cout << "Задание №5. Угадай число" << endl;
    
    bool correct = false;
    int c = 0; 
    do {
        cout << "Введите число от 1 до 100: ";
        cin >> vvod;

        if (cin.fail()) {
            cout << "Ошибка ввода. Введите целое число." << endl;
            return 1;
        }
        if (vvod < 1 or vvod > 100) {
            cout << "Ошибка. Число должно быть в диапазоне от 1 до 100." << endl;
            return 1;
        }

        if (c == 0) {
            if (rand_num % 2 == 0) {
                cout << "Загаданное число четное число." << endl;
                c++;
            } else {
                cout << "Загаданное число нечетное число." << endl;
                c++;
            }
        }
        if (vvod < rand_num) {
            cout << "Загаданное число больше."<< endl;
            cout << "Попробуйте снова: "<< endl;
        } else if (vvod > rand_num) {
            cout << "Загаданное число меньше."<< endl; 
            cout << "Попробуйте снова: "<< endl;
        } else {
            cout << "Поздравляем! Вы угадали число " << rand_num << "!" << endl;
            correct = true;
        }
    } while (correct == false);

    return 0;
}