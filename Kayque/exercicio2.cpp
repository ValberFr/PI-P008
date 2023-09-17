#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(nullptr));

    const int tamanhoArray = 100;
    const int valorMaximo = 20;

    // a. Preencher um array com 100 elementos de inteiros aleatórios entre 1 e 20
    int array[tamanhoArray];
    for (int i = 0; i < tamanhoArray; i++) {
        array[i] = 1 + rand() % valorMaximo;
    }

    // b. Utilizar um array de 20 posições para contar quantas vezes cada valor aparece
    int contador[valorMaximo] = {0}; // Inicializa o contador com zeros

    for (int i = 0; i < tamanhoArray; i++) {
        contador[array[i] - 1]++; // Decrementa 1 para ajustar o índice do contador
    }

    // c. Determinar qual ou quais números aparecem mais vezes no array
    int maxOcorrencias = 0;
    cout << "Números que mais vezes aparecem no array:" << endl;
    for (int i = 0; i < valorMaximo; i++) {
        if (contador[i] > maxOcorrencias) {
            maxOcorrencias = contador[i];
            cout << i + 1 << " ";
        } else if (contador[i] == maxOcorrencias) {
            cout << i + 1 << " ";
        }
    }

    cout << endl;

    return 0;
}
