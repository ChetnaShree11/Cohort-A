#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;

    d.push_back(10);

    d.push_front(11);

    cout<<"Elements are: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();

    cout<<"Elements are: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_front();
    cout<<"Elements are: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;
    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase "<<d.size()<<endl;

}

