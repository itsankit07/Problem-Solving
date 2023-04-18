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

    if(head==NULL)
    return head;
    
    if(i==0)
    {
        head = head->next;
        return head;

    }
    else{
        
        Node*b = deletion(head->next,i-1);
        head->next=b;
        return head;

    }
   
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
