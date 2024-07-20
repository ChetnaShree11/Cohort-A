#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int arr[10]={0};
    cout<<"Enter the String:";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        char ch=s.at(i);
        if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9')
        {
            arr[ch-'0']+=1;

        }
    }
    for(int i =0;i<10;i++)
    {
        if(arr[i]>1)
        {
            cout<<i<<" occurs "<<arr[i]<<" times"<<endl;

        }
    }
}
