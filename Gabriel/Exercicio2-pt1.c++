#include <iostream>
#include <array>
#include <ctime>
#include <iomanip> 

using namespace std;

float sum;
float media;
float est[250] = {};

int main(){
//Atribuição da seed
srand(time(0));

//Geração dos numeros e calculo da média das estações
for (int i = 0; i < 250; i++){
    est[i] = (static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/30))) + 10;
    media = (sum)/250;
    sum += est[i];
}

//Calcula maximas e minimas
float maior = est[0];
float menor = est[0];

for (int i = 0; i < 250; ++i){
        if (est[i] > maior) maior = est[i];
        if (est[i] < menor) menor = est[i];
}

cout << "Temperaturas informadas pelas estações: \n";
cout << endl;
for (int i = 0; i < 250; i++)
{
    if (i < 249)
    {
        cout << setprecision(4) << est[i] << ",";
    }
        if(i == 249){
            cout << setprecision(4) << est[i] << "." << endl;
        }
}
cout << endl;

//Mostra as maximas e minimas junto com a média das estações
cout << setprecision(4) << "Maior temperatura reportada: " << maior << endl;
cout << setprecision(4) << "Menor temperatura reportada: " << menor << endl;
cout << setprecision(4) << "A temperatura média entre as estações foi de: " << media << endl;
cout << endl;

//Incrementa o aumento de temperatura
for (int i = 0; i < 250; i++)
{
    if (est[i] > media){
        est[i] += 1;
    }
        else{
            est[i] += 2;
        }
}

//Mostra as temperaturas após o mecanismo de predição
cout << "Temperaturas informadas corrigidas: \n";
cout << endl;
for (int i = 0; i < 250; i++)
{
    if (i < 249)
    {
        cout << setprecision(4) << est[i] << ",";
    }
        if(i == 249){
            cout << setprecision(4) << est[i] << "." << endl;
        }
}
cout << endl;
return 0;
}