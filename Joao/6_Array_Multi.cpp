#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    const int largura = 640;
    const int altura = 480;

    // Inicializa o gerador de números aleatórios com uma semente
    srand(time(nullptr));

    // Cria uma matriz para representar a imagem (640x480 pixels)
    vector<vector<int>> imagem(altura, vector<int>(largura));

    // Preenche a matriz da imagem com valores aleatórios de intensidade de iluminação
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            imagem[i][j] = rand() % 256; // Gera valores aleatórios entre 0 e 255
        }
    }

    // Cria um vetor para armazenar o histograma
    vector<int> histograma(256, 0);

    // Calcula o histograma da imagem
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            int intensidade = imagem[i][j];
            histograma[intensidade]++;
        }
    }

    // Imprime o histograma
    cout << "Histograma da imagem:" << endl;
    for (int i = 0; i < 256; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}
