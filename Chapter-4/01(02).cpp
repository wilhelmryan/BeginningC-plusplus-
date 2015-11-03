#include <iostream>
#include <string>

using namespace std;

int main()
{
    struct human {
    string name[32];
    int age;
    };

    struct human person;
    struct human person_2;

    cout<<"Enter the 1st users name: ";
    cin>> person.name;
    cout<<"Enter the 1st users age: ";
    cin>> person.age;
    cout<<"Enter the 2nd users name: ";
    cin>> person_2.name;
    cout<<"Enter the 2nd users age: ";
    cin>>person_2.age;
}
