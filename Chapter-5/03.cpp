#include <iostream>

using namespace std;

int main()
{
    int choice;
    int previous_val=0;

    cout<<"Input a number: ";

    do
    {
        cin>>choice;
        cout<<"Running total is: "<<choice+previous_val<<endl;
        previous_val+=choice;
        if(choice!=0)
            cout<<"Input another number: ";
    }while(choice!=0);

    return(0);
}
