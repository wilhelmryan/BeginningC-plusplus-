#include <iostream>

#define PASSWORD 1234
#define MAXATTEMPTS 5

using namespace std;

int main()
{
    int user_choice;
    int entry_number=0;
    bool guessed=false;

    while(entry_number<=MAXATTEMPTS && guessed==false)
    {
        cout<<"Enter your guess for the password: ";
        cin>>user_choice;

        if(user_choice==PASSWORD)
        {
            cout<<"You guessed the password correctly";
            guessed=true;
        }
        else
        {
            cout<<"That was the incorrect password. Guess again.\n";
            entry_number++;
            cout<<"You have "<<(MAXATTEMPTS-entry_number)+1<<" attempts left\n";
        }
    }
    return(0);
}
