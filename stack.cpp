//Stack implimentation using array
/*
#include<iostream>
# define N 3
using namespace std;
int stack[N];
int top=-1;
void push(){
    
     top++;
    if(top==N){
        cout<<"you cannot push as it is overflow condition "<<endl;
    }
    else{
        int a;
        cout<<"Enter number : "<<endl;
        cin>>a;
    stack[top]=a;
    }
}

void pop(){
   int b;
    if(top==-1){
        cout<<"you cannot perform pop operation as stack is in underflow condition "<<endl;
    }
    else{
        cout<<"top element is deleted "<<endl;
    top=top-1;
    }
}
void peek(){
    if(top==-1){
        cout<<"no element "<<endl;
    }
    else{
        cout<<stack[top]<<endl;
    }
}
void display(){
    cout<<"stack elements are : ";
    for(int i=top;i>=0; i--){
        cout<<i<<". "<<stack[i]<<endl;
    }
    
}
int main(){
    int a;
    
while(1){
    cout<<" enter 1 for push , 2 for pop ,3 for peek ,and 4 for display :"<<endl;
    cin >>a;
    switch (a)
    {
    case 1:
       push();
        break;
    case 2 :
      pop();
      break;
    case 3:
      peek();
      break;
    case 4:
      display();
      break;

    default:
    cout<<"invailid num "<<endl;
        break;
    }
   
}
return 0;
}
*/
// stack represention using linked list
/*
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *top = NULL;
void push()
{
    int val;
    cout << "entes value : " << endl;
    cin >> val;
    node *newnode = new node;
    newnode->data = val;
    newnode->next = top;
    top = newnode;

}
void display()
{
    node *temp = top;
    if (temp == NULL)
    {
        cout << "empty stack " << endl;
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    cout << endl;
}
void peek()
{
    if (top == NULL)
    {
        cout << "stack is empty " << endl;
    }
    else
    {
        cout << "top element is : " << top->data << endl;
    }
}
void pop()
{
    if (top == NULL)
    {
        cout << "stack is empty " << endl;
    }
    else
    {
        node *temp = top;
        top = top->next;
        delete temp;
    }
}
int main()
{
    int a;

    while (1)
    {
        cout << " enter 1 for push , 2 for pop ,3 for peek ,and 4 for display :" << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;

        default:
            cout << "invailid num " << endl;
            break;
        }
    }
    return 0;
}
*/
/*
// Infix to Postfix conversion....
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int precidence(char c)
{
    if (c == '^')
    {
        return 1;
    }
    else if (c == '+' || c == '-')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else
        return -1;
}

void infixtopostfix(string s)
{
    stack<char> st;
    string result;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
        else if (c == '(')
        {
            st.push('(');
        }
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
      
       }
        else
        {
            while (!st.empty() && precidence(c) <= precidence(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }

        cout << result << endl;
    
}
    int main()
    {
        string str = "a+b*(c^d-e)^(f+g*h)-i";
        infixtopostfix(str);
        return 0;
    }
    */





   // stack is linear data structure. we can assume it like a open container.
   // There are mainly five operation...
   //1. isempty() -> to know whether the stack is empty or not.
   //2. push(x) -> to insert an element to the stack.
   //3. pop() -> to remove element from the top.
   //4. peek() -> to print topmost element of stack.
   //5. 
   // stack overflow -> if stack is full and we want to perform push operation .
   // stack underflow -> if the stack don't has any element but we perform pop or peek operation .

   // implementation of stack..
   
/*
   #include<iostream>
   using namespace std;
   struct stack
   {
       public:
       int *arr;
       int top;
       int cap;
       stack(int a){
       cap=a;
       top=-1;
       arr= new int[cap];
       }
       void push(int x){
           top++;
           arr[top]=x;
       }
       int peek(){
         return arr[top];
       }
       int pop(){
           int a = arr[top];
           top--;
           return a;
       }
       int size(){
           return top+1;
       }
       bool isempty(){
           return (top==-1);
       }
   };
   
   int main(){
    stack stack1(4);
    stack1.push(100);
    stack1.push(200);
    cout<<stack1.peek()<<endl;
    stack1.pop();
    cout<<stack1.peek()<<endl;
    cout<<stack1.size()<<endl;
       return 0;
   }

*/


