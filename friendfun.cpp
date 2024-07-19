#include<iostream>
using namespace std;
class complex{
    int a,b;
    friend void sumcomplex(complex s1,complex s2);
    public:
    void setdata(int n1,int n2){
        a=n1;
        b=n2;
    }
    void getdata(){
        cout<<"The complex no is "<<a<<" + "<<b<<"i"<<endl;
    }
};
void sumcomplex(complex s1, complex s2){

    
    cout<<"The complex no is "<<s1.a+s2.a<<" + "<<s1.b+s2.b<<"i"<<endl;

}

int main(){
complex c1,c2,sum;
c1.setdata(2,4);
c1.getdata();
c2.setdata(1,0);
c2.getdata();
sumcomplex(c1,c2);
return 0;
}





