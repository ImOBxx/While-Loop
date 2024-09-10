#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;

    cout << "Enter a Number: ";
    cin >> number;

    while (number >= 0) {
        sum += number;
        cout << "Enter a number: ";
        cin >> number;
    }
    cout << "\nThe sum of all positive integers: " << sum << endl;
}