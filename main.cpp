#include "lib.h"

void printOutput ()
{
    int r = rand() % (sizeof(adjectives) / sizeof(*adjectives));
    int r2 = rand() % (sizeof(animals) / sizeof(*animals));

    cout << adjectives[r] << animals[r2] << endl;
}

int main()
{
    int num;

    srand (time(NULL));

    cout << "Please enter the number of names you would like to generate" << endl;
    cin >> num;
    
    for (int i = 0; i < num; i++)
    {
        printOutput();
    }
    return 0;
}
