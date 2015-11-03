#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_user,second_user;
    int age_1,age_2;

    cout << "Enter the first users name: " <<endl;
    cin >> first_user;
    cout << "Enter the second users name: "<<endl;
    cin >> second_user;
    cout << "Enter the first users age: "<<endl;
    cin >> age_1;
    cout <<"And the second users age?"<<endl;
    cin >> age_2;

    if(age_1==age_2)
    {
        cout<< "The users are the same age";
    }

    if(age_1>age_2)
    {
        cout<< "User " <<first_user<<" is older by " << age_1-age_2 << "years";
    }

    else
    {
        cout << "User " << second_user<<" is older by " << age_2 - age_1 << "years";
    }
    return(0);
}
