#include "lib.h"

void printOutput (bool sameLetter)
{
    if (!sameLetter)
    {
        int r = rand() % (sizeof(adjectives) / sizeof(*adjectives));
        int r2 = rand() % (sizeof(animals) / sizeof(*animals));

        cout << adjectives[r] << animals[r2] << endl;
    }
    else
    {
        int r = rand() % (sizeof(adjectives) / sizeof(*adjectives));
        while (1)
        {
            int r2 = rand() % (sizeof(animals) / sizeof(*animals));
            if (adjectives[r][0] == animals[r2][0])
            {
                cout << adjectives[r] << animals[r2] << endl;
                break;
            }
        }
    }
}

int main()
{
    int num;
    char letter;
    bool sameLetter = false;

    srand (time(NULL));

    cout << "Please enter the number of names you would like to generate" << endl;
    cin >> num;

    cout << "Would you like the first letter of both words to match? (Y/N)" << endl;

    while (letter != 'Y' && letter != 'N' && letter != 'y' && letter != 'n')
    {
        cin >> letter;
    }

    if (letter == 'Y' || letter == 'y')
    {
        sameLetter = true;
    }

    for (int i = 0; i < num; i++)
    {
        printOutput(sameLetter);
    }
    return 0;
}
