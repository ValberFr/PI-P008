#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(nullptr));

    const int numEstacoes = 250;
    double temperaturas[numEstacoes];

    // a. Armazenar as temperaturas reportadas por 250 estações meteorológicas
    for (int i = 0; i < numEstacoes; i++) {
        temperaturas[i] = 10.0 + 30.0 * (rand() % 100) / 3000.0;
    }

    // b. Determinar a temperatura máxima e mínima reportadas
    double temperaturaMaxima = temperaturas[0];
    double temperaturaMinima = temperaturas[0];

    for (int i = 1; i < numEstacoes; i++) {
        if (temperaturas[i] > temperaturaMaxima) {
            temperaturaMaxima = temperaturas[i];
        }

        if (temperaturas[i] < temperaturaMinima) {
            temperaturaMinima = temperaturas[i];
        }
    }

    cout << "Temperatura máxima reportada: " << fixed << setprecision(2) << temperaturaMaxima << " graus" << endl;
    cout << "Temperatura mínima reportada: " << fixed << setprecision(2) << temperaturaMinima << " graus" << endl;

    // c. Determinar a temperatura média entre as 250 estações
    double temperaturaMedia = 0.0;
    for (int i = 0; i < numEstacoes; i++) {
        temperaturaMedia += temperaturas[i];
    }
    temperaturaMedia /= numEstacoes;

    cout << "Temperatura média reportada: " << fixed << setprecision(2) << temperaturaMedia << " graus" << endl;

    // d. Atualizar as temperaturas das estações de acordo com o modelo de predição
    for (int i = 0; i < numEstacoes; i++) {
        if (temperaturas[i] > temperaturaMedia) {
            temperaturas[i] += 1.0; // Aumenta 1 grau se estiver acima da média
        } else {
            temperaturas[i] -= 2.0; // Diminui 2 graus se estiver abaixo da média
        }
    }

    // Exibir as temperaturas atualizadas
    cout << "Temperaturas atualizadas das estações:" << endl;
    for (int i = 0; i < numEstacoes; i++) {
        cout << fixed << setprecision(2) << temperaturas[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}
