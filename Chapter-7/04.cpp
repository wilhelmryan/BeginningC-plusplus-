/*

UNTESTED CODE

*/

#include <iostream>
#include <ctype.h>

using namespace std;

bool valid_choice;
bool blank_display=true;
bool game_is_won;

char board[3][3];
int player;
int play_count;

void update_display(bool is_first);
void check_for_win(void);

int main()
{
    char player_holder;
    int x=0;
    int y=0;

    update_display(blank_display);
    cout<<"X Starts First"<<endl;
    do{
    do{
        cout<<"enter x coordinates ";
    cin>>x;
    cout<<"Enter y coordinates ";
    cin>>y;

    if(x>2||x<0||y>2||y<0)
    {
        cout<<"That was an invalid move. Choose again."<<endl;
        valid_choice=false;
    }
    else if(board[x][y]!=' ')
    {
        cout<<"That move has already been played. Choose again."<<endl;
        valid_choice=false;
    }
    else
    {
        valid_choice=true;
        play_count++;
    }
    }while(valid_choice==false);

switch(player)
{
case 0:
    player_holder='X';
    break;
case 1:
    player_holder='Y';
    break;
}

if(valid_choice==true){
board[x][y]=player_holder;
update_display(blank_display);
check_for_win;

if(player==0)
    player=1;
else
    player=0;
}

if(play_count==9&&game_is_won==false)
{
    cout<<"There are no more valid moves. The game is a draw";
    return(0);
}
}while(game_is_won==false);
if(game_is_won)
    cout<<"WINNER";
}

void update_display(bool is_first)
{
    if(is_first==true)
    {
    for(int x=0;x<3;x++)
        for(int y=0;y<3;y++)
    {
        board[x][y]=' ';
    }
    blank_display=false;
    }

    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            cout<<board[x][y]<<"|";
        }
        cout<<endl;
    }

}
