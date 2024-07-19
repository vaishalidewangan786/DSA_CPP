# include <iostream>
#include<math.h>
using namespace std;
 int fac(int n){
     int b=1;
     for (int i=2 ; i<=n; i++){
        
         int b=i*b;

     }
     return b;
 }
int main(){
int n;
cin>>n;
 int ans = fac(n);
 cout<<ans<<endl;
 return 0;
   
}