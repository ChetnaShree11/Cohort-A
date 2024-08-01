#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
int main()
{
 ifstream my_file("example.txt");
 if(!my_file)
 {
 cout<<"Error! Unable to open the file."<<endl;
 return 1;
 }

 string line;
 int word_c=0;
 while(!my_file.eof())
 {
 string word="";
 getline(my_file,line);
 for(auto i: line){
  if(i==' ')
  {
  word_c++;
  cout<<word<<endl;
  word="";
  }
  else
  {
  word+=i;
  }
 }
 }
 cout<<"count: "<<word_c<<endl;
 my_file.close();
 cout<<"\nFile open status: "<<my_file.is_open()<<endl;
 return 0;
}



