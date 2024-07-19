// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;

//     node(int val){
//      data=val;
//      next=NULL;
//     }
// };
// void display(node *head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void insertAtHead(node*&head,int val){
//     node* newnode=new node(val);
//     newnode->next=head;
//     head=newnode;
// }
// node *isrtstart(node*head,int val){
//     node* newnode=new node(val);
//     newnode->next=head;
//     return newnode;
// }
// void insertAtEnd(node* &head,int val){
//     if(head==NULL){
//         node* newnode=new node(val);
//         newnode->next=NULL;
//         head=newnode;
//     }
//     else{
//         node *temp=head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         node* newnode=new node(val);
//         temp->next=newnode;
//         newnode->next=NULL;
      
//     }
// }

// void deleteFirstNode(node* &head){
//     if (head==NULL){
//         cout<<"can't"<<endl;
//        return;
//     }
//     if(head->next==NULL){
//         delete head;
//         head=NULL;
//     }
//     else
//     {node*temp=head;
//         head=head->next;
//         delete temp;
//     }
// }

// void deleteFromLast(node* &head){
//       if (head==NULL){
//         cout<<"can't"<<endl;
//        return;
//     }
//     if(head->next==NULL){
//         delete head;
//         head=NULL;
//     }
//     else{
//         node* temp=head;
//         while(temp->next->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=NULL;
//         delete temp->next;        
//     }
     

    
// }
// int main(){
// node *head=NULL;
// node *second=NULL;
// node* third=NULL;
// head= new node(0);
// second =new node(1);
// third= new node(2);
// head->next=second;
// second->next=third;
// insertAtHead(head,10);
// head=isrtstart(head,56);
// display(head);
// insertAtEnd(head,5656);
// display(head);
// deleteFirstNode(head);
// display(head);
// deleteFromLast(head);
// display(head);display(head);
// return 0;
// }








#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
     data=val;
     next=NULL;
    }
};
int main(){
node *head=NULL;
node *second=NULL;
node* third=NULL;
node* forth=NULL;
head= new node(0);
second =new node(1);
third= new node(2);
forth= new node(3);
head->next=second;
second->next=third;
third->next=forth;
return 0;
}