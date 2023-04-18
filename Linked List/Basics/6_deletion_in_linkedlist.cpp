#include <bits/stdc++.h>
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

Node * take_input()
{
     int data;
     cin >> data;
      
      Node * head = NULL;
      Node * tail = NULL;

      while(data!=-1)
      {
        Node *newnode = new Node(data);
        if(head==NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        } 
        cin >> data;
      }
        return head;
}

Node* deletion(Node *head,int i)
{
    Node * temp = head;
    int count=0;
    if(i==0)
    {
        Node *a = temp;
        head = head->next;
        delete a;
        return head;

    }
    while(temp!=NULL&&count<i-1)
    {
        temp = temp->next;
        count++;
    }
    if(temp!=NULL)
    {
            Node *a = temp->next;
            Node *b =  a ->next;
            temp->next = b;
            delete a;
    }
    return head;
   
}

    void print(Node *head)
{
    while(head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
   
    Node *head = take_input();
     print(head);
     int i;
    cin >> i;
    head = deletion(head,i);
    print(head);

}
