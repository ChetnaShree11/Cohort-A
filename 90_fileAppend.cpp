#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   ofstream my_file("example.txt",ios::app);

   if(!my_file)
   {
       cout<<"Error opening file."<<endl;
   }

   my_file<<"Chetna 40"<<endl;
   my_file<<"Bhoomi 60"<<endl;

   return 0;
}
