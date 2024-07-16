#include<iostream>
using namespace std;

int main()
{
    bool red_light{false};
    bool green_light{true};
    if(red_light== true)
    {
        cout<<"Stop"<<endl;
    }
    else{
        cout<<"Go through"<<endl;
    }

    if(green_light)
    {
        cout<<"The light is green"<<endl;
    }
    else{
        cout<<"The light is not green"<<endl;
    }

    cout<<"size of bool : "<<sizeof(bool)<<endl;

    cout<<"Red light : "<<red_light<<endl;
    cout<<"Green light : "<<green_light<<endl;

    cout<<boolalpha;

    cout<<"Red light : "<<red_light<<endl;
    cout<<"Green light : "<<green_light<<endl;

    return 0;
}
