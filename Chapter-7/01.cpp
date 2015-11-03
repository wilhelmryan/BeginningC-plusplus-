#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>

//placeholder for negative values, must be universal as accessed in 2 functions
bool is_negative;

using namespace std;

//declare the display function
void display_with_words(int num_to_display,int display_magnitude,bool display_negative);


int main()
{
    //variable for user input
    long user_input;
    //variables for appending numbers to 3 digits
    int magnitude[]={0,0,0,0,0};
    //default is non negative number
    is_negative=false;

    //give the user an option
    cout<<"Enter a number between -2,000,000,000 and 2,000,000,000: ";
    //receive that option
    cin>>user_input;
    //error checking for size
    if(user_input<-2000000000||user_input>2000000000)
    {
        cout<<"That number is out of range";
        //exit if out of bounds
        return(0);
    }
    //check for negative value, use absolute value so it doesn't break modulus function
    if(user_input<0)
    {
        is_negative=true;
        user_input=abs(user_input);
    }
//determine order of magnitude of each 3 digit segment and set each segment
//magnitude 4,3 single digits/hundred
//magnitude<3 change to "thousand, million, billion
    magnitude[4]=user_input%10;
    magnitude[3]=user_input%1000;
    magnitude[2]=((user_input%1000000)-user_input%1000)/1000;
    magnitude[1]=((user_input%1000000000)-user_input%1000000)/1000000;
    magnitude[0]=(user_input-(user_input%1000000000))/1000000000;
//send to function for display
    for(int x=0;x<4;x++)
        display_with_words(magnitude[x],x,is_negative);

}

void display_with_words(int num_to_display,int display_magnitude,bool display_negative)
{
    //strings for spoken words
    string single_digit[]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    string teens[]={"Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    string tens[]={"Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    string hundreds[]={"Billion","Million","Thousand","Hundred"};
//cout<<"I received: "<<num_to_display<<endl;
    int placeholder;
//is it negative?
    if(display_negative)
    {
        cout<<"Negative ";
        //make sure we don't send the same value again
        is_negative=false;
    }
//first digit appending
if(num_to_display>20)
    {//figure out the hundreds place
        placeholder=(num_to_display-(num_to_display%100))/100;
        if(placeholder!=0)
        {
            cout<<single_digit[placeholder-1]<<" ";
            cout<<hundreds[3]<<" ";
        }
//figure out the tens place
        placeholder=((num_to_display%100)-(num_to_display%10))/10;
        if(placeholder!=0)
        {
            cout<<tens[placeholder-1]<<" ";
        }
//figure out the single digit
        placeholder=(num_to_display%100)%10;
        if(placeholder!=0)
        {
            cout<<single_digit[placeholder-1]<<" ";
        }
//add a word if it's a single digit in series of 3/ ie in the thousands place
        if(display_magnitude<3&&num_to_display!=0)
            cout<<hundreds[display_magnitude]<<" ";

    }
//code for the teens, hard code, add magnitude if needed
if(num_to_display<20&&num_to_display>10)
{
    cout<<teens[num_to_display-11]<<" ";
    if(display_magnitude<3&&num_to_display!=0)
        cout<<hundreds[display_magnitude]<<" ";
}
//code for twenty, add magnitude if needed
if(num_to_display==20)
{
    cout<<tens[1]<<" ";
    if(display_magnitude<3&&num_to_display!=0)
        cout<<hundreds[display_magnitude]<<" ";
}
//code for ten, add magnitude if needed
if(num_to_display==10)
{
    cout<<tens[0]<<" ";
    if(display_magnitude<3&&num_to_display!=0)
        cout<<hundreds[display_magnitude]<<" ";
}
//code for single digit with magnitude
if(num_to_display<10&&num_to_display!=0)
{
    cout<<single_digit[num_to_display-1]<<" ";
    if(display_magnitude<3&&num_to_display!=0)
        cout<<hundreds[display_magnitude]<<" ";
}
}
