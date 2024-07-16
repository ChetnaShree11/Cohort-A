#include<iostream>

using namespace std;
int main()
{
    string str1 = "Hello, ";
    string str2 = "World";
    string result = str1+str2;
    cout<<"Concatenated string : "<<result<<endl;

    string substr = "aaaaa";
    size_t found = result.find(substr);
    if(found!= string::npos)
     {
         cout<<"Substring found at  index: "<<found<<"\n"<<endl;
     }
     else{
        cout<<"Substring not found"<<endl;
     }

     result.replace(3,4,"abcd"); //position, length of char to be replaced, string
     cout<<"After replacing: "<<result<<"\n"<<endl;

     result.append(" appended\n");
     cout<<result<<endl;

     cout<<"Comparison result: "<<str1.compare("Hello, ")<<endl;;

     result.clear();
     cout<<"String cleared"<<endl;



    return 0;

}
