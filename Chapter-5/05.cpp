#include <iostream>

using namespace std;

int main()
{
    int x;

    for(x=0;x<5;x++)
    {
        cout<< "This is the "<<x+1<<" time through the for loop\n";
    }

    while(x<10)
    {
        cout<<"This is the "<<x-4<<" time through the while loop\n";
        x++;
    }

    do{
        cout<<"This is the "<<x-9<<" time through the do loop\n";
        x++;
    }while(x<15);

    return(0);

}
