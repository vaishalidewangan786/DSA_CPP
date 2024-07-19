
#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void print(){
        cout <<a<<" + "<<b<<"i";
    }
    iota(void);
};
complex::iota(void){
    a=10;
    b=20;
}
int main(){

complex c;
c.print();

    return 0;
}