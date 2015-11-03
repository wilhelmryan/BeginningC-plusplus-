#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>


#define STARTCOINS 30
#define MIN 0
#define MAX 6

using namespace std;

//int pos[3];

//enum ROLLPOS {KING=0, QUEEN=1, JACK=2, TEN=3, NINE=4, EIGHT=5, SEVEN=6};

//ROLLPOS roll_1;
//ROLLPOS roll_2;
//ROLLPOS roll_3;

string was_rolled[]={"KING", "QUEEN", "JACK", "TEN", "NINE", "EIGHT", "SEVEN"};
string output[3];


int user_coins=STARTCOINS;

int randRange (int low, int high);

int main()
{
    int coins_to_bet=0;
    int coins_won=0;
    int win_factor=0;

    bool finished=false;


    srand(time(NULL));

do{
    cout<<"Enter 1-"<<user_coins<< " to input bet amount or '0' to exit: ";
    cin>>coins_to_bet;
    if(coins_to_bet==0)
        return(0);
    if(coins_to_bet>user_coins)
    {
        cout<<"You don't have enough coins. Now you've lost them all."<<endl;
        return(0);
    }

    for(int i=0;i<3;i++)
    {
        int pos=randRange(MIN, MAX);
        output[i]=was_rolled[pos];
    }
if(output[0]==output[1]&&output[0]==output[2])
{
    if(output[0]=="KING")
    {
    cout<<"YOU'VE WON THE MAXIMUM JACKPOT!"<<endl;
    win_factor=10;
    }
    if(output[0]=="QUEEN")
        win_factor=5;
    if(output[0]=="JACK")
        win_factor=3;
    else
        win_factor=2;
    cout<<"These were rolled :";
   for(int i=0;i<3;i++)
   {
    cout<<"\t"<<output[i]<<"\t";
   }

   cout<<endl;
    coins_won=win_factor*coins_to_bet;
     user_coins+=coins_won;
    cout<<"You won "<<coins_won<<" and now have "<<user_coins<<" coins to spend"<<endl;
}
else
{
cout<<"These were rolled :";
   for(int i=0;i<3;i++)
   {
    cout<<"\t"<<output[i]<<"\t";
   }
   user_coins-=coins_to_bet;
   cout<<endl<<"Which brings your total coins to: "<<user_coins<<endl;
}
}while(finished==false);
}

int randRange (int low, int high)
{
return rand() % ( high - low ) + low;
}
