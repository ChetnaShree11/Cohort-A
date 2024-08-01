#include<iostream>
using namespace std;
int factorial(int);

int main()
{
    int num, fact;
    cout<<"Enter the number: ";
    cin>>num;
    if(num>=0){
        fact=factorial(num);
        cout<<"Factorial: "<<fact;
    }
    else{
        cout<<"Enter a positive number";
    }
}
int factorial(int n)
{
        if(n<=1)
        {
           return 1;
        }
        else{
            return n*factorial(n-1);
        }
}

