#include<iostream>
using namespace std;
void bubblesort(int arr[],int x)
{
    for(int i=0;i<x-1;i++)      //n-1 time
    for(int j=0;j<x-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
    cout<<"Sorted Array"<<endl;
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int a[5]={7,8,3,1,2};
    int n=5;
    cout<<"Original Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    bubblesort( a,n);
}
