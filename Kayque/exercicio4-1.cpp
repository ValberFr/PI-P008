#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int larguraImagem = 640;
const int alturaImagem = 480;
const int numeroIntensidades = 256;

// a. Função para gerar uma intensidade aleatória entre 0 e 255
int gerarIntensidadeAleatoria() {
    return rand() % numeroIntensidades;
}

// b. Função para construir o histograma a partir da imagem
vector<int> construirHistograma(const vector<vector<int>>& imagem) {
    vector<int> histograma(numeroIntensidades, 0);

    for (int y = 0; y < alturaImagem; y++) {
        for (int x = 0; x < larguraImagem; x++) {
            int intensidade = imagem[y][x];
            histograma[intensidade]++;
        }
    }

    return histograma;
}

int main() {
    srand(time(nullptr));

    // Simule a captura de uma imagem com intensidades aleatórias
    vector<vector<int>> imagem(alturaImagem, vector<int>(larguraImagem));
    for (int y = 0; y < alturaImagem; y++) {
        for (int x = 0; x < larguraImagem; x++) {
            imagem[y][x] = gerarIntensidadeAleatoria();
        }
    }

    // Construa o histograma da imagem
    vector<int> histograma = construirHistograma(imagem);

    // Imprima o histograma
    for (int i = 0; i < numeroIntensidades; i++) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}
