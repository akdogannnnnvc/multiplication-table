#include <iostream>
using namespace std;
int main () 
{
    short int number , i = 1 ;
    while(1-10)
    {
        i=1;
    cout<<"enter a number 1-10:\n";
    cin>> number;
    if (number<1 || number> 10)
    {
        cout<<"please enter a number 1-10:\n";
    }
    else {
        while(i<=10)
        {
            cout<<number<<"x"<<i<<"="<<number*i<<"\n";
            i++;
        }
    }
    i++;
    }
    
    
