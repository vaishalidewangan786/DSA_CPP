/*#include<iostream>
using namespace std;
class Student{
    protected:
    int roll_num;
    public:
    void setnum(int a){
        roll_num=a;
    }
    void getnum(){
        cout<<"The roll number is :"<<roll_num<<endl;
    }
};
class Test: virtual public Student{
    protected:
    float physics;
    float math;
    public:
    void set_mark(float a, float b){
        physics=a;
        math= b;
    }
    void get_mark(){
        cout<<"Mark in phy and math are respectively : "<<physics<<" , "<<math<<endl;
    }
};

class Sport : virtual public Student{
    protected :
    int Pt;
    public:
    void set_score(int p){
        Pt=p;
    }
    void get_score(){
        cout<<"The score in pt : "<<Pt<<endl;
    }
};
class total : public Test, public Sport{
    public:
    float totalmark;
    void tmark(){
    totalmark = physics + math + Pt;
    }
    void get_result(){
        getnum();
        get_mark();
        get_score();
        cout<<"The total mark is : "<<totalmark<<endl;
    }
};
int main(){
        total vaishali;
        vaishali.setnum(102);
        vaishali.set_mark(9.5,9.4);
        vaishali.set_score(8);
        vaishali.tmark();
        vaishali.get_result();
    return 0;
}*/


//constructor in derived class

#include <iostream>
using namespace std;
class Base1{
    int data1;
    public:
    Base1(int a){
        data1=a;
        cout<<"Base1 constructor called"<<endl;
    }
    void printdata1(){
        cout<<"data1 is : "<<data1<<endl;
    }
};
class Base2 {
    int data2;
    public:
    Base2(int b){
    data2=b;
    cout<<"Base2 constructor called"<<endl;
    }
    void printdata2(){
        cout<<"data2 is : "<<data2<<endl;
    }
};
class derived : public Base1, public Base2{
    int derived1, derived2;
    public:
    derived(int a, int b ,int c ,int d): Base1(a), Base2(b){
        derived1=c;
        derived2=d;
        cout<<"derived constructor called"<<endl;
    }
    void printderived (){
        printdata1();
        printdata2();
        cout<<"derived1 is : "<<derived1<<endl;
        cout<<"derived2 is : "<<derived2<<endl;
    }
};

int main(){
    derived o(1,4,7,9);
    o.printderived();

    return 0;
}