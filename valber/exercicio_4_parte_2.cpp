#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand((time(0)));

    string strings[10];

    for (int i = 0; i < 10; i++) {
        string stringAleatoria;

        for (int j = 0; j < 10; j++) {
            stringAleatoria += 'a' + rand() % ('z' - 'a');
        }

        strings[i] = stringAleatoria;
    }

    for (int i = 0; i < 10; i++) {

        if (!strings[i].empty()) {
            strings[i][0] = toupper(strings[i][0]);
        }
        
    }

    for (int i = 0; i < 10; i++) {
        cout << strings[i] << endl;
    }

    return 0;
}
