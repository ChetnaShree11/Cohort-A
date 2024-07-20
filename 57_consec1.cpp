#include<iostream>
#include<array>
using namespace std;
int main()
{
   array<int,10> a={1,0,1,0,0,0,1,1,1,0};
   int sum =0,mSum=0;
   int c=0,maxC=0;
   for(int i =0;i<10;i++)
   {
       if(a[i]==0)
       {
           sum=0;
           c++;
           if(c>maxC)
            maxC=c;
       }
       else{
        c=0;
        sum+=a[i];
        if(sum>mSum)
            mSum=sum;
       }


   }
   cout<<"Max no. of 1: "<<mSum<<endl;
   cout<<"Max no. of 0: "<<maxC<<endl;
}
