#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ifstream my_file("example.txt");
    if (!my_file)
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    string line;

    vector<char> cons;
    cout<<"Vowels:\n ";
    while(!my_file.eof())
    {
        getline(my_file,line);
        string n1="";
        for(auto i: line){
        if(isalpha(i))
        {
            char x=tolower(i);
            if(x=='a' || x=='e' ||x=='i'||x=='o'||x=='u')
            {
                cout<<i<<" ";
            }
            else
            {
                cons.push_back(i);
            }
        }
    }}
    cout<<"\nConsonants: \n";
    for(auto i: cons)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    my_file.close(); //to prevent memory leakage or data loss
    cout<<"\nFile open status: "<<my_file.is_open()<<endl;
    return 0;

}
