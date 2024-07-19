//about static keyword...
// normally jb hm koi class k andar variable bnate h to agr us class ka ak se jyda object creat ho to every object k liye
//ak new variable separate variable hoga but when we want to share data between more than one object we use the static keyword
// static variable ki defalt value 0 hoti h//static variable ak bar hi bante h fir update hote rhte h.
// static variable ko class ke bahr likhte h but ye variable kisi perticular class se associated h ye btane ke liye
// ham     "data type  class_name :: name_of_variable" ise use krte h or class ke andar "static data_type variable_ka_nam"
/*The employee id
//before using static key word
enter the employee id
111
the  no. count is : 2 and id is :111
enter the employee id
112
the  no. count is : 2 and id is :112
enter the employee id
113
the  no. count is : 2 and id is :113

after using static key word
enter the employee id
111
the  no. count is : 1 and id is :111
the value of count is :1
enter the employee id
112
the  no. count is : 2 and id is :112
the value of count is :2
enter the employee id
113
the  no. count is : 3
*/
//we can clearly see that const variable ki updated value second object ko pass hui h
//static veriable ko class variable bhi khte h oops k aandar
// ab bari aati h static member fuction ki jo static variabl ko access krne ke kam aati h.
//static fun ko bina obeject creat hi run kiya ja skta khne ka mtlab ye h class ke nam se hi jaise yaha employee :: getcount
#include <iostream>

using namespace std;
class employee
{
 int id;
   
    int count = 1; // ye without using static variable k time declaration ke liye h
  // static int count; // uncomment krke static bnao or upr vale declaration ko *//* kro
public:
    void setdata()
    {
      cout << "enter the employee id"<<endl;
       int i;
       cin>>i;
       id=i;
      
        count++;
    }
    
    void getdata();             // forward declaration
    /*static void getcount(){                      //  static function      
    cout<<"the value of count is :"<<count<<endl;
    }
    */
};
//int employee:: count;                       // declaration
void employee ::getdata()
{
    cout << "the  no. count is : " << count << " and id is :" <<id<< endl;
}
int main()
{
  employee cd[3];
    cd[0].setdata();
    cd[0].getdata();
  //employee::getcount();
    cd[1].setdata();
    cd[1].getdata();
   //employee::getcount();
    cd[2].setdata();
    cd[2].getdata(); 
    //employee::getcount();
    return 0;
}