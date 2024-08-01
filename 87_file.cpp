#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   ofstream my_file("example.txt");
   my_file.close();

   //Check if the file is opened properly
   if(!my_file)
   {
       cout<<"Error opening file."<<endl;
   }

   /*Using is_open function; it returns true if file is opened successfully and false otherwise

   if(!my_file.is_open())
   {
       cout<<"Error opening the file."<<endl;
   }

   Fail function; Returns true if file failed to open, else false

   if(my_file.fail())
   {
       cout<<"Error opening the file."<<endl;
   }*/


   return 1;
}
