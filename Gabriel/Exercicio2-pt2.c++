#include <iostream>
#include <ctime>
#include <array>
#include <iomanip>

using namespace std;

float nt1[15];
float nt2[15];
float media[15];

int main(){
srand(time(0));

//a)
for (int i = 0; i < 15; i++){
    nt1[i] = ((float)rand()/RAND_MAX)*10;
}

//b)
for (int i = 0; i < 15; i++){
    nt2[i] = ((float)rand()/RAND_MAX)*10;
}

//d)
for (int i = 0; i < 15; i++){
    media[i] = (nt1[i] + nt2[i])/2;
}

//c)
for (int i = 0; i < 15; i++){
    if (nt1[i] < nt2[i]){
        cout << "Aluno" << i+1 << setprecision(3) << " nota 1) " << nt1[i] << " nota 2) " << nt2[i]  << " Média) " << media[i] << " Melhorou." << endl;
        }else if (nt1[i] > nt2[i]){
            cout << "Aluno" << i+1 << setprecision(3) << " nota 1) " << nt1[i] << " nota 2) " << nt2[i]  << " Média) " << media[i]  << " Piorou" << endl;
            }else{
                cout << "Aluno" << i+1 << setprecision(3) << " nota 1) " << nt1[i] << " nota 2) " << nt2[i]  << "Média) " << media[i]  << " Manteve a nota" << endl;
            }
}

return 0;
}