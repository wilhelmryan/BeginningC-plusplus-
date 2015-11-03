#include <iostream>
#include <string>

using namespace std;

struct user {
string name;
int password;
};


struct user typical_user;

int main()
{
    int entry;
    int attempt_number=0;
    bool success=false;

    cout<<"Enter the users name: ";
    cin>>typical_user.name;
    cout<<"Enter the users password: ";
    cin>>typical_user.password;

    cout<<"Enter your guess: ";
    cin>>entry;

    if(entry==typical_user.password)
    {
        cout<<"SUPRISE, you guessed it... It's right above this isn't it?";
        success=true;
    }
    else
    {
        cout<<"You guessed wrong, once more shot...:" <<endl;
    }
    if(success==false)
        {
        cout<<"Enter your second guess: ";
    cin>>entry;

    if(entry==typical_user.password)
    {
        cout<<"SUPRISE, you guessed it... It's right above this isn't it?";
    }
    else
    {
        cout<<"You lose. Goodbye.";
    }
        }

    return(0);
}
