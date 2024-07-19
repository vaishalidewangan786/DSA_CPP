// gcd of two number.

//____________________________________________________________________________________
// brute force
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int a,b;
// cin>>a>>b;
// int minn= min(a,b);
// while(minn>0){
//   if(a%minn==0 && b% minn==0){
//     cout<<minn<<endl;
//     break;
//   }
//   minn--;
// }
//   return 0;
// }

// efficient

// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b){
//   if(b==0){
//     return a;
//   }
//   return gcd(b,a%b);
// }
// int main(){
// int a,b;
// cin>>a>>b;
// cout<<gcd(a,b)<<endl;
//   return 0;
// }

//____________________________________________________________________________________

// LCM of two number
// // neive approach

// #include<bits/stdc++.h>
// using namespace std;
// int LCM(int a, int b){
//  int mx= max(a,b);
//  while(true){
//   if(mx%a==0 && mx%b==0){
//     break;
//   }
//   mx++;
//  }
//  return mx;
// }
// int main(){
// int a,b;
// cin>>a>>b;
// cout<<LCM(a,b)<<endl;
//   return 0;
// }

// efficient

// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b){
//   if(b==0){
//     return a;
//   }
//   return gcd(b,a%b);
// }
// int LCM(int a, int b){
// int gcdd= gcd(a,b);
// a/=gcdd;
// return a*b;
// }
// int main(){
// int a,b;
// cin>>a>>b;
// cout<<LCM(a,b)<<endl;
//   return 0;
// }

// check prime

// #include<bits/stdc++.h>
// using namespace std;
// bool isprime(int b){
// if(b==1){ return false;}
//   int n= sqrt(b);
//   for(int i=2; i<=n; i++){
//       if(b%i==0){
//         return false;
//       }
//   }
// return true;
// }

// int main(){
// int b;
// cin>>b;
//  cout<<isprime(b)<<endl;
//   return 0;
// }

// prime factor neive

// #include<bits/stdc++.h>
// using namespace std;
// bool isprime(int b){
// if(b==1){ return false;}
//   int n= sqrt(b);
//   for(int i=2; i<=n; i++){
//       if(b%i==0){
//         return false;
//       }
//   }
//   return true;
// }
// void facprime(int n){
//  for(int i=2; i*i<n; i++){
//   if(isprime(i)){
//     int t=i;
//     while(n%t==0){
//       cout<<i<<" ";
//       t*=i;
//     }
//  }
//  }
// }
// int main(){
// int n;
// cin>>n;
// facprime(n);
//   return 0;
// }

// seive of eratosthenes - true/ false

// #include<bits/stdc++.h>
// using namespace std;
// void sieve(int n){
// vector<bool>prime(n+1,1);
// for(int i=2; i<=n; i++){
//   if(prime[i]==true){
//     for(int j=i*i; j<=n;j+=i){
//         prime[j]=false;
//     }
//   }
// }
// for(int i=2; i<=n; i++){
//   if(prime[i]){
//     cout<<i<<" ";
//   }
// }

// }

// int main(){
// int n;
// cin>>n;
// sieve(n);
//   return 0;
// }

// sieve prime factor

// #include<bits/stdc++.h>
// using namespace std;
// void sieve(int n,vector<int>& prime){
// for(int i=2; i<=n; i++){
//   if(prime[i]==i){
//     for(int j=i*i; j<=n;j+=i){
//       if(prime[j]==j){
//         prime[j]=i;
//       }
//     }
//   }
// }
// while(n!=1){
//   cout<<prime[n]<<" ";
//   n/=prime[n];
// }
// }
// int main(){
// int n;
// cin>>n;
// vector<int>prime(n+1,0);
// for(int i=0; i<=n+1; i++){
//   prime[i]=i;
// }
// sieve(n,prime);
//   return 0;
// }

// power

// #include<bits/stdc++.h>
// using namespace std;
// int power(int x,int n){
//   if(n==0){
//     return 1;
//   }
//   if(n%2==0){
//     return power(x*x,n/2);
//   }
// else {return x*power(x*x,(n-1)/2);}
// }
// int main(){
// int x,n;
// cin>>x>>n;
// cout<<power(x,n)<<endl;
//   return 0;
// }

// iterative

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int x,n;
cin>>x>>n;
int res=1;
while(n>0){
  if(n%2==0){
    x=x*x;
    n/=2;
  }
  else{
  res*=x;
  x=x*x;
  n=(n-1)/2;
  }
}
cout<<res<<endl;
  return 0;
}
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
int primefactor(int k, vector<int> &prime, unordered_set<int> &st)
{

  while (k != 1)
  {
    st.insert(prime[k]);
    k /= prime[k];
  }
  return st.size();
}
int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int t;
  cin >> t;
  while (t--)
  {
    int l, r;
    cin >> l >> r;
    vector<int> prime(r+2, 0);
    for (int i = 2; i <= r; i++)
    {
      prime[i] = i;
    }
    for (int i = 2; i <= r; i++)
    {
      if (prime[i] == i)
      {
        for (int j = i * i; j <= r; j += i)
        {
          if (prime[j] == j)
          {
            prime[j] = i;
          }
        }
      }
    }
    int ans = 0;
    unordered_set<int> st;
    for (int i = l; i <= r; i++)
    {
      if (primefactor(i, prime, st) >= 3)
      {
        ans++;
      }
      st.clear();
    }
    cout << ans << endl;
  }

  return 0;
}
