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

void insert(node* &head,int data)
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
node* mid(node* head)
{
    if(head==NULL)
    {
        return NULL;
    }

if(head->next=NULL)
{
    return head;
}
if(head->next->next==NULL)
{
    return head->next;
}
node* slow=head;
node* fast=head->next;
while(fast!=NULL)
{
    fast=fast->next;
    if(fast!=NULL)
    {
        fast->next;
    }
    slow=slow->next;
}
return slow;
    
}

int main()
{
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    node* n=mid(head);
    cout<<n->data;

}