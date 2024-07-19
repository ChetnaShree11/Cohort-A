#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> s;
// we cannot add duplicate elements into the array
s.insert(5);
s.insert(5);
s.insert(5);
s.insert(1);
s.insert(6);
s.insert(0);
s.insert(0);
for(auto i:s){
  cout<<i<<endl;
}
cout<<endl;// 0,1,5,6
set<int>::iterator it=s.begin();
it++;

s.erase(it); // erase the element at the second position i.e. 1 in the set
// auto is the storage class used to access the elements without specifying the data type

for(auto i:s){ // 0,5,6
  cout<<i<<endl;
}
cout<<endl;
cout<<"is present "<<s.count(7)<<endl; //0
set<int>::iterator itr = s.find(5);
for(auto it=itr;it!=s.end();it++)
{
    cout<<*it<<" ";
}
cout<<endl;

return 0;
}

