#include <iostream>
#include <fstream>
#include <string>
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
    int sum = 0,c=0;
    while (getline(my_file, line))
    {
        int a = 0;
        c+=1;
        for (int i = 0; i < line.size(); i++)
        {
            if (line[i] == ' ')
            {
                a = i;
            }
        }
        int b = stoi(line.substr(a + 1, line.size() - (a + 1)));
        sum += b;

    }
    cout <<"Sum: "<<sum<< endl;
    cout<<"Average: "<<sum/c;


    my_file.close();

    return 0;
}
