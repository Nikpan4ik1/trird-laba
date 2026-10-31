#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru-RU.UTF-8");

    cout << "Задание №5. Угадай число" << endl;
    cout << "" << endl;

    int nach, kon;
    cout << "Введите начало и конец. "<< endl;
    cout << "Начало: ";
    cin >> nach;
    if (cin.fail()) {
        cout << "Ошибка ввода. Введите целое число." << endl;
        return 1;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Конец: ";
    cin >> kon;

    if (cin.fail()) {
        cout << "Ошибка ввода. Введите целое число." << endl;
        return 1;
    }
    if ( nach>= kon){
        cout << "Ошибка ввода. Начало не может быть больше конца. " << endl;
        return 1;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "" << endl;
    srand(time(NULL));
    int rand_num = nach + rand() % kon;

    int vvod;


    
    bool correct = false;
    int c = 0; 
    do {
        cout << "Введите число от " << nach << " до " <<kon <<": ";
        cin >> vvod;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (cin.fail()) {
            cout << "Ошибка ввода. Введите целое число." << endl;
        }
        if (vvod < nach or vvod > kon) {
            cout << "Ошибка. Число должно быть в диапазоне от" << nach << " до " <<kon <<endl;
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
            cout << "" << endl;
        } else if (vvod > rand_num) {
            cout << "Загаданное число меньше."<< endl; 
            cout << "Попробуйте снова: "<< endl;
            cout << "" << endl;
        } else {
            cout << "Поздравляем! Вы угадали число " << rand_num << "!" << endl;
            correct = true;
        }
    } while (correct == false);

    return 0;
}