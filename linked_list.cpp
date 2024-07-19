#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* next;
node(int x){
    data=x;
    next=NULL;
}
};


  
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
void insertsorted(node*& head, int x){
   node*temp=head;
   node*prev=head;
   while(x>temp->data && temp->next!=NULL){
    prev=temp;
    temp=temp->next;
   }
   node* newnode=new node(x);
   newnode->next=prev->next;
   prev->next=newnode;
   print(head);

}
int main(){
node* head = new node(1);
node* f=new node(2);
node* s= new node(5);
node* c=new node(6);
head->next=f;
f->next=s;
s->next=c;
int x;
cin>>x;

print(head);
insertsorted(head,x);
    return 0;
}