// linked list implimentation of stack
/*
#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int a){
    data=a;
    next= NULL;
}
};
class stackk{
    public:
    int size;
    node* head;
    stackk(){
     size=0;
      head=NULL;
    }
 void push(int a ){
     if(head==NULL){
        node *newnode = new node(a);
        head=newnode;
    }
  else{
node *newnode= new node(a);
newnode->next=head;
head=newnode;
    }
    size++;
 }
 void pop()
 {
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
    size--;
 }

 void peek(){
     cout<<head->data<<endl;
 }

bool is_empty(){
     return(head==NULL);
 }

};


int main(){
stackk s;

s.push(100);
s.push(200);
s.push(300);
s.pop();
s.size;
s.peek();
s.pop();
s.peek();
s.size;
s.pop();
cout<<s.is_empty()<<endl;

    return 0;
}

*/




// Stack STL...
/*
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s;
    s.push(5);
    s.push(6);
    s.push(55);
    s.push(66);
    // cout<<s.size()<<endl;
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
    // s.pop();
    // s.push(666);
    //  cout<<s.top()<<endl;
    while(s.empty()==false){
        cout<<s.top()<<endl;
        s.pop();
    }
}
*/

// twostack implimentation...

/*
#include<bits/stdc++.h>
using namespace std;
class twostack{
int *arr;
int top1, top2;
int size;
public:
twostack(int s){
    size=s;
    arr=new int[s];
    top1=-1;
    top2=size;
}
        void push2(int y){
        if(top1< top2-1){
            top2--;
            arr[top2]=y;
        }
        else{
            cout<<"overflow condition"<<endl;
              exit(1);  
        }
    }

    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1]=x;
        }
        else{
            cout<<"overflow condition"<<endl;
              exit(1);  
        }
    }
    
        int pop1()
    {
        if (top1 >= 0 )
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        else
        {
            cout << "Stack UnderFlow";
            exit(1);
        }
    }

    int pop2()
    {
        if(top2<size){
            int y=arr[top2];
            top2++;
            return y;
        }
        else{
           cout << "Stack UnderFlow";
            exit(1);  
        }
    }



};
int main(){
 twostack ts(5);
    
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push2(7);
    
    cout << "Popped element from stack1 is " << ts.pop1();
    
    ts.push2(40);
    
    cout << "\nPopped element from stack2 is " << ts.pop2();
    
    return 0;
}

*/



// balance paranthesis...
/*
#include<bits/stdc++.h>
#include<string>
#include<stack>
using namespace std;
bool paircheck(char a, char b){
return ((a=='[' && b==']') || (a=='{' && b=='}')|| (a=='(' && b==')'));
}
bool balanced(string str){
    stack<char>s;
for(char x:str){
    if(x=='('||x=='{'|| x=='[')
{
    s.push(x);
}
else{
    if(s.empty()==true){
    return false;
    }
if(paircheck(s.top(),x)==false){
    return false;
}
else{
    s.pop();
}
}
}
return (s.empty()==true);
}
int main(){
string str="{([])}";
cout<<balanced(str)<<endl;
    return 0;
}
*/



// count span in stock : number of stock which is less then or equal to ith stock including itself..
/*
#include<bits/stdc++.h>
using namespace std;
void span(int arr[], int n){
    // brute force 
    // for(int i=0; i<n; i++){
    //     int span=1;
    //     for (int j = i-1; j>=0 && arr[j]<=arr[i]; j--)
    //     {
    //         span ++;
    //     }
    //     cout<<span<<endl;
    // }
    // efficient approach -> the idea behind neive approach is that span of current index is simply 
  //  equal to (current index - previous greater element index)  if there is no greater element in previous
  // then current index +1 will be the span of current element.
stack<int> s;
s.push(0);
cout<<1<<" ";
int a;
for(int i=1; i<n; i++){
    while (s.empty()==false && arr[s.top()]<=arr[i])
    {
        s.pop();
    }
   a= (s.empty()==false)? i-s.top():i+1;
   s.push(i);
   cout<<a<<" ";   
}

}
int main(){
int arr[]={2,3,7,5,8,9,3,5};
int n=sizeof(arr)/sizeof(arr[0]);
span(arr,n);
    return 0;
}
*/

// previous greater element...

