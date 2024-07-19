/*#include <iostream>
#include<string>
using namespace std;
class binary{
    public :
    string s;
    void read (void);
    void check(void);
    void change(void);
    
};
void binary::read(void){
cout <<"enter a binary number : "<<endl;
getline (cin,s);
}
void binary::check(void){
    for (int i =0; i<s.length() ; i++){
        if (s.at(i)!='0' &&  s.at(i)!='1'){
            cout<<"not birany number "<<endl;
            exit(0);
        }
        else {
            cout <<"binary number "<<endl;
        }
    }

}

int main(){
    binary num;
    num.read();
    num.check();
    
    return 0;
}
*/
//recursion
/*
#include <iostream>
using namespace std;

int fabonachi(int n1, int n2){
if (n==1){
    return 1;
} 
n
  return n1factorial(n-1);
}
int main(){
int n=0,m=1;

cout<<fabonachi(n,m);


    return 0;
}
*/

// #include <iostream>
// using namespace std;
// int check_first(int arr[] , int n,int size, int num){
// if(n==size){
//     return -1;
// }
// if(arr[n]==num){
//     return n;
  
// }
// return check_first (arr,n+1,7,num);
// }
// int check_last (int arr[], int n, int size , int num){
//     if (n==0){
//         return -1;
//     }
//     if (arr[n]==num){
//         return n;
//     }
//     return check_last(arr,n-1,6,4);
// }
    

// int main(){

//     int arr[]= {1,5,4,6,4,7,4,8};
//     cout<<check_first(arr,0,7,4)<<endl;
//     cout<<check_last(arr,6,7,4);
//     return 0;
// }

// making subset of given string....

#include<bits/stdc++.h>
#include<string>
using namespace std;
void subsec(string &s1 , string& s2, int i){
 if(i==s1.length()){
     cout<<s1<<" ";
 }
  subsec(s1,s2,i+1);
  s1.pop_back();
  s1=s1+s2[i];
 subsec(s1,s2,i+1);
 s1.pop_back();

}
int main()
{  
 string str;
 getline(cin,str);
 string s="";
 subsec(s,str,0);
    return 0;
}
