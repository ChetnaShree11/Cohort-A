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

void SearchEle(int arr[],int x,int ele)
{
    int i;
    for(i = 0;i<x;i++)
    {
        if(arr[i]==ele)
        {
            cout<<"Element found at index : "<<i<<endl;
            break;
        }
    }
    if(i==x)
    {
        cout<<"Element not found"<<endl;
    }
}
int main()
{
    int a[6]={44,5,67,12,89,45};
    int n=6, ele;
    cout<<"Original Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    Selectionsort( a,n);

    cout<<"\nEnter the element you need to search: "<<endl;
    cin>>ele;

    SearchEle(a,n,ele);

}
