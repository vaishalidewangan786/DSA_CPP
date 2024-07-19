//Doubly linked list all insertion operation
#include<iostream>
using namespace std;
class node{
public:
int data ;
node* next;
node* prev;
};
void display1(node* &head){
    cout<<"front travers : "<<endl;
    node* temp1=head;
    node* temp2;
    cout<<"NULL ";
   
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp2=temp1;// we need this for back traversal bcoz we need last node for back traversing.
        temp1=temp1->next;
    }
    cout<<"NULL"<<endl;
   cout<<"Back traversing : "<<endl<<"NULL ";
   while(temp2!=NULL){
      cout<<temp2->data<<" ";
      temp2=temp2->prev;
   }
   cout<<"NULL"<<endl;
}
/*To insert node in front of the given DLL,we need to follow this steps:
1-> allocate memory for new node.
2-> give value to its data part.
3-> ponit previous pointer of newnode to NULL.
4-> point next pointer of newnode to head.
5-> point previous pointer of head node to newnode.
6-> make newnode as head .*/
void insertionatfrontend(node* &head, int val){
    cout<<"inserting "<<val<<" at frontend "<<endl;
    node* newnode=new node;//1.
    newnode->data=val;//2.
    newnode->prev=NULL;//3.
    newnode->next=head;//4.
   head->prev=newnode;//5.
   head=newnode;//6.

}
/*To insert a node after given node,we need to follow the following steps:
1-> allocate memory for newnode.
2-> give value to its data part.
3-> point next pointer of newnode to next pointer of given node.
4-> point previous pointer of newnode to given node.
5-> point next pointer of given node to newnode.
6-> given node ke bad aane vale node ke previous pointer to newnode se point kro.*/
 void insertafteranode(node* &prev_n, int val){
    cout<<"inserting "<<val<<" after given node "<<endl;
   node* nnode = new node;//1.
   nnode->data=val;//2.
   nnode->prev=prev_n;//4.
   nnode->next=prev_n->next;//3.
   prev_n->next->prev=nnode;//6.
   prev_n->next=nnode;//5.
 }


 
//   To insert a node befor the given node we need to follow these steps:
//  1-> allocate memory for newnode.
//  2-> give value to its data part.
//  3-> point previous pointer of newnode to previous pointer of given node.
//  4-> point pervious pointer of given node to newnode.
//  5-> point n 
 
 void insertionbeforenode(node* &head, node* &an, int val){
    cout<<"inserting "<<val<<" before node  "<<endl;
     node* nnde= new node;
     node* temp = head;
     nnde->data=val;
     nnde->next=an;
     nnde->prev=an->prev;
     an->prev=nnde;

     while (temp->next!=an){
         temp=temp->next;
     }
     temp->next = nnde;
 }
 void insertatbackend(node* &head, int val){
    cout<<"inserting "<<val<<" at backend "<<endl;
     node* newnode= new node;
     newnode->data=val;
     newnode->next=NULL;
     node* tmp=head;
     while(tmp->next!=NULL){
         tmp=tmp->next;
     }
      tmp->next=newnode;
      newnode->prev=tmp;
 }
void reverse(node *&head){
cout<<"list after reversing "<<endl;
node* curr=head;node* previ=NULL;
node* nextt;
while(curr!=NULL){
previ=curr->prev;
curr->prev=curr->next;
curr->next=previ;
curr=curr->prev;
}
head=previ->prev;
display1(previ->prev);
}
void deletehead(node*& head){
    if(head==NULL){
        return ;
    }
    if(head->next==NULL){
        head=NULL;
        return;
    }
    else{
        node* temp=head;
        head=head->next;
        head->prev=NULL;
       delete(temp);
    }
    display1(head);
}

void deletelast(node* &head){
     if(head==NULL){
        return ;
    }
    if(head->next==NULL){
        head=NULL;
        return;
    }
    node* curr=head;
    while (curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->prev->next=NULL;
    delete curr;
    display1(head);
    
}


int main(){
node* head=NULL;
node* first=NULL;
node* second=NULL;
node* third= NULL;

head= new node;
first= new node;
second=new node;
third= new node;

head->data=1;
head->prev=NULL;
head->next=first;

first->data=2;
first->prev=head;
first->next=second;

second->data=3;
second->prev=first;
second->next= third;

third->data=4;
third->prev=second;
third->next=NULL;
display1(head);
insertafteranode(first,5);
display1(head);
insertionatfrontend(head,6);
display1(head);
insertionbeforenode(head,second,100);
display1(head);
insertatbackend(head,323);
display1(head);
reverse(head);
deletehead(head);
deletelast(head);
return 0;
}