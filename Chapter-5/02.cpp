#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    char choice;
    string menu;
    bool correct=false;

do{
    cout<< "Menu options consist of: \n";
    cout<< "(S)how, (A)dd, (R)emove, (Q)uit\n";
    cout<< "Make your selection now: ";
    cin>>choice;

    switch(choice)
    {
    case 'S':
        menu="SHOW";
        correct=true;
        break;
    case 'A':
        menu="ADD";
        correct=true;
        break;
    case 'R':
        menu="REMOVE";
        correct=true;
        break;
    case 'Q':
        menu="QUIT";
        correct=true;
        break;
    default:
        cout<<"That was an incorrect response. Try again. \n";
        break;
    }

}while(correct==false);

    cout<<"You chose the menu for:" << menu;

    return(0);
}
