
// #include <iostream>
// using namespace std;
// class node 
// {

// public:
//     int data;
//     node *next;
// };
 

// void display(node *head) 
// {
   
//     while (head != NULL)
//     {
//         cout << head->data << "->";
//         head = head->next;
//     }
//     cout << "NULL" << endl;
// }

// void insertatstart(node *&head, int val)
// {
//     node *n = new node;
//     n->data = val;
//     n->next = head; 
//     head = n; 
// }

// void insertattail(node *&head, int val)
// {
    
//     node *nw = new node; 
//     node *temp = head;
//     nw->data = val;
//     nw->next = NULL;
//     while (temp->next != NULL) 
//     {
//         temp = temp->next;
//     }
//     temp->next = nw;
// }

// void atindex(node *previous, int value)
// {
//     node *neww = new node;
//     neww->data = value;
//     neww->next = previous->next;
//     previous->next = neww;
// }
// void deleteat_head(node *&head){
//     node *temp = head;
//     head = head->next;
//     delete temp;
// }
// void delete_any_key(node* &head, int val)
// {
//     if (head == NULL) 
//     {
//         return;
//     }
//     if (head->next == NULL)
//     {
//         deleteat_head(head);
//     }
//     node *temp = head; 
//     while (temp->next->data != val)
//     {
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
//     delete temp->next;
// }
// node *reversalof_list(node *&head)
// {
//     node *preptr = NULL;
//     node *currptr = head;
//     node *nextptr;
//     while (currptr != NULL)
//     {
//         nextptr = currptr->next;
//         currptr->next = preptr;
//         preptr = currptr;
//         currptr = nextptr;
//     }
//     return preptr;
// }
// void deleteAtTail(node * &head)
// {
// node * temp = head; if(head==NULL){
// cout<<"Empty"; return;
// }
// if(temp->next==NULL){	//Only one node free (temp);
// temp=NULL;
// }
// while( temp ->next->next){ temp=temp->next;
// }
// free ( temp->next); temp->next=NULL;
// }

// int main()
// {
//     node *head = NULL;
//     node *second = NULL;
//     node *third = NULL;
//     head = new node;
//     second = new node;
//     third = new node;
//     head->data = 1;
//     head->next = second;
//     second->data = 2;
//     second->next = third;
//     third->data = 3;
//     third->next = NULL;
//     display(head);
//     cout<<"After insertion 0 at start : ";
//     insertatstart(head, 0);
//     display(head);
//     cout<<"After insertion 5 at tail : ";
//     insertattail(head, 5);
//     display(head);
//     cout<<"After inserting 7 at index 2nd : ";
//     atindex(second, 7);
//     display(head);
//     cout<<"After deletion at head : ";
//     deleteat_head(head);
//     display(head);
//     cout<<"Reverse order of linked list : ";
//     display(reversalof_list(head));
//     cout<<"After deleting last element : "; 
//     deleteAtTail(head);
//     display(head);
//     delete_any_key(head,2);
//     display(head);
//     return 0;
// }



