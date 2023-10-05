#include <iostream>
#include <vector>

using namespace std;


int randomIntensity() {
    return rand() % 256;
}

int main() {
    const int largura = 640;
    const int altura = 480;

    
    vector<vector<int>> imagem(altura, vector<int>(largura));

    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < largura; ++j) {
            imagem[i][j] = randomIntensity();
        }
    }

    
    vector<int> histograma(256, 0);

    for (int i = 0; i < altura; ++i) {
        for (int j = 0; j < largura; ++j) {
            histograma[imagem[i][j]]++;
        }
    }

    
    for (int i = 0; i < 256; ++i) {
        cout << i << ": " << histograma[i] << endl;
    }

    return 0;
}
