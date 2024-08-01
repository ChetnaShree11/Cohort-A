#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> num;
    int N;
    cout<<"How many elements u want to enter: ";
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int ele;
        cin>>ele;
        num.push_back(ele);
    }
    int ch;
    do{
    cout<<"\n1.Reverse\n2.Sort\n3.Unique\n4.Is list Empty?\n5.Size\n6.Clear\n7.Merge\n8.Display\n9.Exit";
    cout<<"\nEnter your choice: ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        num.reverse();
        cout<<"List reversed"<<endl;
        break;

    case 2:
        num.sort();
        cout<<"List sorted"<<endl;
        break;

    case 3:
        num.unique();
        cout<<"Consecutive duplicates removed"<<endl;
        break;

    case 4:
        if(num.empty())
            cout<<"List is empty."<<endl;
        else
            cout<<"List is not empty."<<endl;
        break;

    case 5:
        cout<<"Size: "<<num.size()<<endl;
        break;

    case 6:
        num.clear();
        cout << "List cleared." << endl;
        break;

    case 8:
         for(auto i:num)
        {
            cout<<i<<" ";
        }
        break;

    case 7:
        int n;
        list<int> num1;
        cout<<"How many elements of 2nd list u want to enter: ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int ele;
            cin>>ele;
            num1.push_back(ele);
        }
        cout<<"Sorting both lists before merging"<<endl;
        num.sort();
        num1.sort();
        num.merge(num1);
        cout<<"Lists merged"<<endl;
        break;

    }
    }while(ch!=9);
}
