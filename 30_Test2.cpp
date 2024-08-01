#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(2);
    l.push_back(4);
    l.push_back(1);
    l.push_back(3);
    int maxi=l.front();
    for(int i: l)
    {
        if(maxi<i)
            maxi=i;
    }
    cout<<maxi;
}
