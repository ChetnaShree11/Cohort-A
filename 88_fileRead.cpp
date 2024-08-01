#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream my_file("example.txt");

    //eof returns true if file pointer points to the end of the file
    if(!my_file)
    {
        cout<<"Error opening file."<<endl;
    }

    string line;
    while(!my_file.eof())
    {
        getline(my_file,line);
        cout<<line<<endl;
    }

    my_file.close();

    return 0;
}
