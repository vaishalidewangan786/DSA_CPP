//Runtime polymorphis
/*#include <iostream>
using namespace std;
class A{
    public:
    int valA;
    void display(){
        cout<<"valA is: "<<valA<<endl;
    }
};
class B:public A{
    public:
    int valB;
    void display(){
        cout<<"valB is:"<<valB<<endl;
    }
};

int main()
{
    A  *ptr;
    A objA;
    B objB;
    ptr =& objB;
    ptr->valA=5;
    ptr->display();
    B *ptrB;
   ptrB =& objB;
    ptrB->valB=72;
    ptrB->display();
    return 0;
}*/
//ydi koi base class ka pointer derived class ka address rakhata h or to koi aisa function jo dono me
//common (name same h) to base class ka function run hoga.
// pointer jis classs ko belong krta h usi class ka function run hoga.


//virtual function
//ydi koi base class ka pointer derived class ka address rakhata h or to koi aisa function jo dono me
//common (name same h) to base class ka function run hoga.
//is condition me jb fuction ko virtual kr diya jaye to us class ke function ko run kiua ja skta h jha pointer ko 
//point kiya gya tha.

/*#include <iostream>
using namespace std;
class A{
    public:
    int valA;
     void display(){
        cout<<"valA is: "<<valA<<endl;
    }
};
class B:public A{
    public:
    int valB;
    void display(){
        cout<<"valB is:"<<valB<<endl;
    }
};

int main()
{
  
    A  *ptr;
    A objA;
    B objB;
    ptr =& objB;
    ptr->valA=5;
    ptr->display();
    B *ptrB;
  ptrB =& objB;
    ptrB->valB=72;
    ptrB->display();
    ptr->display();
    return 0;
}*/

