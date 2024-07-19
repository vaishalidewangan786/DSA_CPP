#include<iostream>
using namespace std;
class Abase{
  public:
  virtual void funka(){
      cout<<"i am vaishali"<<endl;
  }

};
class Aderived:public Abase{
    public:
    void funka(){
   cout<<"dewangan"<<endl;}
};

int main(){
   
    Aderived d;
    Abase *Abaseptr = &d;
   Abaseptr -> funka();
    return 0;
}