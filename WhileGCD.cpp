#include <iostream>
using namespace std;

int main()
{
    int num1, num2, gcd;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    int i = 1;
    while (i <= num1 && i <= num2) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
        i++;
    }
    cout << "GCD : " << gcd;
}