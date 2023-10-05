#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool validarData(int dia, int mes, int ano) {
    if (ano < 1 || mes < 1 || mes > 12 || dia < 1)
        return false;

    int diasNoMes;

    switch (mes) {
        case 2:
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                diasNoMes = 29;
            } else {
                diasNoMes = 28;
            }
            break;
        case 4: case 6: case 9: case 11:
            diasNoMes = 30;
            break;
        default:
            diasNoMes = 31;
    }

    return dia <= diasNoMes;
}

void imprimirDataPorExtenso(int dia, int mes, int ano) {
    string nomesMeses[12] = {
        "janeiro", "fevereiro", "março", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    cout << dia << " de " << nomesMeses[mes - 1] << " de " << ano << endl;
}

int main() {
    int dia, mes, ano;

    string dataStr;
    cout << "Digite a data no formato dd/mm/aaaa: ";
    getline(cin, dataStr);

    stringstream ss(dataStr);
    char delimiter;
    ss >> dia >> delimiter >> mes >> delimiter >> ano;

    if (validarData(dia, mes, ano)) {
        cout << "\nData válida!" << endl;
        imprimirDataPorExtenso(dia, mes, ano);
    } else {
        cout << "\nData inválida!" << endl;
    }

    return 0;
}
