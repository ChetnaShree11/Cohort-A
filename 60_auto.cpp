#include<iostream>
#include"1st.cpp"
extern int globVar;
using namespace std;
void AutoDemo()
{
    auto x=10;
    cout<<"Value inside auto function: "<<x<<endl;
}

void RegisterDemo()
{
    register int c =0;
    for(register int i=0;i<10;++i)
    {
        c+=i;
        cout<<c<<" ";
    }
    cout<<endl;
}


void StaticDemo()
{
    static int count=0;
    count++;
    cout<<"Count: "<<count<<endl;
}

void ExternDemo()
{
    globVar++;
}

class MutableDemo
{
    mutable int value;
public:
    MutableDemo(int v): value(v){} //Constructor
    void modify() const
    {
        value++;
        cout<<"Value: "<<value<<endl;
    }
};
int main()
{
    auto x=20;
    AutoDemo();
    cout<<"Value outside auto function: "<<x<<endl;

    cout<<"Values in register function: "<<endl;
    RegisterDemo();

    cout<<"Static function called 2 times: "<<endl;
    StaticDemo();
    StaticDemo();

    cout<<"Accessing variable from another file using extern: "<<endl;

    ExternDemo();
    cout<<globVar<<endl;

    cout<<"Use of Mutable storage class: "<<endl;
    MutableDemo obj(13);
    obj.modify();




}
