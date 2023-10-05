#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    srand(time(0));

    
    auto gerarCaractereAleatorio = []() {
        return 'a' + rand() % ('z' - 'a' + 1);
    };

    
    string string1, string2;

    for (int i = 0; i < 10; ++i) {
        string1 += gerarCaractereAleatorio();
        string2 += gerarCaractereAleatorio();
    }

    
    string1[0] = toupper(string1[0]);
    string2[0] = toupper(string2[0]);

    
    cout << "String 1: " << string1 << endl;
    cout << "String 2: " << string2 << endl;

   
    sort(string1.begin(), string1.end());
    sort(string2.begin(), string2.end());

    
    cout << "\nStrings em ordem alfabética:" << endl;
    cout << "String 1: " << string1 << endl;
    cout << "String 2: " << string2 << endl;

    return 0;
}
