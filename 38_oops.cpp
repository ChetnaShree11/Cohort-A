#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
        double salary;   //data hiding
    public:
        string name;
        string dept;
        //double salary
        string subject;
        Teacher()
        {
            cout<<"Constructor is being called\n"<<endl;
        }

        Teacher(string name,string d,string sub, double sal)
        {
            this->name=name;
            dept=d;
            subject=sub;
            salary=sal;
        }
        void changeDept(string newDept)
        {
            dept=newDept;
        }
        //getter and setter methods
        void setSalary(double s)
        {
            salary=s;
        }
        double getSalary()
        {
            return salary;
        }
        void getInfo()
        {
            cout<<"Teacher name: "<<name<<endl;
            cout<<"Teacher subject: "<<subject<<endl;
            cout<<"Department name: "<<dept<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<endl;

        }
};
int main()
{
    Teacher t1;
    Teacher t2("Antra","CSE","Timepass",10);
    t1.name="Chetna";
    t1.subject="Maths";
    t1.changeDept("CSE");
    t1.setSalary(1000);
    t1.getInfo();
    t2.getInfo();
    Teacher t3(t1);
    t3.getInfo();

}
