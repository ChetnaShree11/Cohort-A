#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Bubble(vector<int> &v)
{
    for(int i=0;i<v.size();i++)    //n-1 time
    for(int j=0;j<v.size()-i-1;j++)
    {
        if(v[j]>v[j+1])
        {
            swap(v[j],v[j+1]);
        }
    }

    cout<<"Sorted Vector: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

void Selection(vector<int> &v)
{
     for(int i=0;i<v.size();i++)
    {
        int small=i;
    for(int j=i+1;j<v.size();j++)
    {
        if(v[small]>v[j])
        {
            swap(v[j],v[small]);
        }
    }
    }
    cout<<"Sorted Vector: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}

void Insertion(vector<int> &v)
{
    for(size_t i=1;i<v.size();++i)
    {
        int key =v[i];
        int j=i-1;
        while(j>=0 && v[j]>key)
        {
            v[j+1]=v[j];
            --j;
        }
        v[j+1]=key;
    }
    cout<<"Sorted Vector: "<<endl;
    for (int num:v)
    {
        cout<<num<<" ";
    }

}

void Merge(vector<int> &v)
{
    stable_sort(v.begin(),v.end());
    cout<<"Sorted Vector: "<<endl;
    for (int num:v)
    {
        cout<<num<<" ";
    }

}

int main()
{
    cout<<"Original array"<<endl;
    vector<int> v ={2,3,6,1,0,9,2,5};
    for(int n:v)
    {
        cout<<n<<" ";
    }
    int ch;
    char ch1;
    do{
    cout<<"\nEnter your choice: \n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Merge Sort\n5.Exit"<<endl;
    cin>>ch;

    switch(ch)
    {
    case 1:
        Bubble(v);
        break;
    case 2:
        Selection(v);
        break;
    case 3:
        Insertion(v);
        break;
    case 4:
        Merge(v);
        break;
    case 5:
        cout<<"Exiting........!"<<endl;
        break;
    default:
        cout<<"Invalid choice!"<<endl;
        cout<<"Enter 'Y' to continue, any other letter to exit."<<endl;
        cin>>ch1;
    }
    }while(ch!=5 && (ch1=='Y'||ch1=='y'));
}
