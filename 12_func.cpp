#include<iostream>
using namespace std;

void add(int a, int b)
{
    int sum;
    sum = a+b;
    cout<<"Sum is: "<<sum;
}

void add(int a, int b, int c)
{
    int sum;
    sum = a+b+c;
    cout<<"Sum is: "<<sum;
}

void sub(int a, int b)
{
    int sub;
    sub = a-b;
    cout<<"Difference is: "<<sub;
}

void mul(int a, int b)
{
    int mul;
    mul= a*b;
    cout<<"Product is: "<<mul;
}

void divide(int a, int b)
{
    int div;
    if(b==0)
    {
        cout<<"Divide by 0 error"<<endl;
    }
    else{
            div = a/b;
            cout<<"Quotient is: "<<div;
    }
}

int main()
{
    int num1, num2, ch;
    cout<<"Enter choice:\n1.Add\n2.Subtract\n3.Multiply\n4.Divide"<<endl;
    cin>>ch;
    cout<<"Enter the 2 numbers"<<endl;
    cin>>num1>>num2;

    switch(ch)
    {

    case 1:
        add(num1, num2);
        break;
    case 2:
        sub(num1, num2);
        break;
    case 3:
        mul(num1, num2);
        break;
    case 4:
        divide(num1, num2);
        break;
    default:
        cout<<"Invalid choice"<<endl;
    }

    return 0;
}
