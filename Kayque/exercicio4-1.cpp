#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const int numStrings = 10;
const int tamString = 10;

// Função para gerar uma letra minúscula aleatória
char gerarLetraAleatoria() {
    return 'a' + rand() % 26;
}

// Função para gerar uma string aleatória
string gerarStringAleatoria() {
    string str;
    for (int i = 0; i < tamString; i++) {
        str += gerarLetraAleatoria();
    }
    return str;
}

// Função para transformar o primeiro caractere em maiúscula
string primeiraLetraMaiuscula(const string& str) {
    string result = str;
    if (!str.empty()) {
        result[0] = toupper(result[0]);
    }
    return result;
}

int main() {
    srand(time(nullptr));

    // Gerar uma lista de 10 strings aleatórias
    vector<string> strings(numStrings);
    for (int i = 0; i < numStrings; i++) {
        strings[i] = gerarStringAleatoria();
    }

    // Substituir o primeiro caractere de cada string por maiúscula
    for (int i = 0; i < numStrings; i++) {
        strings[i] = primeiraLetraMaiuscula(strings[i]);
    }

    // Ordenar as strings em ordem alfabética
    sort(strings.begin(), strings.end());

    // Imprimir as strings
    for (int i = 0; i < numStrings; i++) {
        cout << strings[i] << endl;
    }

    return 0;
}
