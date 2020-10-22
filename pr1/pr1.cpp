#include "pr1.hpp"
#include <iostream>
using namespace std;

mathop::mathop(int a1,int b1)
{
    a=a1;
    b=b1;
}

void mathop::add()
{
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
}

void mathop::diff()
{
    cout<<a<<"-"<<b<<"="<<a-b<<endl;
    cout<<b<<"-"<<a<<"="<<b-a<<endl;
}

void mathop::mul()
{
    cout<<a<<"*"<<b<<"="<<a*b<<endl;
}
void mathop::div()
{
    cout<<a<<":"<<b<<"="<<a/b<<endl;
    cout<<b<<":"<<a<<"="<<b/a<<endl;
}
void mathop::ma()
{
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
    cout<<"The middle of "<<a<<" and "<<b<<" is: "<<(a+b)/2<<endl;
}
