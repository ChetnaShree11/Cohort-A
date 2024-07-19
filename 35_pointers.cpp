#include<iostream>
#include<list>
using namespace std;
int main(){
    int i =10;
    cout<<&i<<endl;
    cout<<*(&i)<<endl;
    int *a=&i;

    cout<<a<<" "<<*a<<endl;

    const char*message{"Hello world!"};
    cout<<"message: "<<message<<endl;//prints hello world for char*

    cout<<"*message: "<<*message<<endl;

    char message1[]{"Hello world!"};
    message1[0]= 'B';
    cout<<"message1 : "<<message1<<endl;
    return 0;
}

