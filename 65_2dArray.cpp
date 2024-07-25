#include<iostream>
#include<vector>
using namespace std;
int main()
{
    /*int arr[3][3]={{1,2,3},{5,6,7},{9,10,11}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
   int row1_sum=0, diagonal_sum=0, diagonal2_sum=0;

   int n=0,m=0;
   cout<<"Enter the size of the 2d array: ";
   cin>>n>>m;
   int arr[n][m];
   cout<<"Enter the elements: "<<endl;
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
   }
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
            if(i==0){
                row1_sum+=arr[i][j];
            }
            if((i+j)==(n-1))
            {

                diagonal_sum+=arr[i][j];
            }
            if(i==j)
            {

                diagonal2_sum+=arr[i][j];
            }
        }
        cout<<endl;
   }

    cout<<"Sum of elements in 1st row: "<<row1_sum<<endl;

    cout<<"Sum of left diagonal elements: "<<diagonal2_sum<<endl;

    cout<<"Sum of right diagonal elements: "<<diagonal_sum<<endl;

