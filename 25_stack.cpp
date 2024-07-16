#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    int ch;
    do{
    cout<<"Enter choice: \n1.Size\n2.Push\n3.Pop\n4.Top\n5.Exit ";
    cin>>ch;
    if(ch==1)
    {
        cout<<s.size()<<endl;
    }
    else if(ch==2)
    {
        string ele;
        cout<<"Enter: ";
        cin>>ele;
        s.push(ele);
    }
    else if(ch==3)
    {
        if(s.empty())
        {
            cout<<"EMPTY"<<endl;
        }
        else{
        string ele;
        ele = s.top();
        s.pop();
        cout<<ele<<" popped"<<endl;
        }
    }
    else if(ch==4)
    {
        if(s.empty())
        {
            cout<<"EMPTY"<<endl;
        }
        else{
        cout<<s.top()<<endl;
        }
    }
    else if(ch!=5)
    {
        cout<<"Invalid choice"<<endl;
    }
    }while(ch!=5);

    cout<<"Exiting program";


}

