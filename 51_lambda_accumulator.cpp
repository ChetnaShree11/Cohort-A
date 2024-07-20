#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
    vector<int> numbers={1,2,3,4,5};
    auto sum = [](const vector<int> &v) { //const is used to gurantee it doesn't modify original vector
        int sum = 0;                      //& is used to avoid unneccesary copying of whole vector
        for (int num : v) {
            sum += num;
        }
        return sum;
    };
    cout<<"sum: "<<sum(numbers)<<endl;
}

/*#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
    vector<int> numbers={1,2,3,4,5};
    // using accumulate with a lambda to sum up the elements
    int sum=accumulate(numbers.begin(),numbers.end(),0,[](int total, int n)
    {
        return total+n;
    });
    cout<<"sum: "<<sum<<endl;
}*/
