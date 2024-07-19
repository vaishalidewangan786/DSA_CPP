

/*
#include <iostream>
using namespace std;
class node
{
public:
    int data;   //data jo value ko rkhata h
    node *next; //ak pointer h jo jiska nam next h yani y next ka address rakhega
    node(int val)
    { //ak constructor jo value set karta h or next pointer ko null krtah
        data = val;// y value user main me dalega
        next = NULL;

    }
};
void InsertAttail(node* &head, int val)//function jo ak reference leta h head ka or value bhi leta h
{                            
    node *n = new node(val); //dynamic memory alocation n pointer ka nam h or n ko hm val value assign kr rhe h
    if (head == NULL)
    {
        head = n;
        
        return;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
       
        temp = temp->next;
       
    }
      

    temp->next = n;
         
}
void insertAthead (node* &head   , int val){
    node *n = new node(val);
        
       
       n->next=head;
       head=n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
        
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;
    InsertAttail(head, 1);
    InsertAttail(head, 2);
    InsertAttail(head, 3);
    display(head);
    insertAthead(head, 5);
    insertAthead(head, 6);
       display(head);
       //atindex()

    return 0;
}*/

// A complete working C++ program to demonstrate
// all insertion methods on Linked List
/*
#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node
{
	public:
	int data;
	Node *next;
};

//  Given a reference (pointer to pointer)
// to the head of a list and an int, inserts
// a new node on the front of the list. 
void push(Node* &head_ref, int new_data)
{
	//  1. allocate node 
	Node* new_node = new Node();

	//  2. put in the data 
	new_node->data = new_data;

	// 3. Make next of new node as head 
	new_node->next = (head_ref);

	// 4. move the head to point to the new node 
	(head_ref) = new_node;
}

// Given a node prev_node, insert a new node after the given
// prev_node 
void insertAfter(Node* prev_node, int new_data)
{
	//1. check if the given prev_node is NULL 
	if (prev_node == NULL)
	{
		cout<<"the given previous node cannot be NULL";
		return;
	}

	// 2. allocate new node 
	Node* new_node = new Node();

	// 3. put in the data 
	new_node->data = new_data;

	// 4. Make next of new node as next of prev_node 
	new_node->next = prev_node->next;

	// 5. move the next of prev_node as new_node 
	prev_node->next = new_node;
}

// Given a reference (pointer to pointer) to the head of a list and an int, appends a new node at the end 
void append(Node* &head_ref, int new_data)
{
	// 1. allocate node 
    	Node* new_node = new Node();

	Node *last = head_ref; // used in step 5

	// 2. put in the data 
	new_node->data = new_data;

	// // 3. This new node is going to be
	// the last node, so make next of
	// it as NULL
	new_node->next = NULL;

	// 4. If the Linked List is empty,then make the new node as head 
	if (head_ref == NULL)
	{
		head_ref = new_node;
		return;
	}

	// 5. Else traverse till the last node 
	while (last->next != NULL)
		last = last->next;

	// 6. Change the next of last node 
	last->next = new_node;
	return;
}

// This function prints contents of
// linked list starting from head
void printList(Node *node)
{
	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

//Driver code
int main()
{
	//Start with the empty list 
	Node* head = NULL;
	
	// Insert 6. So linked list becomes 6->NULL
	append(head, 6);
	
	// Insert 7 at the beginning.
	// So linked list becomes 7->6->NULL
	push(head, 7);
	
	// Insert 1 at the beginning.
	// So linked list becomes 1->7->6->NULL
	push(head, 1);
	
	// Insert 4 at the end. So
	// linked list becomes 1->7->6->4->NULL
	append(head, 4);
	
	// Insert 8, after 7. So linked
	// list becomes 1->7->8->6->4->NULL
	insertAfter(head->next, 8);
	insertAfter(head->next, 2);
	cout<<"Created Linked list is: ";
	printList(head);
	
	return 0;
}





*/
// this code is about creation of a singly linked list , different types of insertion like at head, at tail, at any
//specific position also about different deletion performance of any value of the list and reversal of list
#include <iostream>
using namespace std;
class node//creating a node which defines data(integer) and next(pointer) publically  
{

public:
    int data;
    node *next;
};
 //to display a list we creat a function . It is simply like triversal of a list.

