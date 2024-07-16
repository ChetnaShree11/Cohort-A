#include<iostream>
using namespace std;
void Selectionsort(int arr[],int x)
{
    for(int i=0;i<x;i++)
    {
        int small=i;
    for(int j=i+1;j<x;j++)
    {
        if(arr[small]>arr[j])
        {
            swap(arr[j],arr[small]);
        }
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
    Selectionsort( a,n);
}
