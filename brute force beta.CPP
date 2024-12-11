#include <iostream>
#include <string>

using namespace std;

void bruteForce(const string& characters, string currentPassword, int maxLength) {
    // Если текущая длина пароля достигла максимальной, выводим пароль
    if (currentPassword.length() == maxLength) {
        cout << currentPassword << endl;
        return;
    }

    // Перебираем каждый символ из набора
    for (char c : characters) {
        // Добавляем текущий символ к паролю и продолжаем
        bruteForce(characters, currentPassword + c, maxLength);
    }
}

int main() {
    string characters = "0123456789"; // Набор символов для перебора
    int maxLength;
    cout << "длина пароля: "<<endl;
    cin>>maxLength;

    cout << "Перебор паролей:" <<endl;
    bruteForce(characters, "", maxLength);

    return 0;
}