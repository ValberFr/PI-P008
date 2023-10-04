#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string data, dia, mes, ano;
    int diaInt, mesInt, anoInt;
    bool ehBissexto = (anoInt % 4 == 0 && anoInt % 100 != 0) || (anoInt % 400 == 0);

    cout << "Digite uma data no formato dd/mm/aaaa: ";
    getline(cin, data);

    stringstream ss(data);

    getline(ss, dia, '/');
    getline(ss, mes, '/');
    getline(ss, ano, '/');

    diaInt = stoi(dia);
    mesInt = stoi(mes);
    anoInt = stoi(ano);

    if (anoInt >= 1 && mesInt >= 1 && mesInt <= 12 && diaInt >= 1)
    {
        int diasNoMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (ehBissexto)
        {
            diasNoMes[2] = 29;
        }

        if (diaInt <= diasNoMes[mesInt])
        {
            string meses[] = {"", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
            cout << diaInt << " de " << meses[mesInt] << " de " << anoInt << endl;
        }
        else
        {
            cout << "Data inválida!" << endl;
        }
    }
    else
    {
        cout << "Data inválida!" << endl;
    }

    return 0;
}
