// question 1
/*
#include<iostream>
using namespace std;
class book{
    string title;
    string author_name;
    float price;
  public:
    book(){}
    book(string t_name ,string author, float price ){
        title=t_name;
        author_name=author;
        this->price=price;
    }
    book(book &obj){}
   void display(){
       cout<<" the title name :"<<title<<endl;
       cout<<" the author is: "<<author_name<<endl;
       cout<<" price is :"<<price<<endl;
   }
};
int main()
{
book* ptr = new book("eat that frog","Brane tracy",250.00);

ptr->display();
    return 0;
}
 the title name :eat that frog
 the author is: Brane tracy
 price is :250
*/
//2.
/*
#include<iostream>
using namespace std;
class Alpha;
class Beta{
    float B;
    public:
   Beta(float b){
        B=b;
    }
    friend void Sum(Alpha , Beta  );
};
 class Alpha{
  float A;
  public:
  Alpha(float a){
      A=a;
  }
 friend void Sum(Alpha , Beta  );
};
void Sum(Alpha obja, Beta objb){
     cout<< "The sum is : "<<obja.A+objb.B<<endl;
}
int main()
{
  float a,b; 
  cout<<"Enter the value for class alpha object : " <<endl;
  cin>>a;
  Alpha obj1(a);
   cout<<"Enter the value for class beta object : " <<endl;
  cin>>b;
  Beta obj2(b);
  Sum(obj1,obj2);
    return 0;
}
Enter the value for class alpha object :
2.2
Enter the value for class beta object :
3.4
The sum is : 5.6*/

