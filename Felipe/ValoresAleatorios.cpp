#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int numAlunos = 15;

    float notasAvaliacao1[numAlunos];
    float notasAvaliacao2[numAlunos];
    float mediasAlunos[numAlunos];

    for(int i = 0; i < numAlunos; ++i) {
        notasAvaliacao1[i] = ((float)rand() / RAND_MAX) * 10;
        notasAvaliacao2[i] = ((float)rand() / RAND_MAX) * 10;
    }

    for(int i = 0; i < numAlunos; ++i) {
        if(notasAvaliacao2[i] > notasAvaliacao1[i]) {
            cout << "Aluno " << i+1 << ": Melhorou" << endl;
        } else if(notasAvaliacao2[i] < notasAvaliacao1[i]) {
            cout << "Aluno " << i+1 << ": Piorou" << endl;
        } else {
            cout << "Aluno " << i+1 << ": Manteve a nota" << endl;
        }
    }

    for(int i = 0; i < numAlunos; ++i) {
        mediasAlunos[i] = (notasAvaliacao1[i] + notasAvaliacao2[i]) / 2;
    }

    cout << "\nMédias dos Alunos:" << endl;
    for(int i = 0; i < numAlunos; ++i) {
        cout << "Aluno " << i+1 << ": " << mediasAlunos[i] << endl;
    }

    return 0;
}