// nieve...
/*
#include<iostream>
using namespace std;
void greaterElement(int arr[], int n){
    for(int i=1; i<n;i++){
      for(int j=i-1; j>=0; j--){
        if(arr[j]>arr[i]){
            cout<<"previous greater element of "<<arr[i]<<" is : "<<arr[j]<<endl;
            break;
        }
      }
    }
}
int main(){
int arr[]={2,3,7,5,8,9,3,5};
int n=sizeof(arr)/sizeof(arr[0]);
greaterElement(arr,n);
    
    return 0;
}
*/

// efficient approac..

/*
#include<bits/stdc++.h>
using namespace std;
void greaterElement(int arr[], int n){
    stack <int> s;
    s.push(0);cout<<-1<<endl;
    for(int i=1; i<n;i++){
         
         while(s.empty()==false && arr[s.top()]<= arr[i] ){
             s.pop();
         }
         if(s.empty()==false)
         cout<<"previous greater element of "<<arr[i]<<" is : "<<arr[s.top()]<<endl;
         else{
            cout<<-1<<endl;
         }
      s.push(i);

      }
}
int main(){
int arr[]={2,3,7,5,8,9,3,5};
int n=sizeof(arr)/sizeof(arr[0]);
greaterElement(arr,n);
    
    return 0;
}

*/

// next greater
/*
#include<bits/stdc++.h>
using namespace std;
void greaterElement(int arr[], int n){
    stack <int> s;
    s.push(n-1);
    for(int i=n-1; i>=0;i--){
         
         while(s.empty()==false && arr[s.top()]< arr[i] ){
             s.pop();
         }
         if(s.empty()==false)
         cout<<arr[s.top()]<<" is  the next greater element of : "<<arr[i]<<endl;
         else{
            cout<<arr[i]<<" has no greater element "<<endl;
         }
      s.push(i);
      }
}
int main(){
int arr[]={2,3,7,5,8,9,3,5};
int n=sizeof(arr)/sizeof(arr[0]);
greaterElement(arr,n);
    
    return 0;
}
*/

// Largest rectangular area in histogram...

// Naive solution: n^2;
/*
#include<bits/stdc++.h>
using namespace std;
void maxarea(int arr[], int n){
   int ans=0;
   for(int i=0; i<n;i++){
    int curr=arr[i];
    for(int j=i-1; j>=0 && arr[j]>=arr[i]; j--){
       curr+=arr[i];
    }
     for(int j=i+1; j<n && arr[j]>=arr[i]; j++){
       curr+=arr[i];
    }
    ans=max(ans,curr);
   }
   cout<<ans<<" ";
}
int main(){
int arr[]={2,3,7,5,8,9,3,5};
int n=sizeof(arr)/sizeof(arr[0]);
maxarea(arr,n);
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
void maxarea(int arr[],int n){
int lmin[n]={0};
int rmin[n]={0};
int res=0;
lmin[0]=-1;
stack<int>s1,s2;
s1.push(0);
for(int i=1; i<n; i++){
while(s1.empty()==false && arr[s1.top()]>=arr[i]){
    s1.pop();
}
lmin[i]= (s1.empty()==true)? -1:  s1.top();
s1.push(i);
}
for(int i=0; i<n; i++){
    cout<<lmin[i]<<" ";
}
cout<<endl;
rmin[n-1]=n;
s2.push(n-1);
for(int i=n-2; i>=0; i--){
    while(s2.empty()==false && arr[s2.top()]>=arr[i]){
        s2.pop();
    }
    rmin[i]=(s2.empty()==true)? n:  s2.top();
    s2.push(i);
}
for(int i=0; i<n; i++){
    cout<<rmin[i]<<" ";
}
cout<<endl;
for(int i=0; i<n; i++){
    int curr=arr[i];
    curr+= (i-lmin[i]-1)*arr[i];
    curr+=(rmin[i]-i-1)*arr[i];
    cout<<curr<<" ";
    res=max(res,curr);
}
cout<<endl;
cout<<res<<" ";
}
int main(){
int arr[]={2,3,7,5,8,9,3,5};
int n=sizeof(arr)/sizeof(arr[0]);
maxarea(arr,n);
    return 0;
}

*/

// best solution :- during pop we compute max histogram area for poping element
// jo element stack me bach gye hai iska matlab ye hai ki uske right me usse chhote ele present nhi hai..


