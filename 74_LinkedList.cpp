#include<iostream>
#include<list>
using namespace std;
int main()
{
  list<int> num;
  num.push_front(7); // adds at the front
  num.push_front(6);
  num.push_front(5);
  num.push_back(8); // adds at the back
  num.push_back(9);
  num.push_front(3);
  num.push_front(2);
  num.push_front(1);
  cout<<"Size: "<<num.size();
  // inserting in the middle
  auto x=num.begin();
  advance(x,3); // moves the specified steps forward
  num.insert(x,4); //(iterator,value)
  // accessing front and back elements using functions
  cout<<"\nFirst element: "<<num.front()<<" and Last element: "<<num.back()<<endl;
  cout<<"Size: "<<num.size()<<endl;
  for(auto i:num)
  {
    cout<<i<<" ";
  }
  num.pop_back(); // removes the last element
  num.pop_front(); // removes the first element
  num.remove(5); // removes the specified element
  cout<<endl;
  for(auto i:num)
  {
    cout<<i<<" ";
  }
  // accessing front and back elements using functions
  cout<<"\nFirst element: "<<num.front()<<" and Last element: "<<num.back()<<endl;


  list<int> :: iterator itr = num.begin(); //Create iterator to point to the 1st element
  ++itr; //Now it points to the 2nd element
  cout<<"Second element: "<<*itr<<endl;
  ++itr;
  ++itr;
  cout<<"Fourth element: "<<*itr<<endl;

  itr=num.begin();

  cout<<"3rd & 5th element: ";
  for(int i=0;i<num.size();i++,itr++)
  {
      if(i==2||i==4)
        cout<<*itr<<" ";
  }

    int ele;
    cout<<"\nEnter element to insert: ";
    cin>>ele;

    if(num.empty())
    {
        num.push_front(ele);
    }
    else{
        int pos;
        cout<<"Enter position: ";
        cin>>pos;
        x=num.begin();//iterator
        advance(x,pos-1);
        num.insert(x,ele);
    }
    cout<<"Removed all occurrences of 2: "<<endl;
    num.remove(2);//Remove all the elements with value 2

   for(auto i:num)
   {
        cout<<i<<" ";
   }

   //To remove value at a position
   cout<<"\nRemoving the value at earlier mentioned position"<<endl;
   num.remove(*x);

   for(auto i:num)
   {
        cout<<i<<" ";
   }
    cout<<endl;
    list<int> Rnum;
    itr=num.begin();
    x=Rnum.begin();
    for(int i=0;i<num.size();i++,itr++,x++)
    {
        if((i+1)%2!=0)
        {
            Rnum.insert(x,*itr);
        }
    }

    for(int i=0;i<num.size();i++,itr++)
    {
        if((i+1)%2==0)
        {
            Rnum.insert(x,*itr);
        }
    }

    for(auto i: Rnum)
    {
        cout<<i<<" ";
    }



}


