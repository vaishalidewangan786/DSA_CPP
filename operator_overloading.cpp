/*
#include<iostream>
using namespace std;
class Marks{
int intmark;
int extmark;
public:
Marks(){
    intmark=0;
    extmark=0;
}
Marks(int m1 , int m2){
    intmark= m1;
    extmark=m2;
}
void display(){
    cout<<intmark<<endl<<extmark<<endl;
}
Marks operator+(Marks m){
    Marks temp;
    temp.intmark= this->intmark+ m.intmark;
    temp.extmark= this->extmark + m.extmark;
    return temp;

}
Marks operator *(Marks m);
};   

Marks Marks :: operator*(Marks m){
   Marks temp;
    temp.intmark= this->intmark* m.intmark;
    temp.extmark= this->extmark* m.extmark;
    return temp;
}

int main(){
Marks m1(10,30), m2(20,40);
Marks m3 = m1+ m2;
Marks m4 = m2* m1;
m3.display();
m4.display();
    return 0;
}*/

#include <iostream>
using namespace std;
class Marks
{
    int intmark;

public:
    Marks()
    {
        intmark = 0;
    }
    Marks(int in)
    {
        intmark = in;
    }
    void display()
    {
        cout << "the marks is: " << intmark << endl;
    }
    void operator+=(int bons)
    {
        intmark = intmark + bons;
    }
    friend void operator-=(Marks &, int rud);

    Marks operator++()
    {
        intmark += 1;
        return intmark;
    }
    friend Marks operator --(Marks &);

};
Marks operator --(Marks & ob){
   ob.intmark-=1;
   return ob;
}
void operator-=(Marks &obj, int rud)
{
    obj.intmark = obj.intmark - rud;
}

int main()
{

    Marks m1(40);
    //m1.display();
    //m1.operator+=(5);
    //m1.display();
    //operator-=(m1,5);
    //m1.display();
    m1.display();
    m1 += 5;
    m1.display();
    m1 -= 5;
    m1.display();
    Marks m2(60);
    m2.display();
    m2 += 4;
    m2.display();
    m2 -= 4;
    m2.display();
   (++m1).display();
    (--m1).display();
   
    return 0;
}