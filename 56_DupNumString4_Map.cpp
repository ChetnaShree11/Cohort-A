#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="john12doe14@gmail118.com8";
    unordered_map<char,int> count;
    for(char c:s)
    {
    count[c]++;
    }
    for(const auto& entry:count)
    {
    cout<<entry.first <<" "<<entry.second<<endl;
    }
}
