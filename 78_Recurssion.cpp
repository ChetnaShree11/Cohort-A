#include<iostream>
using namespace std;
int rsum(int);

int main()
{
    int num, sum;
    cout<<"Enter the number: ";
    cin>>num;
    sum=rsum(num);
    cout<<"Sum of digits: "<<sum;
}
int rsum(int n)
{
        int d,s;
        if(n!=0)
        {
            d=n%10;
            n=n/10;
            s=d+rsum(n);
        }
        else{
            return 0;
        }
        return s;
}

