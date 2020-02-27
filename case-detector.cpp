#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char*argv[])
{
    if (argc <= 1)
    {
        cout << "Please only input letters for this program." << endl;
        return 0;
    }
    int value = 0;
    char letter = argv[1][0];

    if (strlen(argv[1]) > 1)
        {
            letter = ':';

            cout << "Please only input letters for this program." << endl;
            return 0;
        }
    if(isdigit(letter))
    {
        cout << "Please only input letters for this program." << endl;
        return 0;
    }
    
    if (islower(*argv[1]))
    {
        cout << letter << " is lower case" << endl;
        value = 1;
    }
    else
    {
        cout << letter << " is upper case" << endl;
        value = -1;
    }
    return value;

}