void display(node *head) // Here we are taking head which is node pointer type , here we don't take head as a reference 
//because we don't want any chages , we just want to print.
{
   
    while (head != NULL)// loop jo jb tk chalta h jb tk head ki value NULL n ho jaye.
    {
        cout << head->data << "->";
        head = head->next;// here we are assigning next of head to head, mane head ke next ko head ke nam kr rahe traverse krne k liye
    }
    cout << "NULL" << endl;
}
// what to do to insert an element at first 

/*
1. Just assume you have a node which has three things 1. data part  2. pointer to next 3 khud ka address
2. now us assume kiye node ko list ka memeber bnana h so first we have to give a dynamic memory to that node.
3. ab bari node ke data part me manchahi value dene ki
4. now node ke next me kya dale socho zara...
answer is that address of first node isn't it.
but one more question first node ka address kaun rkhata h.... does head keep address of first node ....yes
5. ab apka node apke list se add ho chuka h...enjoyyy.
wait wait wait head ko to new node k address ko dete to jao..
*/

void insertatstart(node *&head, int val)// giving reference of head and int val which we want to insert
// reference of head kqu?? qki idhar head ki value change ho rhi
{
    node *n = new node;//for point 2.
    n->data = val;// point 3.
    n->next = head; // point 4.
    head = n; //point 5.
}

/* Now time to insert an element at the end of list...

kya kree...
1. just allocate a dynamic* memory for new node.
2. new node ke data part me manchahi value dedo(idhar mt dena vo main function me dena) 
3. new node ke next me NULL dal do 
node to bn gya ab baari list se add krne ki conect kaise kre node ko list se
4. given list ke last node ke next part pe new node ka address dalne honge
*/
void insertattail(node *&head, int val)
{
    
    node *nw = new node; //1.nw is new node to be inserted
    node *temp = head;// ak temp node bna rhe h jo head k hi h smjho ni banaoge to bhi chalega bs sare temp ki jgh head likh dio.
    nw->data = val;//2.
    nw->next = NULL;//3.
    while (temp->next != NULL) // ye kam kr lo list ke aakhiri node tk pahuchane ke liye its just traversal of list .
    {
        temp = temp->next;
    }
    temp->next = nw;//4.
}

/*insertion at any index of list
previous_node -> new_node -> next_node 
1. allocate a dynamic* memory for new node.
2. new node ke data part me manchahi value dedo
now assume hme do node k bich me ak node dlna h n for that we need to make 2 link isn't it 
1st link between first(previous) node and new node and 2nd link between new node and second(next)node 
3. to make 2st link we just need to give address of next node to the next part of new node isn't it
and we also know that next node ka address abhi right now kaun de skta h Ans:(previous node k next part me next node ka address hoga)
4. for the creation of 1st link we need to give the address of new node to the next part of our previous node.
*/
void atindex(node *previous, int value)
{
    node *neww = new node;//1.
    neww->data = value;//2.
    neww->next = previous->next;//3.
    previous->next = neww;//4.
}//now we are going perform deletion operation
/* dare condition dene honge kaha se node delete krna h head node ki bich ka koi node ya last node 
*/
void deleteat_head(node *&head)//for this we need to make second node as a head node and than delete node
{
    node *temp = head;
    head = head->next;
    delete temp;
}
void delete_any_key(node *&head, int val)
{
    if (head == NULL) //list me koi node hi n ho to kise delete karnge
    {
        return;
    }
    if (head->next == NULL)//ak hi node ho to
    {
        deleteat_head(head);
    }
    node *temp = head; 
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    delete temp->next;
}
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
node* reversebyrecursion(node* &head){
    // if(curr==NULL){
    //     return prev;
    // }
    // node* next=curr->next;
    // curr->next=prev;
    
    // return reversebyrecursion(next,curr);
    if(head == NULL || head->next==NULL){
        return head;
    }
    node* newhead= reversebyrecursion(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int main()
{
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;
    head = new node;
    second = new node;
    third = new node;
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    insertatstart(head, 0);
    insertatstart(head, 12);

    display(head);
    deleteat_head(head);
    insertattail(head, 5);

    atindex(second, 7);
    display(head);
    cout << "after reversal :" << endl;
  display(reversebyrecursion(head));
    // display(reversalof_list(head));
    return 0;
}

