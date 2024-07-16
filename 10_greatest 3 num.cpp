#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter num 1:"<<endl;
    cin>>a;
    cout<<"Enter num 2:"<<endl;
    cin>>b;
    cout<<"Enter num 3:"<<endl;
    cin>>c;
    if(a>b){
        if(a>c){
        cout<<"a is greater"<<a<<endl;
    }
       else{
           cout<<"c is greater"<<c<<endl;
       }

    }
    else{
        cout<<"b is greater "<<b<<endl;
        }

    return 0;
}
