#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> numbers ={1,2,3,4,5};
    /*auto it=find_if(numbers.begin(),numbers.end(),[](int n){
                    return n%2==0;});
    if(it!=numbers.end())
    {
        cout<<"First even number found: "<<*it<<endl;
    }
    else{
        cout<<"No even number found"<<endl;
    }*/
    int i;
    for(i=0;i<numbers.size();i++)
    {
        if(numbers[i]%2==0)
        {
            cout<<"First even number found: "<<numbers[i]<<endl;
            break;
        }
    }
    if(i==numbers.size())
    {
        cout<<"No even number found"<<endl;
    }



    return 0;
}
