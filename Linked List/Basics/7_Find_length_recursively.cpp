#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node * takeinput()
{
     int data;
     cin >> data;
     Node *head = NULL;
     while(data!=-1)
     {
        Node *newnode = new Node(data);
          if(head==NULL)
          head = newnode;

          else
          {
            Node *temp = head;

            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
          }
          cin >> data;
     }
     return head;
}

void print(Node * head)
{
    Node *temp = head;
     while(temp!=NULL)
     {
        cout << temp->data << " ";
        temp = temp ->next;
     }
}
int findlen(Node * head)
{
    if(head==NULL)
    return 0;
    else
    return 1+findlen(head->next);
}
int main()
{
    Node *head = takeinput();
    print(head);
    
    int length = findlen(head);
    cout << length << endl;

}