/*
#include<bits/stdc++.h>
using namespace std;
void maxarea(int arr[], int n){
   int ans=0; int curr=0;
stack<int>st;
for(int i=0; i<n ;i++){
    while(!st.empty() && arr[st.top()]>=arr[i]){
        int t=st.top(); st.pop();
            curr= arr[t]*st.empty()==true? i: (i-st.top()-1));
            ans=max(ans,curr);
    }
    st.push(i);
}
while(!st.empty()){
      int t=st.top(); st.pop();
            curr= arr[t]*(st.empty()? n: (n-st.top()-1));
            ans=max(ans,curr);
}
   cout<<ans<<" ";
}
int main(){
// int arr[]={2,3,7,5,8,9,3,5};
int arr[]={60,20,50,40,10,50,60};
int n=sizeof(arr)/sizeof(arr[0]);
maxarea(arr,n);
return 0; 
}

*/

// largest area with all ones;
// the idea behind largest area with all ones is that we treate every row as a histogram problem
// and next row = next row + prev row..


// get min ele of stack with space complexity o(n)

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // code
// int n;
// cin>>n;
// stack<int>ori,temp;
// int k;
// string a;
// while(n--){
//     cin>>a;
// if(a=="pop"){
//     if(ori.top()==temp.top()){
//         ori.pop();
//         temp.pop();
//     }
//     else{
//         ori.pop();
//     }
// }
// if(a=="push"){
//    cin>>k;
//    if(temp.empty()==true) {
//     ori.push(k);
//     temp.push(k);
//    }
//    else if(temp.empty()==false && temp.top()>= k){
//        ori.push(k);
//     temp.push(k);
//    }
//    else{
//        ori.push(k);
//    }
// }
// if(a=="getmin"){
// cout<<temp.top()<<endl;
// }
// }
//     return 0;
// }

// efficient solution

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// stack<int>st;
// int minn=INT_MAX;
// int k;
// string a;
// while(n--){
//     cin>>a;
// if(a=="pop"){
//     if(st.top()<=minn){
//         minn=(2*minn)-st.top();
//         st.pop();
//     }
//     else{
//         st.pop();
//     }
// }
// if(a=="push"){
//    cin>>k;
//    if(minn==INT_MAX){
//      minn=k;
//      st.push(k);
//    }
//   else if(minn>=k){
//     st.push((2*k)-minn);
//     minn=k;
//    }
//    else{
//     st.push(k);
//    }
// }

// if(a=="getmin"){
// cout<<minn<<endl;
// }
// }
//     return 0;
// }




// prefix evaluation..

#include<bits/stdc++.h>
using namespace std;
void reverse(string& s){
    int n=s.size()-1;
    int i=0;
    while(n>=i){
        swap(s[i],s[n]);
        i++;
        n--;
    }
}
int prefix(string s){
    stack<int> st;
    string val="";
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]==' '){
            if(val.size()!=0){
                reverse(val);
                int p=stoi(val);
                cout<<p<<endl;
                st.push(p);
                val="";
            }
        }
        else if(s[i]>='0' && s[i]<='9'){
            val.push_back(s[i]);
        }
        else{
            int op1=st.top();
            st.pop();
            int op2= st.top();
            st.pop();
            switch(s[i]){
                case '+' : st.push(op1+op2);
                break;
                case '-' : st.push(op1-op2);
                break;
                case '*' : st.push(op1*op2);
                break;
                case '%' : st.push(op1%op2);
                break;
                case '^' : st.push(pow(op1,op2));
                break;
            }
        }
    }
    return st.top();
}
int main(){
    string s;
    getline(cin,s);
    map<string,char>mp;
    mp["zero"]= '0';
    mp["one"] = '1';
    mp["two"] = '2';
    mp["three"] = '3';
    mp["four"] = '4';
    mp["five"] = '5';
    mp["six"] = '6';
    mp["seven"] = '7';
    mp["eight"] = '8';
    mp["nine"] = '9';
    mp["mul"]='*';
    mp["add"]='+';
    mp["sub"]='-';
    mp["rem"]='%';
    mp["pow"]='^';
  cout<<prefix(s)<<endl;
    return 0;
}




