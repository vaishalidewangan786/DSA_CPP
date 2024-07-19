
// #include <iostream>
// #include <string>
// using namespace std;

// class complex
// {
//     int a, b;

// public:
//     void setdate(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void display();
//     void complexcom(complex o1)
//     {
//         cout << o1.a << " " << o1.b;
//     }
// };
// void complex::display()
// {
//     cout << " The complex no is " << a << " + " << b << "i" << endl;
// }
// int main()
// {
//     complex o1, o2, o3;
//     o1.setdate(2, 3);
//     o1.display();
//     o2.setdate(4, 7);
//     o2.display();
//     o3.complexcom(o1);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class school{
// int roll_num[5], marks[5];
// int static count;
// public:
// int t=0;
// void setdata(){
//    cout<<"enter the roll number of student "<<count+1<<" "<<t<<endl;
//     cin>>roll_num[count];
//     cout<<"enter the marks of student :"<<count+1<<endl;
//     cin>>marks[count];
//     count++; t++;

// }
// void getdata(){
//  for(int i=0; i<t ; i++){
//      cout<<" "<<roll_num[i]<<"  "<<marks[i]<<endl;
//  }
// }
// };
// int school :: count=0;
// int main(){
// school cls1,cls2,cls3;
// cls1.setdata();

// cls1.getdata();
// cls2.setdata();
// cls2.setdata();

// cls2.getdata();
// cls3.setdata();cls3.setdata();cls3.setdata(); cls3.getdata();
//     return 0;
// }






#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node* next;
node(int a){
    data=a;
    next=NULL;
}
};
void insert_at_begin(node* &head ,int a){
    if(head==NULL){
        node *newnode= new node(a);
        head=newnode;
    }
    else{
node *newnode= new node(a);
newnode->next=head;
head=newnode;
    }
}
void insert_at_end(node* &head ,int a){
    node *curr = head;
    if(curr==NULL){
        curr= new node(a);
        head=curr;
    }
    else{
    while(curr->next!= NULL){
        curr= curr->next;
    }
    node *newnode= new node(a);
    curr->next = newnode;
    newnode->next=NULL;}
}
void display(node *head){
if(head==NULL){
    cout<<"no element"<<endl;
}
else{
    while(head!=NULL){
    cout<<head->data<<" ";
   head=head->next;}
   cout<<endl;}
    
}
void insertatpos(node* &head, int pos, int a){
    if(pos==1){
        insert_at_begin(head,a);
    }
    else{
         node *temp = head;
        while(pos-2){
            if(temp->next==NULL){
                cout<<"not possible insertion"<<endl;
                return;
            }
            temp= temp->next;
            
        }
        node *newnode=new node(a);
        newnode->next=temp->next;
         temp->next=newnode;
    }
}
void deletefl(node* head){
     if(head==NULL){
        cout<<"not possible as head is null"<<endl;
        return;
    }
    if(head->next==NULL){
      node* curr= head;
      head=NULL;
      delete curr;
    }
    else{
        node* curr= head;
        node *beforelast = head;
        while (curr->next->next!=NULL)
        {
          curr=curr->next;
        }
        delete curr->next->next;
       curr->next=NULL;

        
    }
}
void deleteff( node* &head){
    if(head==NULL){
        cout<<"not possible"<<endl;
        return;
    }
    if(head->next==NULL){
      node* curr= head;
      head=NULL;
      delete curr;
    }
    else{
   node* curr= head;
   head= head->next;
   delete curr;

    }
}
int search(node* head, int num){
    node * curr= head;
    while (curr!=NULL)

    {
      if(curr->data==num){
         return 1;
      }
      curr=curr->next;
    }
    return 0;
}
void roted(node* &head){
    node* prev=NULL;
    while(head!=NULL){
        head->
    }
}
int main(){
node *head =new node(1);
display(head);
deleteff(head);
display(head);
deleteff(head);
display(head);
// node *sec= new node(2);
// node *third = new node(3);
// head->next=sec;
// sec->next=third;
// display(head);
insert_at_begin(head,9);
insert_at_begin(head,19);
insert_at_begin(head,29);
display(head);
insert_at_end(head, 100);
display(head);
deleteff(head);
display(head);
deletefl(head);
display(head);
insertatpos(head,2,40);
display(head);
insertatpos(head,1,400);
display(head);
insertatpos(head,7,4000);
display(head);
cout<<search(head,9)<<endl;
cout<<search(head,19)<<endl;
cout<<search(head,400)<<endl;
cout<<search(head,40)<<endl;
cout<<search(head,100)<<endl;
cout<<search(head,1)<<endl;
    return 0;
}




// daubly linkedlist

// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:

// int data;
// node* prev;
// node* next;
// node(int a){
//     data=a;
//     prev=NULL;
//     next= NULL;
// }
// };
// void display(node* head){
//     node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;

// }
// void insertbegin(node* &head, int a){
//     node* temp=head;
// node *newnode= new node(a);
// newnode->next= head;
// head->prev=newnode;
// head= newnode;
// }
// void insertend(node* head ,int a){
// node *newnode= new node(a);
// while (head->next!=NULL)
// {
//     head=head->next;
// }
// newnode->prev=head;
// head->next= newnode;

// }
// void reverse(node* &head){
//     node *temp = head; node* cont=NULL;
//     while(temp!=NULL){
//         cont= temp->prev;
//        temp->prev= temp->next;
//        temp->next=cont;
//        temp=temp->prev;
       
//     }
    
    
// }
// int main(){
// node *head=new node(1);
// node *first=new node(2);
// node *third=new node(3);
// head->next=first;
// first->prev=head;
// first->next=third;
// third->prev=first;
// display(head);
// insertbegin(head,5);
// display(head);
// insertend(head, 67);
// display(head);
// reverse(head);
// display(head);
//     return 0;
// }