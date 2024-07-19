#include <iostream>
using namespace std;

int main(){
int b;
cout<< " enter the number of day in any month:"<<endl;
cin>>b;

try{
    if(b>=28 && b<=31){
        cout<<"you enterd : "<<b<<" which is 'valid' no. of day in a month."<< endl;
    }
    if (b<28 ||b>31){
    throw b;
    }
}
catch(int x ){
    cout <<"you enterd : "<<x<<" which is 'invalid' no of day in a month."<< endl;
}

    return 0;
}








/*
#include <iostream>
using namespace std;
const int MAX=3;
class full{};
class empty{};
class stack {
int st[MAX];
int top;
public:
stack(){
    top=-1;
}
 void push(int var){
     if (top>=MAX-1){
         throw full();
         st[++top]=var;
     }
 }
 int pop(){
     if(top<0)
     throw empty();
     return st[top--];
 }
};
int main(){
    stack s1;
    try {
        s1.push(11);
        s1.push(22);
        s1.push(33);
        //s1.pust(44);
    
    cout<<"1: "<<s1.pop()<<endl;
    cout<<"2: "<<s1.pop()<<endl;
    cout<<"3: "<<s1.pop()<<endl;
    }
    catch(full e){
        cout<<"exception: stack full"<<endl;
    }
    catch (empty e){
        cout<<"Exception : stack empty"<<endl;
    }
    return 0;}
    */
 enter the number of day in any month:
20
you enterd : 20 which is 'invalid' no of day in a month.
 
you enterd : 30 which is 'valid' no. of day in a month.

you enterd : 31 which is 'valid' no. of day in a month.