#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   ofstream my_file("example.txt");


   if(!my_file)
   {
       cout<<"Error opening file."<<endl;
       return 1;
   }

   my_file<<"Preeti 4"<<endl;
   my_file<<"Antra 10"<<endl;

   my_file.close();

   return 0;
}
