#include<iostream>
#include "76_LL_Insert.cpp"
using namespace std;

void displayReverse(Node *head)
{
    if(head == NULL)
        return;

    displayReverse(head->next);

    cout << head->value << " ";
}

int main()
{
 Node *head= new Node(10);
 insertAtEnd(head,13);
 insertAtEnd(head,14);
 insertAtEnd(head,16);
 insertAtEnd(head,18);"

 insertAtEnd(head,20);

 display(head);
 cout<<"Reversed list: ";
 displayReverse(head);
}
