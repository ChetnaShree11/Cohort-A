#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    array<int,4> a ={1,2,2,4};

    array<int,4> b = {3,4,4,6}; //STL array

    for(int i =0;i<b.size();i++)
    {
        cout<<b.at(i)<<endl;
    }

    cout<<"Last element : "<<b.back()<<endl;

    cout<<"First element: "<<b.front()<<endl;

    a.swap(b);

    cout<<"After swapping: "<<endl;

    for(int i =0;i<b.size();i++)
    {
      cout<<b.at(i)<<endl;
    }

    if(b.empty())
    {
        cout<<"Array empty"<<endl;
    }
    else{
        cout<<"Array not empty"<<endl;
    }
    int ele=2,c=0;

     for(int i =0;i<b.size();i++)
    {
      if(b[i]==ele)
      {
          c++;
      }
    }
    cout<<ele<<" occurs "<<c<<" times"<<endl;
    int c2;
    c2 = count(a.begin(), a.end(), 4);
    cout<<c2;


}
