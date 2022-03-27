#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void inserthead(node* &head,int data)
{
    node* n=new node(data);
    n->next=head;
    head=n;

}
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
void deletionhead(node* &head)
{
    node* temp=head;
    head=head->next;
    delete temp;
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
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,4);
    inserthead(head,9);
    deletionhead(head);
    display(head);


}