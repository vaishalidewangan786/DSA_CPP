#include<bits/stdc++.h>
using namespace std;
// ax + by = gcd(a,b);
int g ,x,y;
void ec (int a , int b){
    if(b==0){
        x=1;
        y=0;
        g=a;
    }
   else{
       ec(b, a%b);
       int temp = x;
       x=y;
       y= temp - (a/b)*y;
   }
}
int main()
{
 ec(12,5);
 cout<<" gcd is "<<g<<endl<<" the value of x and y is "<<x<<" "<<y<<endl;


    return 0;
}

//to check whether the number is power of 2;

// #include <iostream>
// using namespace std;
// void check(int a){
//     if((a & (a-1))==0){
//       cout<<"true"<<endl;
//     }
//     else {
//     cout<<"false"<<endl;
//     }
// }
// int main()
// {
// int a;
// cin>> a;
// check(a);
//     return 0;
// }


//  to count number of 1 in binary representation...

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cin>>a;
//     int count =0;
//     while(a){
//         a= (a &(a-1));
//         count++;
//     }
//     cout<<count<<endl;
//     return 0;
// }

// to check ith num is o or 1;

// #include<iostream>
// using namespace std;
// bool check(int a, int n){
//     if((a & (1<<n)))
//     {
//        return true;
//     }
//     else
//         return false ;
    
// }
// int main()
// {
//     int a;
//     cin>>a;

//     cout<<"num where u want to know : "<<endl;
//     int n;
//     cin>>n;
//   cout<<check(a,n)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void check(int arr[], int n){
//  int x=0,y=0;
//   for(int i=0; i<n; i++){
//     x=x^arr[i];
//   }
//   int pos;
//   pos = (x & (-x));
//   for(int i=0; i<n; i++){
//     if((arr[i] & (pos))==0){
//       x=x^arr[i];
//     }
//     else{
//       y=y^arr[i];
//     }
//   }
//   cout<<" x and y are "<<x<<" "<<y<<endl;
// }
// int main(){
// int arr[8]={1,4,5,7,5,4,6,1};

// check(arr,8);
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// cout<<(n&(-n))<<endl;
// return 0;
// }
      

// And Or Xor operation...
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int a=5;// 000101
int b=3; //000011
// cout<<"AND of "<<a<<" and "<<b<<" is: "<<(a&b)<<endl; //  0001->1
// cout<<"OR of "<<a<<" and "<<b<<" is: "<<(a|b)<<endl; //  00111 -> 7;
// cout<<"XOR of "<<a<<" and "<<b<<" is: "<<(a^b)<<endl;// 000 110 -> 6;
// left shift operator.. what it does it multiplies given value with 2^y ..
// cout<<(a<<1)<<endl; // 1010  -> 10
// cout<<(b<<1)<<endl; // 110 -> 6
// right shift operator.. what it does it divides given value with x/2^y ..
// cout<<(a>>1)<<endl;   // 10-> 2
// cout<<(b>>1)<<endl;  // 1->1
    return 0;
}
*/

// check if kth bit is present ?
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=8;
    int k;
    cin>>k;

    int b=(a>>(k-1));
    if((b&1)==b){
         cout<<"Yes"<<endl;
    }
    else{
        cout<<"No";
    }
}
*/

//count number of set bit...
//Method-1
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    
int n=7;  int count=0;
while(n>0){
    
    if((n%2)!=0){
        count++;
       
    }
    n=(n/2);
}
cout<<count<<endl;
    return 0;
}
*/

// Method 2 - brian kerningan's algorithms

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    
int n=7;  int count=0;
while(n>0){
    
    n=(n &(n-1));// this eliminate right most set bit...
    count++;    
}
cout<<count<<endl;
    return 0;
}
*/

// x & ~(x-1) this expression gives right most set bit..
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={2,2,4,5,6,7,4,6};
int x=0;
 int res1=0,res2=0;
 for(int i=0; i<8; i++){
    x^=arr[i];
 }
 int t= (x & (~(x-1)));
 for(int i=0; i<8; i++){
    if((t&arr[i])!=0){
        res1^=arr[i];
    }
    else{
        res2^=arr[i];
    }
 }
 cout<<res1<<" "<<res2<<endl;
    return 0;
}
// power set

// count bit in constent time 
*/


// Set union A | B
// Set intersection A & B
// Set subtraction A & ~B
// Set negation ALL_BITS ^ A or ~A
// Set bit A |= 1 << bit
// Clear bit A &= ~(1 << bit)
// Test bit (A & 1 << bit) != 0
// Extract last bit A&-A or A&~(A-1) or x^(x&(x-1))
// Remove last bit A&(A-1)
// Get all 1-bits ~0

