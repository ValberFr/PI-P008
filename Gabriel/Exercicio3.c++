#include <iostream>
#include <ctime>
using namespace std;

string string1;
string string2;

int main(){
srand(time(0));

for (int i = 0; i < 10; i++){
    string1 += 'a' + rand()%('z' - 'a');
}

for (int i = 0; i < 10; i++){
    string2 += 'a' + rand()%('z' - 'a');
}

string1[0] = toupper(string1[0]);
string2[0] = toupper(string2[0]);

string1[0] < string2[0] ? cout << string1 << "\n" << string2 << endl: cout << string2 << "\n" << string1 << endl;

return 0;
}