/*
#include<iostream>
using namespace std;
class employee {
   int id;
   public:
     
    float salary;
    employee(){}
    
    employee(int a){

        id =a;
        salary=20.5;
    }
    int getid(int idd){
        id=idd;
        return id;
    }
};
class manager : public employee{
    public:
    int code = 8;
    manager(){
       
        salary=22.5;
    }
    
    
    
};
int main(){
 employee e1(5), e2(7);
 cout<<e1.salary<<endl;
cout<<e2.salary<<endl;
manager m1;
cout<<m1.code<<endl;

cout<<m1.getid(12)<<endl;
cout<<m1.salary;
    return 0;
}*/



/*#include <iostream>
using namespace std;
class base//declaration of base class 
{
    int data1;// a private data of base class.

public:
    int data2; // A public data of base class.
    void setdata();// public function which sets the value of data1 and data2.
    int getdata1();// function which returns data1.
    int getdata2();//function which returns data2.
};
void base::setdata()//setting the data.
{
    data1 = 5;
    data2 = 6;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}
class derived : base// declaretion of derived class from base class which put publically... 
//...defind data and function in itself by by defalt private manner    .
{
    int data3;//privatly declared data.

public:
    void setdata3();
    
   void display()
    {
        cout << " Value of data1 is : " << getdata1() << endl;
        cout << " Value of data2 is : " << data2 << endl;
        cout << " Value of data3 is : " << data3 << endl;
    }
};
void derived::setdata3()
{
    setdata();
    data3 = data2 + getdata1(); //here data2 is private in derived class so we can not access this directlly,
    // but jb ham setdata jo data2 ka access rkhata h usko include kr le to data2 ko by name access kr skte h.
}
int main()
{
    derived a;

    a.setdata3();
    a.display();
    return 0;
}*/


// multilevel inheritance

// #include<iostream>
// using namespace std;
// class student{
//     protected:
//    int roll_number=5;
//    public:
//    void set_roll_number(int );
//    void get_roll_number();
// };
// void student::set_roll_number(int r){
//     roll_number= r;
// }
// void student::get_roll_number(){
//     cout<<"The roll nu is: "<<roll_number<<endl;
// }
// class subject :public student{
//     protected:
//   float phy_mark;
//   float math_mark;
//   public:
//   void set_mark(float a, float b){
//       phy_mark=a;
//       math_mark=b;
//   }
//   void get_mark(){
//       cout<<"the no in phy and math are respectively : "<<phy_mark<<" , "<<math_mark<<endl;
//   }
// };
// class result: public subject{
//     float percent;
//     public:
//     void display_result (){
//         get_roll_number();
//         get_mark();
//         cout<<" the percent is: "<<(phy_mark+math_mark)/2<<"%"<<endl;
//     }
    
// };
//  int main(){
//      result vaishu;
//      vaishu.set_roll_number(20120102);
//      vaishu.set_mark( 93.8, 92.2);

   
//      vaishu.display_result();
    
//      return 0;
//  }

//  //multiple inheritence
//  #include<iostream>
//  using namespace std;
// class base1{
//     protected:
//     int data1;
//     public:
//    void setdata1(int n){
//       data1=n;
//    }
//    void getdata1(){
//        cout <<"The data1 is :"<<data1<<endl;
//    }
// };
// class base2{
//     protected:
//   int  data2;
//   public:
//   void setdata2(int m){
//       data2=m;
//   }
//   void getdata2(){
//       cout<<"The data2 is :"<<data2<<endl;
//   }
// };
// class derived: public base1, public base2{
//     protected:
//    int data3;
//    public:
//    void setdata3(){
//        data3= 12;

//    }
//    void show(){
//        getdata1();
//        getdata2();
//        setdata3();
//        cout<<"The data3 is :"<<data3<<endl;
//    }
// };
//  int main(){
//   derived obj;
//   obj.setdata1(4);
//   obj.setdata2(7);
//   obj.show();

//      return 0;
//  }



#include<bits/stdc++.h>
using namespace std;
class Student{
public:
int id;
string name;
Student(){}
void setdetails(int id,string name){
    this->id=id;
    this->name=name;
}
Student (Student &ob){
id=ob.id;
name=ob.name;
}
};
int main(){
Student s1,s2;

s1.setdetails(1,"vaishali dewangan");
s2.setdetails(1,"heya dewangan");
Student s3(s2);
cout<<s1.name<<" "<<s2.name<<" "<<s3.name<<endl;
    return 0;
}