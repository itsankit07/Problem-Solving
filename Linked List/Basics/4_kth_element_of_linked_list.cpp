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

void kth_element(Node *head,int n)
{
    Node * temp = head;
    int count=1;
    while(head!=NULL)
    {
        if(count==n)
        {
            cout << head->data << endl;
            break;
        }
        count++;
        head = head->next;
    }
   
}

int main()
{
     Node *head = take_input();
     int k;
     cin >>k;
     kth_element(head,k);
}
