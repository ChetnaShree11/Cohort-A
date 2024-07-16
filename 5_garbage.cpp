#include<iostream>
using namespace std;

int main()
{
    //Braced initializers
    //Variable may contain random garbage value
    int elephant_count;
    int lion_count{};//initializes to 0 otherwise garbage value
    int dog_count{10};
    int cat_count{15};
    //can use expression as intializer
    int domestic_animals{dog_count + cat_count};

    int new_number{doesnot_exist};
    int narrowing_conversion{2.9}; //compile error;
    cout<<"Elephant count: "<<elephant_count<<endl;
    cout<<"lion_count: "<<lion_count<<endl;
    cout<<"dog_count: "<<dog_count<<endl;
    cout<<"cat_count: "<<cat_count<<endl;
    cout<<"domestic_animals: "<<domestic_animals<<endl;

    return 0;
}
