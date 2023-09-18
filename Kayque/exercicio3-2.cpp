#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>

using namespace std;

string gerarStringAleatoria() {
    string str;
    for (int i = 0; i < 10; i++) {
        char c = 'a' + rand() % ('z' - 'a' + 1);
        str.push_back(c);
    }
    return str;
}

int main() {
    srand(time(nullptr));

    // Gere duas strings aleatórias
    string str1 = gerarStringAleatoria();
    string str2 = gerarStringAleatoria();

    // Transforme o primeiro caractere de cada string em maiúscula
    if (!str1.empty()) {
        str1[0] = toupper(str1[0]);
    }
    if (!str2.empty()) {
        str2[0] = toupper(str2[0]);
    }

    // Imprima as strings em ordem alfabética
    cout << "Strings geradas:" << endl;
    cout << str1 << endl;
    cout << str2 << endl;

    cout << "Strings em ordem alfabética:" << endl;
    if (str1 < str2) {
        cout << str1 << endl;
        cout << str2 << endl;
    } else {
        cout << str2 << endl;
        cout << str1 << endl;
    }

    return 0;
}
