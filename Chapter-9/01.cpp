#include <iostream>
#include <ctime>
#include <cstdlib>
#include <ctype.h>

using namespace std;

enum COIN {HEADS, TAILS};
COIN coin;


int main()
{
    bool keep_going=false;
    char user_input;
    srand(time(NULL));
    int rand_number=0;
    int heads_counter=0;
    int tails_counter=0;
    int num_repitions;

    do{
        cout<<"Do you wish to flip a coin? Y/N ";
        cin>>user_input;
        user_input=toupper(user_input);

        //decide what the program is going to do
        if(user_input=='Y')
            keep_going=true;
        else if(user_input=='N')
        {
            keep_going=false;
            return(0);
        }
        else
            cout<<"That was an incorrect choice"<<endl;

        cout<<"Enter the number of repititions: ";
        cin>>num_repitions;



    for(int x=0;x<num_repitions;x++)
    {
        if(keep_going==true)
            rand_number=rand()%2;
        if(rand_number==0)
            coin=HEADS;
        if(rand_number==1)
            coin=TAILS;

        switch(coin)
        {
        case HEADS:
            //cout<<"HEADS was tossed"<<endl;
            heads_counter++;
            break;
        case TAILS:
            //cout<<"TAILS was tossed"<<endl;
            tails_counter++;
            break;
        }
        if(x==num_repitions-1)cout<<"And the total is now "<<heads_counter<<" heads and "<<tails_counter<<" tails"<<endl;
    }
    }while(keep_going==true);

    return(0);
}

