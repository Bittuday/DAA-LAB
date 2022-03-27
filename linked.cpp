#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
};

void insertattail(node* &head,int data)
{
    node* n=new node(data);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void inserthead(node* &head,int data)
{
    node* n=new node(data);
    n->next=head;
    head=n;
}
void deletion(node* &head,int data)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        delete head;
        return;
    }
    node* temp=head;
    while(temp->next->data!=data)
    {
        temp=temp->next;
    }
    node* de=temp->next;
    temp->next=temp->next->next;
    delete de;
}
void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    node* head=NULL;
    inserthead(head,1);
    insertattail(head,2);
       insertattail(head,5);
          insertattail(head,9);
          deletion(head,5);
          display(head);

}

