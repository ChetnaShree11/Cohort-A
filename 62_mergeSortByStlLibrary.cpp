#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr={29,20,28,56,34};
    stable_sort(arr.begin(),arr.end());
    for (int num:arr)
    {
        cout<<num<<" ";
    }
    return 0;
}
