// #include<bits/stdc++.h>
// using namespace std;

// struct qu{
// int f,r, int cap;
// int *arr;
// qu(int c){
//  cap=c;
//  f=-1;
//  r=-1;
//  arr= new int[cap];
// void enqueue(int x){
//  if (r>=cap){
//      cout<<"INSERTION NOT POSSIBLE "<<endl;
//  }
//  else if(r==-1 && f==-1){
//      r=0; f=0;
//  }
//  else{
//      r++;
//      arr[r]=x;
//  }

// }
// void dequeue(){
// if(f>r || f==-1){
//     cout<<"DELETION NOT POSSIBLE "<<endl;
// }
// else{
// f++;
// }
// }
// void size(){
//     cout<<"The size is : "<<size<<endl;
// }
// bool isempty(){

// }
// int getfront(){

// }
// int getrear(){

// }
// };
// int main(){


//     return 0;
// }


//Queue Data Structure...


//Implementaion of queue using array...

// function like enquequ , queue , getfront(), getrear(), isfull(), isempty()...

/*
#include<bits/stdc++.h>
using namespace std;
class queuee{
public:
int size,cap;
int *arr;
queuee(int c){
    cap=c;
    size=0;
    arr=new int[cap];
}
void enqueue(int x){
if(isfull()){
    cout<<"queue is full" <<endl;
    return;
}
else{
    arr[size]=x;
    size++;
}
}

void dequeue(){
if(isempty()){
    return;
}
else{
    for(int i=0; i<size-1; i++){
        arr[i]= arr[i+1];
       
    }
     size--;
}
}

int getfront(){
    if(isempty()){
        return -1;
    }
    else
return(0);
}
int getrear(){
if(isfull()){
    return -1;
}
else{
    return size-1;
}
}
int sizee(){
  return size;
}
bool isfull(){
return (size==cap);
}
bool isempty(){
return (size==0);

}

};
int main(){
queuee q(6);
q.dequequ();q.enquequ( 10);
q.enquequ(20);
cout<<q.getfront()<<endl;
cout<<q.getrear()<<endl;
cout<<q.sizee()<<endl;
cout<<q.isfull()<<endl;
q.enquequ(30);
q.enquequ(40);
cout<<q.getrear()<<endl;
cout<<q.sizee()<<endl;
cout<<q.isfull()<<endl;
q.enquequ(30);
q.enquequ(40);
cout<<q.getrear()<<endl;
cout<<q.sizee()<<endl;
cout<<q.isfull()<<endl;
    return 0;
}
*/

// The above implementation take o(n) time to operate dequeue function...
// to perform all queue operation in o(1) we use circular array...

// efficient solution...


/*
#include<bits/stdc++.h>
using namespace std;
class qu{
public:
int size;
int cap;
int front;
int *arr;
qu(int c){
    cap=c;
    front=0;
    size=0;
    arr= new int[c];
}

void enquequ(int x){
if(isfull()){
    cout<<"queue is full" <<endl;
    return;
}
else{
   int rear=getrear();
   rear=(rear+1)%cap;
   arr[rear]=x;
   size++;
}
}

void dequequ(){
if(isempty()){
    return;
}
else{
    front=(front+1)%cap;
     size--;
}
}

int getfront(){
    if(isempty()){
        return -1;
    }
    else
return front;
}


int getrear(){
if(isfull()){
    return -1;
}
else{
    return (front+size-1)%cap;
}
}

int sizee(){
  return size;
}

bool isfull(){
return (size==cap);
}

bool isempty(){
return (size==0);
}


};
int main(){
qu q(6);
q.dequequ();q.enquequ( 10);
q.enquequ(20);
cout<<q.getfront()<<endl;
cout<<q.getrear()<<endl;
cout<<q.sizee()<<endl;
cout<<q.isfull()<<endl;
q.enquequ(30);
q.enquequ(40);

cout<<q.getrear()<<endl;
cout<<q.sizee()<<endl;
cout<<q.isfull()<<endl;
q.dequequ();q.dequequ();q.dequequ();q.dequequ();
cout<<q.getrear()<<endl;
cout<<q.sizee()<<endl;
cout<<q.isfull()<<endl;
cout<<q.isempty()<<endl;


    return 0;
}
*/


// Implementation of stack using queue...
/*
#include<bits/stdc++.h>
using namespace std;
struct stackk{
int currsize;
stackk(){
    currsize=0;
}
queue<int>q1,q2;

int top(){
   return q1.front();
}

int size(){
   return currsize;
}

bool isempty(){
    return (q1.empty());
}

void pop(){
    if(q1.empty()==true){
        return;
    }
    q1.pop();
    currsize--;
}

void push(int x){
    currsize++;
    while(q1.empty()==false){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(x);
    while(q2.empty()==false){
        q1.push(q2.front());
        q2.pop();
    }
}

};
 
 int main(){
 
stackk a;
a.push(1);
a.push(2);
a.push(3);
a.push(6);

while(a.isempty()==false){
    cout<<a.top()<<" "<<a.size()<<endl;
    a.pop();
}
    return 0;
 }
 */

// Reverse a queue;

//Method 1 : iterative method..
/*
#include<bits/stdc++.h>
using namespace std;
class qu{
public:
int size;
int cap;
int front;
int *arr;
qu(int c){
    cap=c;
    front=0;
    size=0;
    arr= new int[c];
}

void enquequ(int x){
if(isfull()){
    cout<<"queue is full" <<endl;
    return;
}
else{
   int rear=getrear();
   rear=(rear+1)%cap;
   arr[rear]=x;
   size++;
}
}

void dequequ(){
if(isempty()){
    return;
}
else{
    front=(front+1)%cap;
     size--;
}
}

int getfront(){
    if(isempty()){
        return -1;
    }
    else
return front;
}




int getrear(){
if(isfull()){
    return -1;
}
else{
    return (front+size-1)%cap;
}
}



int sizee(){
  return size;
}

bool isfull(){
return (size==cap);
}

bool isempty(){
return (size==0);
}


};
void reverse(qu & q){
    stack<int> s;
    while(q.isempty()==false){
    s.push(q.getfront());
    q.dequequ();}
    while(s.empty()==false){
        q.enquequ(s.top());
        s.pop();
    }

}
int main(){
qu q(5);
q.enquequ(100);
q.enquequ(50);
q.enquequ(30);
q.enquequ(20);
q.enquequ(5);
reverse(q);
while(q.isempty()==false){
 
    cout<<q.getfront()<<" ";
    q.dequequ();
}
cout<<endl;




    return 0;
}


*/
//Generate numbers with given digits

// #include<bits/stdc++.h>
// using namespace std;
// void cal(int n){
//     queue<int>q;
//     q.push(5);
//     q.push(6);
//     for(int i=0; i<n; i++){
//         int s=q.front();
//         cout<<s<<" ";
//         q.pop();
//         q.push(s*10+5);
//         q.push(s*10+6);
//     }
// }
// int main(){
// int n;
// cin>>n;

// cal(n);

//     return 0;
// }
