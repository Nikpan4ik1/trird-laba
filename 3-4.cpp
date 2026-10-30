#include <iostream>
#include <string>

using namespace std;

string encryptCaesar(string text, int shift) {
    for (int i = 0; i < text.size(); i++) {
        char c = text[i];
        if (c >= 'a' and c <= 'z')
            text[i] = 'a' + (c - 'a' + shift) % 26;
        else if (c >= 'A' and c <= 'Z')
            text[i] = 'A' + (c - 'A' + shift) % 26;
    }
    return text;
}
string decryptCaesar(string text1, int shift1) {
    return encryptCaesar(text1, 26 - shift1);
}

int main() {
    setlocale(LC_ALL, "ru-RU.UTF-8");

    string text, text1;
    int shift, shift1;

    cout << "Задание №4. Шифр Цезаря" << endl;

    cout << "Введите текст для шифрования: ";
    getline(cin, text);

    cout << "Введите сдвиг (целое число): ";
    cin >> shift;
    
    if (cin.fail()) {
        cout << "Ошибка ввода. Введите целое число для сдвига." << endl;
        return 1;
    }

    string encryptedText = encryptCaesar(text, shift);
    cout << "Зашифрованный текст: " << encryptedText << endl;
    
    cin.ignore();
    cout << "" << endl;

    cout << "Задание №4.1 Шифр Цезаря" << endl;

    cout << "Введите текст для расшифрования: ";
    getline(cin, text1);

    cout << "Введите сдвиг (целое число): ";
    cin >> shift1;

    if (cin.fail()) {
        cout << "Ошибка ввода. Введите целое число для сдвига." << endl;
        return 1;
    }

    if (shift < 0 or shift1 < 0) {
        cout << "Ошибка. Сдвиг должен быть неотрицательным." << endl;
        return 1;
    }

    string decryptedText = decryptCaesar(text1, shift1);
    cout << "Расшифрованный текст: " << decryptedText << endl;
    return 0;
}