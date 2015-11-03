#include <iostream>

#define PASSWORD 1234
#define PASSWORD2 5678

using namespace std;

int main()
{
    int user_entry;

    cout<< "Enter your password suggestion: ";
    cin>> user_entry;

    if(user_entry==PASSWORD || user_entry==PASSWORD2)
    {
        cout<<"Entry granted. Good job";
    }
    else
    {
        cout<<"That was incorrect.";
    }
}
