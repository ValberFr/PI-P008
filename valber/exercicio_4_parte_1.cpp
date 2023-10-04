#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand((time(0)));

    int imagem[480][640];

    for (int y = 0; y < 480; ++y) {
        for (int x = 0; x < 640; ++x) {
            imagem[y][x] = rand() % 256;
        }
    }

    int histograma[256] = {0};
    for (int y = 0; y < 480; ++y) {
        for (int x = 0; x < 640; ++x) {
            int intensidade = imagem[y][x];
            histograma[intensidade]++;
        }
    }

    for (int i = 0; i < 256; ++i) {
        cout << "Intensidade " << i << ": " << histograma[i] << " pixels" << endl;
    }

    return 0;
}
