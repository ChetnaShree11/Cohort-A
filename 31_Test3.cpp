#include<iostream>
#include<vector>
using namespace std;
int Mul_3(vector<int> v,int n)
{
    int count=0;
    for(int i:v)
    {
        if(i%3==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n,count1;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    count1=Mul_3(v,n);
    cout<<count1;


}
