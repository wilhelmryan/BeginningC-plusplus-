#include <iostream>

using namespace std;

int main()
{
    double numerator,denominator;

    cout << "Enter a numerator (whole or decimal): ";
    cin >> numerator;
    cout << "Enter a denominator: ";
    cin >> denominator;
    cout << "The result is: " << numerator/denominator << endl;

    return(0);
}
