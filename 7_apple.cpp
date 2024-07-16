#include<iostream>
using namespace std;

int main()
{
    int apple_count(5); //functional variable
    int orange_count(10);
    int fruit_count(apple_count+orange_count);
    //int bad_initizlization(doesnot_exist3 + doesnot_exist4);

    //Information lost, less safe than braced initializers
    int narrowing_conversion_functional(2.9);
    cout<<"apple_count: "<<apple_count<<endl;
    cout<<"orange_count: "<<orange_count<<endl;
    cout<<"fruit_count: "<<fruit_count<<endl;
    cout<<"narrowing_conversion_assignment: "<<narrowing_conversion_functional<<endl; //will loose info

    return 0;
}