//Postfix evaluetion
/*
#include<bits/stdc++.h>
using namespace std;
int postfix(string s){
    stack<int> st;
    cout<<"hii"<<endl;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
            // cout<<st.top()<<" ";
        }
        else{
            int op2=st.top();
            st.pop();
            int op1= st.top();
            st.pop();
            switch(s[i]){
                case '+' : st.push(op1+op2);
                break;
                case '-' : st.push(op1-op2);
                break;
                case '*' : st.push(op1*op2);
                break;
                case '/' : st.push(op1/op2);
                break;
                case '^' : st.push(op1^op2);
                break;
            }
        }
    }
    return st.top();
}
int main(){
    string str="62*9+";
  cout<<postfix(str)<<endl;
    return 0;
}
*/

//



// reverse string 
// find mid of stack or delete mid of stack
// insert at bottom of the stack
// reverse the stack
// sort the stack
// redundent bracket: push opening bracket and operator in the stack when face closing bracket check there's any operaton between ocb
// histogram 
// next/previous greater/smaller elements..
// celebrity problem
// max area ''matrix vala
// n stack



// // Template of Shivam Kumar
// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define n 1e5
// const int MAX=3e5+10;
// const int MOD=1e9+7;

// void fast(){
//     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// }

// // Implementation of Stack Using Array:
// class Stack{
//     public:
//     int top;
//     vector<int> arr;
//     Stack(){
//         vector<int> arr(n);
//         top=-1;
//     }
//     void push(int x){
//         if(top+1>INT_MAX){
//             cout<<"STACK OVERFLOW"<<endl;
//         }
//         top++;
//         arr[top]=x;
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"STACK UNDERFLOW"<<endl;
//         }
//         top--;
//     }
//     int Top(){
//         if(top==-1) {cout<<"STACK IS EMPTY"<<endl; return -1;}
//         return arr[top];
//     }
//     bool isempty(){
//         return top==-1;
//     }
// };

// // Implementation of Stack Using Queue:
// class StackUsingQueue{
//     queue<int> q1;
//     queue<int> q2;
//     public:
//     void push(int x){
//         q1.push(x);
//     }
//     void pop(){
//         if(q1.empty()){
//             cout<<"stack Underflow"<<endl;
//             return;
//         }
//         while(!q1.empty()){
//             int x= q1.front();
//             q1.pop();
//             if(!q1.empty())q2.push(x);
//         }
//         while(!q2.empty()){
//             q1.push(q2.front());
//             q2.pop();
//         }
//     }
//     int top(){
//         if(q1.empty())return -1;
//         int res=0;
//         while(!q1.empty()){
//             int x= q1.front();
//             q1.pop();
//             if(!q1.empty())q2.push(x);
//             else res=x;
//         }
//         while(!q2.empty()){
//             q1.push(q2.front());
//             q2.pop();
//         }
//         return res;
//     }
//     bool isEmpty(){
//         return q1.empty();
//     }
// };
// /*......................................................................*/
// // Algorithm 01: Reverse a string words wise:
// void reverseStr(string s){
//     stack<string> st;
//     for(int i=0;i<s.size();i++){
//         string temp="";
//         while(i<s.size()&&s[i]!=' '){
//             temp+=s[i];
//             i++;
//         }
//         st.push(temp);
//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }



// // Algorithm 02: Reverse a stack:
// void insertAtBottom(stack<int> &stk, int ele){
//     if(stk.empty()){
//         stk.push(ele);
//         return;
//     }
//     int topele=stk.top();
//     stk.pop();
//     insertAtBottom(stk,ele);
//     stk.push(topele);
// }

// void reverse(stack<int> &stk){
//     if(stk.empty()){
//         return;
//     }
//     int topele=stk.top();
//     stk.pop();
//     reverse(stk);
//     insertAtBottom(stk,topele);
// }

// // Algorithm 03: prefix evalution:
// int prefixExpressionEvaluation(string s){
//     stack<int> stk;
//     for(int i=s.size()-1;i>=0;i--){
//         if(s[i]>='0'&&s[i]<='9')stk.push(s[i]-'0');
//         else{
//             int op1=stk.top();
//             stk.pop();
//             int op2=stk.top();
//             stk.pop();
//             switch (s[i]){
//                 case '+' : stk.push(op1+op2);
//                             break;
//                 case '-' : stk.push(op1-op2);
//                             break;
//                 case '*' : stk.push(op1*op2);
//                             break;
//                 case '/' : stk.push(op1/op2);
//                             break;
//                 case '^' : stk.push(pow(op1,op2));
//                             break;
//             }
//         }
//     }
//     return stk.top();
// }

