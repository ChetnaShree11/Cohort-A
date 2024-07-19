#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Car{
private:
    string licensePlate;
    string owner;
public:
    Car(string lp,string o) : licensePlate(lp), owner(o){}

    void setlicensePlate(string l)
    {
        licensePlate = l;
    }
    string getlicensePlate(){
        return licensePlate;
    }

    void display()
    {
        cout<<"License Plate: "<<licensePlate<<", Owner: "<<owner<<endl;
    }
};

class ParkingLot{
private:
    vector<Car> parkedCars;
    int capacity;

public:
    ParkingLot(int cap): capacity(cap){}

    bool parkCar(const Car &car)
    {
        if(parkedCars.size()<capacity)
        {
            parkedCars.push_back(car);
            return true;
        }
        else{
            cout<<"Parking lot is full!"<<endl;
            return false;
        }
    }
    void displayParkedCars()
    {
        cout<<"Parked Cars: "<<endl;
        for(auto &car:parkedCars)
        {
            car.display();
        }
    }
};

int main()
{
    ParkingLot myParkingLot(3);
    Car car1("BC123","Sanjay gore");
    Car car2("YZ457","Janvi Manse");
    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);
    myParkingLot.displayParkedCars();
    return 0;
}
