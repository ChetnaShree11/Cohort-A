#include<iostream>
using namespace std;

int main()
{
    float c_held,c_attend;
    cout<<"Total classes held: "<<endl;
    cin>>c_held;
    cout<<"Classes attended: "<<endl;
    cin>>c_attend;
    float percentage;
    percentage = (c_attend/c_held)*100;
    if(percentage <75)
    {
        cout<<"Not Allowed";
    }
    else{
        cout<<"Allowed";
    }

    return 0;
}
