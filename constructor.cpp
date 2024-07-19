#include<iostream>
#include<cmath>//to operate some specific operation like to find square root etc.
using namespace std;
 class complex{
int a,b;//By defalt it is private data of complex class.
public:
friend double distance( complex,complex);
complex();//decleration of defalt constructor.
complex(int,int);//decleration of paramiterized constructor.
 void print(){
     cout<<a<<" + "<<b<<"i"<<endl;
  }
complex(complex &x)//copy constructor.
 {
    cout<<"copy constructor"<<endl;
      a=x.a;
      b=x.b;
 }
 ~complex(){
     cout<<"calling destructor"<<endl;
 };
 };
  complex::complex(){
     a=5;
     b=16;
     cout<<"defalt constructor"<<endl;
 }
 complex::complex(int x,int y){
     a=x;
     b=y;
     cout<<"perameterized constructor"<<endl;
 }
 
 double distance(complex p, complex q)// 
 {
     return sqrt(pow(p.a-q.a,2)+pow(p.b-q.b,2));
 }
 int main(){
  
  complex c(20,30);// object c will call paramiterized constructor.
  c.print();
  complex d(40,50);// object d will also call paramiterized constructor.
d.print();
complex e(c);
e.print();
complex f;
f.print();

double dis=distance(c,d);
cout<<dis<<endl; 
     return 0;
 }