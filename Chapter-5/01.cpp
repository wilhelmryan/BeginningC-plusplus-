#include <iostream>

using namespace std;

int main()
{
    int x;

    for(x=99;x>0;x--)
    {
        if(x==1)
        {
            cout<< "There is "<<x<<" bottle of beer on the wall, take one down pass it around, \now there's no bottles of beer on the wall\n :(";
        }
        else if (x>1)
        {
        cout<< "There are "<<x<<" bottles of beer on the wall, take one down pass it around, \now there's " <<x-1<<" bottles of beer on the wall\n";
        }
    }
    return(0);
}
