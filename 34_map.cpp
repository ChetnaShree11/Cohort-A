#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]= "Chetna";
    m[2]= "Antra";
    m[4]= "Sukriti";

    m.insert({5,"Akanksha"});
    for(auto i:m)
    {
        //expression cannot be used as a function
        //i.first() don't write this way
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }

    cout<<"Find the element: "<<m.count(-13)<<endl;

    m.erase(5);
    cout<<"After erase "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }

    auto findElement = m.find(4);
    for(auto i=findElement;i!=m.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

}

