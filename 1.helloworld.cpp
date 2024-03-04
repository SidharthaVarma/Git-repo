#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p,**ptr;
    p=&a;
    cout<<p<<"\n";
    cout<<*p<<"\n";
    ptr=&p;
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";
    cout<<**ptr<<"\n";
    
}