//question 3
/*
#include <iostream>

using namespace std;
class sample
{
   static int count;//static variable initialization
public:
    void setdata()
    {
        count++;
    }
    void getdata();
   int result(){
       return count;
   }
};
int sample:: count;
void sample ::getdata()
{
    cout << "the value of count is " << count << " for object "<<count<< endl;
}

int main()
{
    int n;
    cout<<"Enter the number of object "<<endl;
    cin>>n;
    sample cd[n];
    for(int i=0; i<n; i++){
      
    cd[i].setdata();
    cd[i].getdata();
    }
    
    cout<< "So the no of created object is: "<<cd[n-1].result()<<endl;
   
    
 
    return 0;
}
Enter the number of object
5
the value of count is 1 for object 1
the value of count is 2 for object 2
the value of count is 3 for object 3
the value of count is 4 for object 4
the value of count is 5 for object 5
So the no of created object is: 5
*/
//4
/*
#include <iostream>
using namespace std;
class complex
{
    int real;
    int imaginary;

public:
    complex()
    {
        real = 0;
        imaginary = 0;
    }
    complex(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    complex operator+(complex ob)
    {
        complex T;
        T.real = this->real + ob.real;
        T.imaginary = this->imaginary + ob.imaginary;
        return T;
    }
    complex operator*(complex ob)
    {
        complex T;
        T.real = this->real * ob.real;
        T.imaginary = this->imaginary * ob.imaginary;
        return T;
    }
    void display_sum()
    {
        cout << "sum of both complex no : " << real << (imaginary < 0 ? "" : " + ") << imaginary << "i" << endl;
    }
    void display_multip()
    {
        cout << "multiplication of both complex is : " << real << (imaginary < 0 ? "" : " + ") << imaginary << "i" << endl;
    }
};

int main()
{
    int x, y;
    cout << " enter the x and y coordinate of imaginary no for object 1:" << endl;
    cin >> x >> y;
    complex obj1(x, y);
    cout << " enter the x and y coordinate of imaginary no for object 2:" << endl;
    cin >> x >> y;
    complex obj2(x, y);
    complex obj3 = obj1 + obj2;
    complex obj4 = obj1 * obj2;
    obj3.display_sum();
    obj4.display_multip();
    return 0;
}
 enter the x and y coordinate of imaginary no for object 1:
-1 6
 enter the x and y coordinate of imaginary no for object 2:
3 -2
sum of both complex no : 2 + 4i
multiplication of both complex is : -3-12i*/
//5
/*
#include<iostream>
using namespace std;
int factorial(int);
class Base{
protected:
int data;
public:
Base();
Base(int val){
    data=val;
}
void display(){
    cout <<" factorial is :"<<factorial(data)<<endl;
}
};
class Derived : public Base{
    public:
int factorial(data){
    if(data==1){
        return 1;
    }
    return data* factorial(data-1);
    
}
void display(){
    cout <<" factorial is :"<<factorial(data)<<endl;
}
};

int main(){
    Base obj1(5);
    Derived obj2;
    obj2.display();

    return 0;
}*/
//8
/*
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    string s1;
    string s2;
    cout<<"Wright information to file"<<endl;
    getline(cin,s1);
    ofstream out("text_file.txt");//opening a file using constructor.
    out<<s1;
     out.close();//closing the file.
    ifstream in("text_file.txt");

    getline(in,s2);
    cout<<s2<<endl;
    cout<<"number of charector is: "<<s2.size()<<endl;
    return 0;
}
Wright information to file
hii i am a student of NIT Raipur.
hii i am a student of NIT Raipur.
number of charector is: 33
*/
//6
/*
#include <iostream>
#include <math.h>
using namespace std;
class Two_dimension
{
public:
    float x;
    float y;

public:
    Two_dimension(float a = 0, float b = 0)
    {
        x = a;
        y = b;
    }
    float distance(Two_dimension a, Two_dimension b)
    {
        float p;
        p = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
        return p;
    }
};
class Three_dimension : public Two_dimension
{
    float z;

public:
    Three_dimension()
    {
        x = 0;
        y = 0;
        z = 0;
    }
    Three_dimension(int a = 0, int b = 0, int c = 0)
    {
        x = a;
        y = b;
        z = c;
    }
    double distance(Three_dimension p1, Three_dimension p2)
    {
        return sqrt((pow((p1.x - p2.x), 2)) + pow((p1.y - p2.y), 2) + (pow((p1.z - p2.z), 2)));
    }
};

int main()
{
    int x, y, z;
    cout << "Enter x and y co-ordinate of 2-D point 1" << endl;
    cin >> x >> y;
    Two_dimension obj1(x, y);
    cout << "Enter x and y co-ordinate of 2-D point 2" << endl;
    cin >> x >> y;
    Two_dimension obj2(x, y);
    cout << "Enter x, y and z co-ordinate of 3-D point 1" << endl;
    cin >> x >> y >> z;
    Three_dimension ob1(x, y, z);
    cout << "Enter x, y and z co-ordinate of 3-D point 2" << endl;
    cin >> x >> y >> z;
    Three_dimension ob2(x, y, z);
    cout << "the distance between two 2-D points : " << obj1.distance(obj1, obj2) << endl;
    cout << "the distance between two 3-D points : " << ob1.distance(ob1, ob2) << endl;
}
Enter x and y co-ordinate of 2-D point 1
2 3
Enter x and y co-ordinate of 2-D point 2
4 5
Enter x, y and z co-ordinate of 3-D point 1
1 2 3
Enter x, y and z co-ordinate of 3-D point 2
3 4 5
the distance between two 2-D points : 2.82843
the distance between two 3-D points : 3.4641
*/
/*
#include <iostream>
using namespace std;
class Base
{
 // declaration protected member
protected:
int data; 
public:
 void display()
 {
 cout << "The number in the Base Class is " <<data << endl;
 }
};
class Derived : public Base
{
public:
 Derived(int n)
 {
 data = n;
 }
 // overriding of display function;
 void display()
 {
 cout << "The number in the derived class is " << data << endl;
 }
 int factorial(int data){
    if(data==1){
        return 1;
    }
    return data* factorial(data-1);
    
}

};
int main()
{
 int n;
 cout << "Enter the Number : " << endl;
 cin >> n;
 Derived obj(n);
 obj.display();
 cout << "The Factorial is " << obj.factorial(n) << endl;
 return 0;
} 
Enter the Number :
5
The number in the derived class is 5
The Factorial is 120
*/
# include<iostream>
using namespace std;
class Person{
    public:
    string name ;
    int age;
    string gender;
Person()
 {
 name = "";
 age = 0;
 gender = ' ';
 } 
 void person_details(){
 cout<<"Enter the name of the person : "<<endl;
 cin>>name;
 cout<<"Enter the age of the person : "<<endl;
 cin>>age;
 cout<<"Enter the gender : "<<endl;
 cin>>gender;
 }
};
class Student : public Person{
public:
int roll_num;
string college_name;
string branch;
char section;
void student_details(){
 person_details();
cout<<"Enter the roll number : "<<endl;
cin>>roll_num;
cout<<"Enter the college name : "<<endl;
cin>>college_name;
cout<<"Enter the brance : "<<endl;
cin>>branch;
cout<<"Enter the section : "<<endl;
cin>>section;
}
void show_student_details(){
    cout<<"Student details :"<<endl;
    cout<<"Name is : "<<name<<endl<<"Age is : "<<age<<endl<<"Gender is : "
    <<gender<<endl<<"roll number is : "<<roll_num<<endl<<"college name : "<<college_name<<endl<<"branch is : "<<branch
    <<endl<<"section is : "<<section<<endl;
    
}
};
class Employee : public Person{
public:
string Department;
float salary;
void employee_details(){
    person_details();
    cout<<"Enter department of employee : "<<endl;
    cin>>Department;
    cout<<"Enter salary of employee : "<<endl;
    cin>>salary;
}
void show_emplyee_details(){

    cout<<"Employee details : "<<endl;
    cout<<"Name is : "<<name<<endl<<"Age is : "<<age<<endl<<"Gender is : "<<gender<<endl<<"Department is : "<<
    Department<<endl<<"salary is : "<<salary<<endl;
}
};
int main()
{
 int s, e;
 cout << "Enter the number of students entry " << endl;
 cin >> s;
 cout << "Enter the number of employees entry " << endl;
 cin >> e;
 Student *obj1[s];
 Employee *obj2[e]; 
 cout << "ENTER THE STUDENTS DETAILS " << endl;
 for (int i = 0; i < s; i++)
 {
 obj1[i]=new Student();
 obj1[i]->student_details();
 } 
 cout << endl;
 cout << "ENTER EMPLOYEE DETAILS" << endl;
 for (int i = 0; i < e; i++)
 {
 obj2[i]=new Employee();
 obj2[i]->employee_details();
 }
 cout << endl;
 cout << endl;
 cout << "STUDENTS DETAILS " << endl;
 for (int i = 0; i < s; i++)
 {
 obj1[i]->show_student_details();
 }
 cout << endl;
 cout << "EMPLOYEE DETAILS " << endl;
 for (int i = 0; i < e; i++)
 {
 obj2[i]->show_emplyee_details();
 }
    return 0;
}
Enter the number of students entry
1
Enter the number of employees entry
1
ENTER THE STUDENTS DETAILS
Enter the name of the person :
vaishali
Enter the age of the person :
19
Enter the gender :
female
Enter the roll number :
20120102
Enter the college name :
NIT_Raipur
Enter the brance :
MME
Enter the section :
L

ENTER EMPLOYEE DETAILS
Enter the name of the person :
vaishali
Enter the age of the person :
19
Enter the gender :
female
Enter department of employee :
MME
Enter salary of employee :
2500000


STUDENTS DETAILS
Student details :
Name is : vaishali
Age is : 19
Gender is : female
roll number is : 20120102
college name : NIT_Raipur
branch is : MME
section is : L

EMPLOYEE DETAILS
Employee details :
Name is : vaishali
Age is : 19
Gender is : female
Department is : MME
salary is : 2.5e+006