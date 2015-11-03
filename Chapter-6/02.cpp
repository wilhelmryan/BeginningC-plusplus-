#include <iostream>

using namespace std;

void add(void);
void subtract(void);
void divide(void);
void multiplication(void);
int clear_values(int cleared);
void user_input_menu(void);

double user_choice_num;
double previous_value;



int main()
{
    char user_entry;
    bool correct_choice=false;

    do
    {
    cout<<"Enter your calculator function: (+|-|%|*)"<<endl;
    cout<<"Or enter 'Q' for QUIT ";
    cin>>user_entry;

    switch (user_entry)
    {
    case '+':
        add();
        break;
    case '-':
        subtract();
        break;
    case '%':
        divide();
        break;
    case '*':
        multiplication();
        break;
    case 'Q':
        return(0);
    default:
        cout<<"That was an incorrect choice. Try again."<<endl;
        correct_choice=false;
        break;
    }
    }while(correct_choice==false);
}

void add(void)
{
    do{
    cout<<"Enter a number: ";
    cin>>user_choice_num;
    cout<<"The sum is: "<<user_choice_num+previous_value<<endl;
    previous_value+=user_choice_num;
    }while(user_choice_num!=0);
    user_input_menu();
}

void subtract(void)
{
    do{
    cout<<"Enter a number: ";
    cin>>user_choice_num;
    cout<<"The sum is: "<<previous_value-user_choice_num<<endl;
    previous_value-=user_choice_num;
    }while(user_choice_num!=0);
    user_input_menu();
}

void divide(void)
{
    do{
    cout<<"Enter a number: ";
    cin>>user_choice_num;
    cout<<"The total is: "<<user_choice_num/previous_value<<endl;
    previous_value/=user_choice_num;
    }while(user_choice_num!=0);
    user_input_menu();
}

void multiplication(void)
{
    do{
    cout<<"Enter a number: ";
    cin>>user_choice_num;
    cout<<"The total is: "<<user_choice_num*previous_value<<endl;
    previous_value*=user_choice_num;
    }while(user_choice_num!=0);
    user_input_menu();
}

void user_input_menu(void)
{
    char clear_vals;
    cout<<"Clear values? Y/N: ";
    cin>>clear_vals;

    if(clear_vals=='Y')
    {
        clear_values(0);
    }
    else if(clear_vals=='N')
    {
        cout<<"The values will remain at: "<<previous_value<<endl;
    }
    else if(clear_vals!='Y'||clear_vals!='N')
    {
        cout<<"That was an incorrect choice. Values will be kept by default\n";
    }
}

int clear_values(int cleared)
{
 previous_value=cleared;
 return(previous_value);
}