// // Algorithm 04: postfix evaluation:
// int postfixExpressionEvaluation(string s){
//     stack<int> stk;
//     for(int i=0;i<s.size();i++){
//         if(s[i]>='0'&&s[i]<='9')stk.push(s[i]-'0');
//         else{
//             int op2=stk.top();
//             stk.pop();
//             int op1=stk.top();
//             stk.pop();
//             switch (s[i]){
//                 case '+' : stk.push(op1+op2);
//                             break;
//                 case '-' : stk.push(op1-op2);
//                             break;
//                 case '*' : stk.push(op1*op2);
//                             break;
//                 case '/' : stk.push(op1/op2);
//                             break;
//                 case '^' : stk.push(pow(op1,op2));
//                             break;
//             }
//         }
//     }
//     return stk.top();
// }

// // Algorithm 05: infix to postfix :
// int prec(char c){
//     if(c=='^')return 3;
//     if(c=='/'||c=='*')return 2;
//     if(c=='-'||c=='+')return 1;
//     return -1;
// }
// string infixToPostfix(string s){
//     stack<char> stk;
//     string res="";
//     for(int i=0;i<s.size();i++){
//         if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&& s[i]<='Z')){
//             res+=s[i];
//         }
//         else if(s[i]=='('){
//             stk.push(s[i]);
//         }
//         else if(s[i]==')'){
//             while(!stk.empty()&&stk.top()!='('){
//                 res+=stk.top();
//                 stk.pop();
//             }
//             if(!stk.empty()){
//                 stk.pop();
//             }
//         }
//         else{
//             while(!stk.empty()&&prec(stk.top())>prec(s[i])){
//                 res+=stk.top();
//                 stk.pop();
//             }
//             stk.push(s[i]);
//         }
//     }
//     while(!stk.empty()){
//         res+=stk.top();
//         stk.pop();
//     }
//     return res;
// }

// // Algorithm 06: infix to prefix:

// string infixToPrefix(string s){
//     stack <char> stk;
//     string res="";
//     reverse(s.begin(),s.end());
//     for(int i=0;i<s.size();i++){
//         if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
//             res+=s[i];
//         }
//         else if(s[i]==')'){
//             stk.push(s[i]);
//         }
//         else if(s[i]=='('){
//             while(!stk.empty()&&stk.top()!=')'){
//                 res+=stk.top();
//                 stk.pop();
//             }
//             if(!stk.empty()){
//                 stk.pop();
//             }
//         }
//         else{
//             while(!stk.empty()&&prec(stk.top())>prec(s[i])){
//                 res+=stk.top();
//                 stk.pop();
//             }
//             stk.push(s[i]);
//         }
//     }
//     while(!stk.empty()){
//         res+=stk.top();
//         stk.pop();
//     }
//     reverse(res.begin(),res.end());
//     return res;
// }

// // Algorithm 07: valid parenthesis:
// bool validParenthesis(string s){
//     stack<char> stk;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='(' or s[i]=='{' or s[i]=='['){
//             stk.push(s[i]);
//         }
//         else if(!stk.empty() and s[i]==')'){
//             if(stk.top()!='(')return false;
//             else stk.pop();
//         }
//         else if(!stk.empty() and s[i]==']'){
//             if(stk.top()!='[')return false;
//             else stk.pop();
//         }
//         else if(!stk.empty() and s[i]=='}'){
//             if(stk.top()!='{')return false;
//             else stk.pop();
//         }
//     }
//     return true;
// }

// /*......................................................................*/
// void fun(){
//     // your code
// }
// /*......................................................................*/


// /*......................................................................*/
// int32_t main(){
//     fast();
//     string str="-+7*45+20";
//     string str2="46+2/5*7+";
//     cout<<prefixExpressionEvaluation(str)<<endl;
//     cout<<postfixExpressionEvaluation(str2)<<endl;
//     cout<<infixToPostfix("(a-(b/c))*((a/k)-l)")<<endl;
//     cout<<infixToPrefix("(a-(b/c))*((a/k)-l)")<<endl;
//     cout<<validParenthesis("{([)]}");
//     return 0;
// }


