#include<iostream>
using namespace std;
void Pound_Rs()
{
    float pound;
    cout<<"Enter in pounds"<<endl;
    cin>>pound;
    cout<<"Money in rupees: "<<(pound * 106.94)<<endl;
}

void Rs_pound()
{
    float Rs;
    cout<<"Enter in Rupees"<<endl;
    cin>>Rs;
    cout<<"Money in pounds: "<<(Rs*0.0094)<<endl;
}

void Dollar_Rs()
{
    float dollar;
    cout<<"Enter in dollar"<<endl;
    cin>>dollar;
    cout<<"Money in rupees: "<<(dollar * 83.52)<<endl;
}

void Rs_Dollar()
{
    int Rs;
    cout<<"Enter in rupees"<<endl;
    cin>>Rs;
    cout<<"Money in dollar: "<<(Rs * 0.012)<<endl;
}

void Yuan_Rs()
{
    float yuan;
    cout<<"Enter in Yuan"<<endl;
    cin>>yuan;
    cout<<"Money in rupees: "<<(yuan * 11.48)<<endl;
}

void Rs_Yuan()
{
    float Rs;
    cout<<"Enter in rupees"<<endl;
    cin>>Rs;
    cout<<"Money in yuan: "<<(Rs * 0.087)<<endl;
}

int main()
{
    int ch;
    cout<<"Enter your choice: "<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        Pound_Rs();
    case 2:
        Rs_pound();
    case 3:
        Dollar_Rs();
    case 4:
        Rs_Dollar();
    case 5:
        Yuan_Rs();
    case 6:
        Rs_Yuan();
    default:
        cout<<"Invalid choice"<<endl;
    }

    return 0;
}
