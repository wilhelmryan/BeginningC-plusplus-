#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

using namespace std;

struct person
{
    bool filled;
    string firstname;
    string lastname;
    string address;
}; person Person[10];

bool full=false;

//function declarations
void fill_initial();
void promptuser();
int nextEntry();
void adduser ();
void show(bool condensed);
void removeuser();

int main()
{
    fill_initial();
    do
    {
        cin.sync();
        promptuser();
        if(nextEntry()==11) full=true;

    }while(!full);
}

void fill_initial()
{
    for(int i=0;i<10;i++)
    {
        Person[i].filled=false;
        Person[i].firstname="";
        Person[i].lastname="";
    }
}

void adduser ()
{
    cin.sync();
    int next=nextEntry();

    cout << "Entry " << next << ": " << endl;
    cout << "Enter first name: ";
    getline(cin,Person[next].firstname,'\n');
    cout << "Enter last name: ";
    getline(cin,Person[next].lastname,'\n');
    cout << "Enter their address: ";
    getline(cin,Person[next].address,'\n');

    Person[next].filled=true;
}

void removeuser()
{
    int user;
    cout << "Choose person to remove: " << endl;

    show(0);
    cin >> user;

    Person[user].filled=false;
    Person[user].firstname="";
    Person[user].lastname="";
    Person[user].address="";
}
void show(bool condensed)
{
    for(int i=0;i<10;i++)
    {
        if(condensed)
        {
            if(Person[i].filled) cout << i << " " << Person[i].firstname << " " << Person[i].lastname << endl;
        }
        else
        {
            if(Person[i].filled)
            {
                cout << "***********" << endl;
                cout << "Entry " << i << endl;
                cout << "First name: " << Person[i].firstname << endl;
                cout << "Last name: " << Person[i].lastname << endl;
                cout << "Address: " << Person[i].address << endl;
                cout << "***********" << endl;
            }
        }
    }

}


void promptuser()
{
    char input;
    cout << "Enter one of the following menu choices." << endl;
    cout << "(a)dd, (r)emove, (m)odify, (s)how: ";
    input=cin.get();
    cin.ignore(1);


    switch (input)
    {
        case 'a':
        case 'A':
            adduser();
            break;
        case 'r':
        case 'R':
            removeuser();
            break;
        case 'm':
        case 'M':
            cout << "Modifying...";
            break;
        case 's':
        case 'S':
            show(true);
            break;
        default:
            cout << "Invalid choice";
    }
}
int nextEntry()
{
    for(int i=0;i<10;i++)
        if(!Person[i].filled) return i;

    return 11;
}
