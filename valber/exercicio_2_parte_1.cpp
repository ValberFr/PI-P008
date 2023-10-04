#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int array[100];

    for (int i = 0; i < 100; i++)
    {
        array[i] = 1 + rand() % 20;
    }

    int contagem[20] = {0};

    for (int i = 0; i < 100; i++)
    {
        contagem[array[i] - 1]++;
    }

    int maxContagem = 0;
    int numerosMaisFrequentes[20];
    int contadorNumerosMaisFrequentes = 0;

    for (int i = 0; i < 20; i++)
    {
        if (contagem[i] > maxContagem)
        {
            maxContagem = contagem[i];
            contadorNumerosMaisFrequentes = 0;
            numerosMaisFrequentes[contadorNumerosMaisFrequentes++] = i + 1;
        }
        else if (contagem[i] == maxContagem)
        {
            numerosMaisFrequentes[contadorNumerosMaisFrequentes++] = i + 1;
        }
    }

    cout << "Valores gerados no array:" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Quantidade de vezes que cada valor aparece no array:" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << "Valor " << (i + 1) << ": " << contagem[i] << " vezes" << endl;
    }

    cout << "Número(s) que mais vezes aparece(m) no array:" << endl;
    for (int i = 0; i < contadorNumerosMaisFrequentes; i++)
    {
        cout << numerosMaisFrequentes[i] << " ";
    }
    cout << "(aparece " << maxContagem << " vezes)" << endl;

    return 0;
}
