#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    int nums[]={-2,1,-3,4,-1,2,1,-5,4};
    int max_sum =0;
    int n = sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=nums[j];
            if(sum>max_sum)
        {

            max_sum=sum;
        }
        }
    }
    cout<<max_sum;
    cout<<INT_MIN;
}
