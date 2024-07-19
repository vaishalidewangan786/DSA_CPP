//template simple
/*
#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d = (this->arr[i] * v.arr[i])+d;
        }
        return d;
    }
};
int main()
{
    vector<int> v1[3];
    v1.arr[0] = 5;
    v1.arr[1] = 2;
    v1.arr[2] = 1;
    vector<int> v2[3];
    v2.arr[0] = 1;
    v2.arr[1] = 1;
    v2.arr[2] = 3;
   cout<< v1.dotproduct(v2);
vector <double>v1[3];
    v1.arr[0] = 5.7;
    v1.arr[1] = 2.6;
    v1.arr[2] = 1.2;
    vector <double>v2[3];
    v2.arr[0] = 1.6;
    v2.arr[1] = 1.7;
    v2.arr[2] = 3.1;
   cout<< v1.dotproduct(v2);

    return 0;
}
*/
//template with 2 argument
/*
#include <iostream>
using namespace std;
template <class V1, class V2> // declaration of class template
class complex
{
public:
    V1 real;
    V2 imaginary;

    complex(V1 a, V2 b)
    {
        real = a;
        imaginary = b;
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
    void sum(complex<int, int> a, complex<float, float> b)
    {
        cout << "the sum of both complex no is : " << a.real + b.real << " + " << a.imaginary + b.imaginary << "i" << endl;
    }
};

int main()
{
    complex<int, int> obj1(2, 4);
    obj1.display();
    complex<float, float> obj2(3.3, 5.6);
    obj2.display();
    obj2.sum(obj1, obj2);

    return 0;
}
2 + 4i
3.3 + 5.6i
the sum of both complex no is : 5.3 + 9.6i

//template with default data type

/*
 #include <iostream>
using namespace std;
template<class V1=int , class V2=double,class V3=char>
class learn{
    V1 a;
    V2 b;
    V3 c;
    public:
    learn(V1 x, V2 y, V3 z){
        a=x;
        b=y;
        c=z;
    }
  void  display(){
      cout<<"The vlaue of a,b,and c are:"<<endl
      <<a<<endl<<b<<endl<<c<<endl;
  }

};
*/
#include <iostream>
using namespace std;
template<class T1,class T2>
class sum{
  public:
  T1 a;
  T1 b;
  sum(T1 n, T2 m){
      a=n;
      b=m;
  }
  void display(sum<int,float> ob,sum<float,int>ob1){
     cout<<ob.a+ob1.a<<" "<<ob.b+ob1.b<<endl;
  }
};

int main()
{
    sum<int,int> ab(1,5.9);
    sum<float,int> ab1(1.8,4);
    
   ab.display(ab,ab1);

 return 0;
}