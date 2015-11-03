#include <iostream>

using namespace std;

int prime_check(int val);
int is_divisible(int num,int divisor);

int main()
{
    int counter=0;
    int x;
    cout<<"Computing prime numbers to 100\n";
    for(x=0;x<1000;x++)
    {
        while(x%2==0)



    }
    cout<<counter;
    return(0);
}

int prime_check(int val)
{
    for(int y=2; y<val;y++)
    {
        if(is_divisible(val,y))
            return(0);
    }
    return(1);
}

int is_divisible(int num,int divisor)
{
    return(num%divisor==0);
}
