#include <iostream>
#include <array>

using namespace std;

int numbs[100] = {};
int verif[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int totals[20] = {};


int main(){
srand(time(0));

for (int i = 0; i < 100; i++){
    numbs[i] = rand() % 20 + 1;

for (int u = 0; u < 20; u++){
    
        if (numbs[i] == verif[u]){
            totals[u] += 1;
        }
    }
}

cout << "Numeros gerados:\n";
cout << endl;
for (int i = 0; i < 100; i++)
{
    if (i < 99){
       cout << numbs[i] << ",";
    }
        else{
            cout << numbs[i] << "." << endl;
            }
    
}
cout << endl;

cout << "Numeros e suas repetições:\n";
cout << endl;
for (int i = 0; i < 20; i++)
{
    if (i < 19)
    {
        cout << i + 1 << "--" << totals[i] << ",";
    }
        else{
            cout << i + 1 << "--" << totals[i] << ".\n";
        }
}
cout << endl;

int maior = totals[0];
int menor = totals[0];

for (int i = 0; i < 20; ++i){
        if (totals[i] > maior) maior = totals[i];
        if (totals[i] < menor) menor = totals[i];
}

cout << "Maior repetição: " << maior << endl;
cout << "Menor repetição: " << menor << endl;
cout << endl;

for (int i = 0; i < 20; i++)
{
    if (totals[i] == maior){
        cout << "O(s) numero que mais se repete(m) é(são): " << i + 1 << endl;
    }
        if (totals[i] == menor){
        cout << "O(s) numero que menos se repete(m) é(são): " << i + 1 << endl;
        }
}
return 0;
}
