#include<iostream>
using namespace std;

int main()
{
    //Assignment notation
    int bike_count=2;
    int truck_count=7;
    int vehicle_count= bike_count+truck_count;
    int narrowing_conversion_assignment = 2.0;

    cout<<"bike_count: "<<bike_count<<endl;
    cout<<"truck_count: "<<truck_count<<endl;
    cout<<"vehicle_count: "<<vehicle_count<<endl;
    cout<<"narrowing_conversion_assignment: "<<narrowing_conversion_assignment<<endl;

    //Check the size with sizeof
    cout<<"sizeof int: "<<sizeof(int)<<endl;
    cout<<"sizeof truck_count: "<<sizeof(truck_count)<<endl;

    return 0;
}
