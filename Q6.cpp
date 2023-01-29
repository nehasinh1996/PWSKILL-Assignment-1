//Swap two no.

#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter two no. :";
    cin>>a>>b;

    int c=a;
    a=b;
    b=c;

    cout<<"After swap no.:"<<a<<" "<<b;
    return 0;
}