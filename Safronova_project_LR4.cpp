#include <iostream>
#include <string>

using namespace std;

void EnterK(int &number) {
    string rawNumber;
    
    while (true)
    {
        cout << "Введите число K" << endl;
        getline(cin, rawNumber);
        try {
            stoi(rawNumber);
            break;
        } catch (...) {}
    }
    
    number = stoi(rawNumber);
}

void EnterN(int &number) {
    string rawNumber;
    
    while (true)
    {
        cout << "Введите число N" << endl;
        getline(cin, rawNumber);
        try {
            stoi(rawNumber);
            break;
        } catch (...) {}
    }
    
    number = stoi(rawNumber);
}

bool FindDigitsFromRToL(int n, int k) {}

bool FindDigitsFromLToR(int n, int k) {}

int main() {
    int K; // Для хранения числа K
    int N; // Для хранения номера цифры

    while (true) {
        cout << "\nВыберите действие:" << endl;
        cout << "1. Ввести число K и цифру N" << endl;
        cout << "2. Найти N-ю цифру справа" << endl;
        cout << "3. Найти N-ю цифру слева" << endl;
        cout << "4. Выход" << endl;
        cout << "Ваш выбор: ";
        
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите натуральное число K: ";
                EnterK(K);
                cout << "Введите цифру N: ";
                EnterN(N);
                break;
            case 2:
                if (N <= 0) {
                    cout << "Сначала введите число K и цифру N." << endl;
                } else {
                    FindDigitsFromRToL(N, K);
                }
                break;
            case 3:
                if (N <= 0) {
                    cout << "Сначала введите число K и цифру N." << endl;
                } else {
                    FindDigitsFromLToR(N, K);
                }
                break;
            case 4:
                cout << "Выход из программы." << endl;
                return 0;
            default:
                cout << "Неверный выбор, попробуйте заново." << endl;
        }
    }
}
