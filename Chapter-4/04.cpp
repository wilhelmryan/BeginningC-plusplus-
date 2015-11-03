#include <iostream>

using namespace std;

int main()
{
    int num_1,num_2,result;
    char desired_operator;

    cout<<"Enter the first number: ";
    cin>>num_1;
    cout<<"Enter the second number: ";
    cin>>num_2;
    cout<<"Enter the desired operator: ";
    cin>>desired_operator;

    switch(desired_operator)
    {
    case '+':
        result=num_1+num_2;
        break;
    case '-':
        result=num_1-num_2;
        break;
    case '/':
        result=num_1/num_2;
        break;
    case '*':
        result=num_1*num_2;
        break;
    default:
        cout<<"You didn't enter a proper operator";
        return(1);
        break;
        }

        cout<<"The result of "<<num_1<< desired_operator << num_2 <<" Results in: "<<result;
        return(0);
}
