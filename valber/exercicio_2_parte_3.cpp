#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0));

    float notas1[15];
    float notas2[15];
    float media[15];

    cout << "Notas primeira prova: " << endl;
    for (int i = 0; i < 15; i++)
    {
        notas1[i] = ((float)rand() / RAND_MAX) * 10;
        cout << "Aluno " << i + 1 << " :" << setprecision(2) << notas1[i] << endl;
    }

    cout << "\nNotas segunda prova: " << endl;
    for (int i = 0; i < 15; i++)
    {
        notas2[i] = ((float)rand() / RAND_MAX) * 10;
        cout << "Aluno " << i + 1 << " :" << setprecision(2) << notas2[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < 15; i++)
    {
        media[i] = (notas1[i] + notas2[i]) / 2;

        if (notas2[i] > notas1[i])
        {
            cout << "Aluno " << i + 1 << ": Melhorou" << endl;
        }
        else if (notas2[i] < notas1[i])
        {
            cout << "Aluno " << i + 1 << ": Piorou" << endl;
        }
        else
        {
            cout << "Aluno " << i + 1 << ": Manteve a nota" << endl;
        }
    }

    cout << "\nMédias das duas avaliações:" << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << "Aluno " << i + 1 << ": " << setprecision(2) << media[i] << endl;
    }

    return 0;
}
