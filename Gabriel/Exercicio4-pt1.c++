#include <iostream>
#include <vector>

using namespace std;

int intencidades = 256;
int lar = 640;
int alt = 480;


vector<int> gerarhistograma(int imagem[640][480]){
vector<int> histograma(intencidades,0);
for (int x = 0; x < lar; x++){
    for (int y = 0; y < alt; y++){
            int intencidades = imagem[x][y];
            histograma[intencidades]++; 
        }
    }
    return histograma;
}

int main(){
vector<int> histograma;
//Gera as intencidades
//vector<vector<int>> imagem(alt,vector<int>(lar));
int imagem[640][480];
for(int x = 0; x < lar; x++){
    for (int y = 0; y < alt; y++){
        imagem[x][y] = rand()%256;    
        }
    }

histograma = gerarhistograma(imagem);

//Escreve o histograma
for (int i = 0; i < intencidades; i++){
    cout << "Intenciade " << i <<". " << histograma[i] << endl;
    }
}

