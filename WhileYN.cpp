#include <iostream>
using namespace std;

int main ()
{
    char choice;
    bool run = true;
    while (run)
    {
        cout << "Would you like to perform other calculations? (Y/N)" << endl;
        cin >> choice;
        if (choice == 'Y' || choice == 'y') {
            return true;
        } else if (choice == 'N' || choice == 'n') {
            return false;
        }
    }
    return 0;
}