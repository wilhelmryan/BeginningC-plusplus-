#include <iostream>
#include <ctime>
#include <cstdlib>
#include <ctype.h>

#define MAX 100
#define MIN 0

using namespace std;

int randRange (int low, int high);

int main()
{
    int user_choice;
    //choose a new seed
    srand(time(NULL));
    int num_chosen=randRange(MIN, MAX);

do{
    cout<<"Choose a number between 0-99: ";
    cin>>user_choice;

    if(user_choice>99||user_choice<0)
    {
        cout<<"Cheater.";
        return(0);
    }

        if(user_choice>num_chosen)
            cout<<"Too high"<<endl;
        if(user_choice<num_chosen)
            cout<<"Too low"<<endl;
        else if(user_choice==num_chosen)
            {
                cout<<"YOU'VE WON";
                return(0);
            }
    }while(1);
}

int randRange (int low, int high)
{
// we get a random number, get it to be between 0 and the difference
// between high and low, then add the lowest possible value
return rand() % ( high - low ) + low;
}
