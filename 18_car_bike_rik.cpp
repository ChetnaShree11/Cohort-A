#include<iostream>
using namespace std;
int main()
{
    int ch, car =0, bike =0, rik=0;
    char ch1;
    do{
        cout<<"What do you want to park:\n1.Car\n2.Bike\n3.Rikshaw"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            car ++;
            break;
        case 2:
            bike ++;
            break;
        case 3:
            rik ++;
            break;
        default:
            cout<<"Invalid choice"<<endl;
        }
        cout<<"Do you want to park more vehicle(Y/N): "<<endl;
        cin>>ch1;
    }while(ch1=='Y'||ch1=='y');
    cout<<"Cars: "<<car<<"\nBikes: "<<bike<<"\nRikshaw: "<<rik<<endl;


}
