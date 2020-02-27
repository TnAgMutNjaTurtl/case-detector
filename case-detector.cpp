#include <iostream>

using namespace std;

int main()
{
    int value = 0;
    char letter;
    cout << "Please Enter a Letter upper case or lower case" << endl;
    cin >> letter;

    if (islower(letter))
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

