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

    void print(Node *head)
{
    while(head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void reverse(Node *head)
{  
    Node * temp = head;
    Node *prev = NULL;
    Node *next = NULL;
    while(temp!=NULL)
    {
        next = temp->next;   
        temp->next = prev;
        prev = temp;
        
        temp = next;
    }
      
     head = prev;

   print(head);
}

int main()
{
   
    Node *head = take_input();
      print(head);
      cout << endl;
    reverse(head);
}
