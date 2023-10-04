#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    string string1, string2;

    for (int i = 0; i < 10; i++)
    {
        string1 += 'a' + rand() % ('z' - 'a' + 1);
        string2 += 'a' + rand() % ('z' - 'a' + 1);
    }

    string1[0] = toupper(string1[0]);
    string2[0] = toupper(string2[0]);

    if (string1 < string2)
    {
        cout << "String 1: " << string1 << endl;
        cout << "String 2: " << string2 << endl;
    }
    else
    {
        cout <<  "String 2: " << string2 << endl;
         cout << "String 1: " << string1 << endl;
    }

    return 0;
}
