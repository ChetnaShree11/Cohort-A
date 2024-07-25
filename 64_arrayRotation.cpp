#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v={0,1,2,3,4};
    int n=v.size();
    int i=0;
    while(i<n){
        int temp = v[n-1];

        for(int j=n-1;j>=0;j--)
        {
            v[j]=v[j-1];
        }
        v[0]=temp;
        for(int n: v)
        {
            cout<<n<<" ";
        }
        cout<<endl;
        i++;

    }


    return 0;
}
