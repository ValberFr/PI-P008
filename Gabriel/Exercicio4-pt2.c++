#include <iostream>
#include <ctime>
#include <array>


using namespace std;

string stringlist[10];


int main(){
srand(time(0));

for (int i = 0; i < 10; i++){
    for (int i = 0; i < 10; i++){
    stringlist[i] += 'a' + rand()%('z' - 'a');

    }        
}

for (int i = 0; i < 10; i++){
stringlist[i][0] = toupper(stringlist[i][0]);
}

for (int i = 0; i < 10; i++){
    cout << stringlist[i] << endl;
}


return 0;
}
