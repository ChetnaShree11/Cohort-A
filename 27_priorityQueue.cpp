#include<iostream>
#include<queue>
using namespace std;
int main()
{
    // max heap
    priority_queue<int> ma;
    // min heap
    priority_queue<int,vector<int>,greater<int> > min;
    ma.push(1);
    ma.push(4);
    ma.push(2);
    ma.push(3);
    cout<<"Size: "<<ma.size()<<endl;
    int n=ma.size();
    for(int i=0;i<n;i++)
    {
        cout<<ma.top()<<" ";
        ma  .pop();
    }
    cout<<endl;
    min.push(5);
    min.push(1);
    min.push(0);
    min.push(4);
    min.push(3);
    int m=min.size();
    for(int i=0;i<m;i++)
    {
        cout<<min.top()<<" ";
        min.pop();
    }
}
