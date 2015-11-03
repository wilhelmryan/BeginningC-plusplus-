#include <iostream>
#include <ctime>
#include <cstdlib>
#include <ctype.h>



using namespace std;

int randRange (int low, int high);

int main()
{
    int user_choice;
    int guesses=0;
    int MAX=100;
    int MIN=0;
    //choose a new seed
    srand(time(NULL));
    cout<<"Choose a number between 0-99: ";
    cin>>user_choice;

do{

int num_chosen=randRange(MIN, MAX);

        if(num_chosen>user_choice)
        {
            cout<<"Too high at "<<num_chosen<<endl;
            MAX=num_chosen;
            guesses++;
        }
        if(num_chosen<user_choice)
        {
            cout<<"Too low at "<<num_chosen<<endl;
            MIN=num_chosen;
            guesses++;
        }
        else if(num_chosen==user_choice)
            {
                cout<<"The computer won in "<<guesses<<" guesses";
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
