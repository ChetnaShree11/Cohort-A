#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> v= {1,2,3,4};
   vector<int> v2= {9,8,7,6};
   cout<<"Capacity: "<<v.capacity()<<endl;
   cout<<"Size: "<<v.size()<<endl;
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<"    ";
   }
   cout<<endl;
   v.swap(v2);
   v.push_back(5);
   cout<<"Capacity after adding 1 element: "<<v.capacity()<<endl;//Capacity becomes double after adding even single element
   cout<<endl;
   cout<<"Size after adding 1 element: "<<v.size()<<endl;
   cout<<endl;
   v.push_back(4);
   cout<<"Capacity after adding 1 more element: "<<v.capacity()<<endl;
   cout<<endl;
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<"    ";
   }
   cout<<endl;
   cout<<"First element: "<<v.front()<<endl;
   v.pop_back();
   v.clear();
   cout<<"Capacity after clear: "<<v.capacity()<<endl;
   cout<<"Size after clear: "<<v.size()<<endl;
}
