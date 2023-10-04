#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    double temperaturas[250], temperaturaMedia, temperaturaMaxima, temperaturaMinima, somaTemperaturas;

    for (int i = 0; i < 250; i++)
    {
        temperaturas[i] = 10 + 30.0 * (rand() % 100) / 100.0;
    }

    temperaturaMaxima = temperaturas[0];
    temperaturaMinima = temperaturas[0];
    somaTemperaturas = temperaturas[0];

    for (int i = 1; i < 250; i++)
    {
        if (temperaturas[i] > temperaturaMaxima)
        {
            temperaturaMaxima = temperaturas[i];
        }
        if (temperaturas[i] < temperaturaMinima)
        {
            temperaturaMinima = temperaturas[i];
        }
        somaTemperaturas += temperaturas[i];
    }

    temperaturaMedia = somaTemperaturas / 250;

    cout << "Temperatura Máxima: " << temperaturaMaxima << endl;
    cout << "Temperatura Mínima: " << temperaturaMinima << endl;
    cout << "Temperatura Média: " << temperaturaMedia << endl;

    for (int i = 0; i < 250; i++)
    {
        if (temperaturas[i] > temperaturaMedia)
        {
            temperaturas[i] += 1.0;
        }
        else
        {
            temperaturas[i] -= 2.0;
        }
    }

    cout << "\nTemperaturas após a atualização do modelo de predição:" << endl;
    for (int i = 0; i < 250; i++)
    {
        cout << "Estação " << i + 1 << ": " << temperaturas[i] << " graus" << endl;
    }

    return 0;
}
