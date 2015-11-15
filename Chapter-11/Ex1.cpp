#include <iostream>
#include <string>

using namespace std;


// outline our structure
struct Person
{
    string firstname;
    string lastname;
    int age;
    string address;
    unsigned long phonenumber=0;
};

void printStruct(Person person);

int main()
{
    //initialize our struct
    Person person;
    cout << "Enter a person 1s first name: ";
    cin >> person.firstname;
    
    cout << "Entier their last name: ";
    cin >> person.lastname;
    
    cout << "Enter their age: ";
    cin >> person.age;
    
    // ignore the \n char from above
    cin.ignore();
    cout << "Enter their address (house number and street): ";
    getline(cin,person.address,'\n');
    cout << "Enter their phone number: ";
    cin >> person.phonenumber;

    //print everything out
    printStruct(person);
}

void printStruct (Person person)
{
    cout << person.firstname << " " << person.lastname << endl;
    cout << "Age: " << person.age << endl;
    cout << "Address: " << person.address << endl;
    cout << "Number: " << person.phonenumber << endl;
}
