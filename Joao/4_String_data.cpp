#include <iostream>
#include <regex>
#include <string>

using namespace std;

bool dataValida(const string &data)
{
  // Expressão regular para validar o formato dd/mm/aaaa
  regex data_regex(R"((\d{2})/(\d{2})/(\d{4}))");

  smatch match;
  if (regex_match(data, match, data_regex))
  {

    int dia, mes, ano;

    dia = stoi(match[1]);
    mes = stoi(match[2]);
    ano = stoi(match[3]);

    string meses[] = {
        "Janeiro", "Fevereiro", "Março", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano >= 0)
    {
      int dia_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

      if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
      {
        dia_mes[2] = 29;
      }
      if (dia <= dia_mes[mes])
      {
        cout << dia << " de " << meses[mes-1] << " de " << ano << endl;
        return true;
      }
    }
  }

  cout << "Data inválida." << endl;
  return false;
}

int main()
{
  string data;
  cout << "Digite uma data no formato dd/mm/aaaa: ";
  cin >> data;

  if(dataValida(data)){
    
  }

  return 0;
}
