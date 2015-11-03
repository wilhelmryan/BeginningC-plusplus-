#include <iostream>

using namespace std;

int main()
{
    int choice;
    int running_tally=0;

    cout<<"Choose a poll option: "<<endl;

    do{
    cout<<"Entries are as follows: " <<endl;
    cout<<"\t1 \t2 \t3"<<endl;
    cin>>choice;
    running_tally+=choice;

    cout<<"The running tally is "<<choice+running_tally<<endl;

    if(choice!=0)
        cout<<"Enter another value\n";
    }while(choice!=0);

    return 0;
}
