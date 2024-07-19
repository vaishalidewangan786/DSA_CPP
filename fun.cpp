#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int sumrealcomplex(complex, complex);

    int sumimaginary(complex, complex);
};
class complex
{
    friend calculator::sumrealcomplex(complex c1, complex c2);
    friend calculator::sumimaginary(complex c1, complex c2);
   friend class calculator;
    int a, b;

public:
    void setnumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void Print()
    {
        cout << " the sum is " << a + b << endl;
    }
};

int calculator::sumrealcomplex(complex c1, complex c2)
{
    return (c1.a + c2.a);
}
int calculator::sumimaginary(complex c1, complex c2)
{
    return (c1.b + c2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(2, 3);
    o1.Print();
    o2.setnumber(1, 2);
    o2.Print();
    calculator a1;
    cout << a1.sumrealcomplex(o1, o2) << "+" << a1.sumimaginary(o1, o2)<<"i";

    return 0;
}