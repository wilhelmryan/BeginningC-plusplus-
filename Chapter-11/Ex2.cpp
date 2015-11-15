#include <iostream>
#include <time.h>
#include <stdlib.h>

#define xwidth 1023
#define yheight 767

using namespace std;

void initializeships();
bool finished();
void printlocations();

struct Spaceship
    {
        int shipno;
        int xloc;
        int yloc;
        bool move;
        int NESW;
    };

Spaceship ships[10];

Spaceship initialize(int shipno)
{
    ships[shipno].shipno=shipno;
    ships[shipno].xloc=rand()%xwidth;
    ships[shipno].yloc=rand()%yheight;
    ships[shipno].move=true;
    ships[shipno].NESW=rand()%4;
}

Spaceship movement (int shipno)
{
    if(ships[shipno].move)
    {
        switch (ships[shipno].NESW)
        {
        case 0:
            ships[shipno].yloc++;
            break;
        case 1:
            ships[shipno].xloc++;
            break;
        case 2:
            ships[shipno].yloc--;
            break;
        case 3:
            ships[shipno].xloc--;
            break;
        default:
            ships[shipno].move=false;
            break;
        }

        if(ships[shipno].yloc>=yheight || ships[shipno].yloc<=0) ships[shipno].move=false;
        if(ships[shipno].xloc>=xwidth || ships[shipno].xloc<=0) ships[shipno].move=false;
    }
}

bool finished()
{
    for(int i=0;i<10;i++)
    {
        if(ships[i].move)return 0;
    }
    return 1;
}

int main()
{
    srand(time(NULL));

    initializeships();

    do
    {
        for(int i=0;i<10;i++)
        {
            movement(i);
        }
        printlocations();
    }while(!finished());

}

void printlocations()
{
    for(int i=0;i<10;i++)
    {
        if(ships[i].move)
        {
            cout << "**********************" << endl;
            cout << "Ship " << i <<": " << endl;
            cout << "X-Location: " << ships[i].xloc << endl;
            cout << "Y-Location: " << ships[i].yloc << endl;
            cout << "Direction: ";
            switch (ships[i].NESW)
            {
            case 0:
                cout << "North" << endl;
                break;
            case 1:
                cout << "East" << endl;
                break;
            case 2:
                cout << "South" << endl;
                break;
            case 3:
                cout << "West" << endl;
                break;
            default:
                cout <<"Impossible move. Shit." << endl;
            }
        }
        else cout << "Ship " << i << " has finished moving" << endl;
    }
    cout << endl << endl;
}

void initializeships()
{
    for(int i=0;i<10;i++)
    {
        initialize(i);
    }
}
