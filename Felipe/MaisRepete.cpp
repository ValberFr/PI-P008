#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0));

    const int tamanhoArray = 100;
    const int rangeValores = 20;

    int array[tamanhoArray];

    
    for(int i = 0; i < tamanhoArray; ++i) {
        array[i] = 1 + rand() % rangeValores;
    }

    int contagem[rangeValores] = {0};

    
    for(int i = 0; i < tamanhoArray; ++i) {
        contagem[array[i] - 1]++;
    }

    int maxFrequencia = 0;

    
    for(int i = 0; i < rangeValores; ++i) {
        if(contagem[i] > maxFrequencia) {
            maxFrequencia = contagem[i];
        }
    }

    
    cout << "O(s) número(s) que mais vezes aparece(m) no array é(são): ";
    for(int i = 0; i < rangeValores; ++i) {
        if(contagem[i] == maxFrequencia) {
            cout << (i + 1) << " ";
        }
    }

    cout << endl;

    return 0;
}
