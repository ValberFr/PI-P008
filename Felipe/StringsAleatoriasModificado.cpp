#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    srand(time(0));

    
    auto gerarCaractereAleatorio = []() {
        return 'a' + rand() % ('z' - 'a' + 1);
    };

    
    auto gerarStringAleatoria = [&gerarCaractereAleatorio]() {
        string str;
        for (int i = 0; i < 10; ++i) {
            str += gerarCaractereAleatorio();
        }
        return str;
    };

    
    vector<string> listaDeStrings(10);

    for (int i = 0; i < 10; ++i) {
        listaDeStrings[i] = gerarStringAleatoria();
    }

    
    for (string& str : listaDeStrings) {
        str[0] = toupper(str[0]);
    }

    
    cout << "Lista de Strings:" << endl;
    for (const string& str : listaDeStrings) {
        cout << str << endl;
    }

    return 0;
}
