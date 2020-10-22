#include <iostream>
#include "pr2.hpp"
#include "pr1.hpp"
using namespace std;
void QuickMath(int a,int b) {
    mathop n(a,b);
    n.add();
    n.diff();
    n.mul();
    n.div();
    n.ma();
}

int main() {
    int a,b;
    cout<<"First number: ";
    cin>>a;
    cout<<"Second number: ";
    cin>>b;
    QuickMath(a,b);
    return 0;
}