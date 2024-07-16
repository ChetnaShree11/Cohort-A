#include<iostream>
using namespace std;

int main()
{
    int a,b;
    a=10;
    b=30;
    a=(a^b)^(b=a);
    cout<<a<<" "<<b;
}
