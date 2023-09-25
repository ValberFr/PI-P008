#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  srand(time(0));

  string lista[10];

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {

      lista[i] += 'a' + rand() % ('z' - 'a');
    }
    lista[i][0] = toupper(lista[i][0]);
  }

  sort(lista, lista + 10);

  // Imprima as strings ordenadas
  for (int i = 0; i < 10; i++)
  {
    cout << lista[i] << endl;
  }

  return 0;
}