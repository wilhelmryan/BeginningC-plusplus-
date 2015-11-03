#include <iostream>

using namespace std;

void ninety_nine_bottles(void);
void calculator(void);


int main()
{
    char user_input;
    bool correct_choice=true;
do{
    cout<< "Choose an action:\n";
    cout<< "(C)alculator : (N)inety-nine bottles: (Q)uit ";
    cin>> user_input;

    switch(user_input)
    {
    case 'N':
        ninety_nine_bottles();
        break;
    case 'C':
        calculator();
        break;
    case 'Q':
        return(0);
        break;
    default:
        cout<<"\nThat was not a valid choice\n";
        correct_choice=false;
        break;
    }
    }while(correct_choice==false);
}

void calculator(void)
{
    double user_choice_num;
    double previous_value=0;
    bool is_zero=false;

    do{
    cout<<"Input a number to be added: ";
    cin>>user_choice_num;
    cout<<"\n The running total is: "<<user_choice_num+previous_value<<endl;
    previous_value+=user_choice_num;
    if(user_choice_num==0)
    {
        is_zero=true;
    }
    }while(user_choice_num&&is_zero==false);
}

void ninety_nine_bottles(void)
{
    int x;

    for(x=99;x>=1;x--)
    {
        if(x>1)
        {
        cout<<x<<" bottles of beer on the wall"<<endl;
        cout<<x<<" bottles of beer"<<endl;
        cout<<"take one down, pass it around"<<endl;
        cout<<x-1<<" bottles of beer on the wall"<<endl<<endl<<endl;
        }
        else if (x==1)
        {
        cout<<x<<" bottle of beer on the wall"<<endl;
        cout<<x<<" bottle of beer"<<endl;
        cout<<"take one down, pass it around"<<endl;
        cout<<"No more bottles of beer on the wall"<<endl<<endl<<endl;
        cout<<"If that's the case: I quit.";
        }

    }
}
