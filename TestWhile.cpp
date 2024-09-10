#include <iostream>
using namespace std;

int main()
{
    int c = 1;
    int i;
    while (c <= 5)
    {
        if (i % c == 0)
        {
        cout << i << "\t" << endl;
        i++;
        }
    }
}