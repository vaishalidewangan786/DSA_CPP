//finding frequencies of elements...
/*

#include<bits/stdc++.h>
using namespace std;

int main(){
unordered_map<int , int>ump;
int arr[]={2,4,4,5,5,5,5,7,2,3,1};
for(int i=0; i<11; i++){
    // if(ump.find(arr[i])!=ump.end()){
    //  ump.find(arr[i])->second++;
    // }
    // else{
    //     pair<int,int> p(arr[i],1);
    //     ump.insert(p);
    // }
    ump[arr[i]]++;
}

for(auto it=ump.begin(); it!=ump.end(); it++){
    cout<<it->first<<" "<<it->second<<endl;
}
    return 0;
}

*/

//intersction of two array...
//neive approach
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={2,4,4,5,5,5,5,7,2,3,1};
    int b[]={2,3,5,7,6};
    int c=sizeof(a)/sizeof(a[0]);
    int d=sizeof(b)/sizeof(b[0]);
    for(int i=0; i<c; i++){
        bool flag=false;
       for(int j=0; j<i; j++){
        if(a[i]==a[j]){
            flag=true;
        }
       }
       if(flag==true){
        continue;
       }
       for(int  j=0; j<d; j++){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
        }
       }
    }
}
*/

//efficient solution
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={2,4,4,5,5,5,5,7,2,3,1};
    int b[]={2,3,5,7,6};
    int c=sizeof(a)/sizeof(a[0]);
    int d=sizeof(b)/sizeof(b[0]);
    unordered_set<int> s(a,a+c);

       for(int j=0; j<d; j++){
        if(s.find(b[j])!=s.end()){
          cout<<b[j]<<" ";
          s.erase(b[j]);
        }
        }
       return 0;
    }
*/

//union of two unsorted array...
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int a[]={2,4,4,5,5,5,5,7,2,3,1};
    int b[]={2,3,5,7,6};
    int c=sizeof(a)/sizeof(a[0]);
    int d=sizeof(b)/sizeof(b[0]);
    unordered_set<int> s(a,a+c);

       for(int j=0; j<d; j++){
        s.insert(b[j]);
        }
        for(auto x:s){
            cout<<x<<endl;
        }
        
    return 0;
}


*/

// pair with given sum in unsorted array..

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
  int b[]={2,3,5,7,6};
  int d=sizeof(b)/sizeof(b[0]);int sum=5;
  unordered_set<int> s;
  bool flag=false;
for(int i=0; i<d; i++){
    if(s.find(sum-b[i])!=s.end()){
  flag= true;
    }
    else{
        s.insert(b[i]);
    }
}
cout<<flag<<endl;
    return 0;
}

*/

//  sub array with sum zero...
// neive solution//
// check 0 to n sum, 1 to n sum ....... n- to n  and n; 
/*
#include<iostream>
using namespace std;

int main(){
int b[]={2,3,5,7,6};
  int d=sizeof(b)/sizeof(b[0]);
  int container=0; bool flag=false;
 
  for(int i=0; i<d; i++){
    int curr=0;
    for(int j=i; j<d; j++){
        curr+=b[j];
        if(curr==0){
            flag=true;
          cout<<1<<endl;
          break;
        }
    }
  }
  if (flag==false)
  {
   cout<<-1<<endl;
  }
  
    return 0;
}

*/


// efficient solution//

/* in this efficient solution we use the combine application of hashing and prefix sum

and the key idea is that if prefix sum has two same value then in origial array a pair exist which has sum zero
also if the value of prefix sum is zero */
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int b[]={2,3,-5,7,6};
  int d=sizeof(b)/sizeof(b[0]);
// finding prefix sum
int sum=0;
unordered_set<int> s;
bool flag=false;
for(int i=0; i<d ; i++){
sum+=b[i];
   if(s.find(sum)!=s.end()){
    flag=true;
      cout<<"sum zero exist ";
   }
   if(sum==0){
     flag=true;
    cout<<"sum zero exist ";
   }
   else{
    s.insert(sum);
   }
}
  if (flag==false)
  {
   cout<<-1<<endl;
  }
    return 0;
}


*/

// subarray with given sum in unsorted array...
/*

#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={15, 2, 8, 10, -5,-8, 6};
int size=sizeof(arr)/sizeof(arr[0]);
// finding prefix sum
int givenSum=3;
int sum=0;
unordered_set<int> s;bool flag=false;
for(int i=0; i<size; i++){
sum+=arr[i];
   if(s.find(sum-givenSum)!=s.end()){
    flag=true;
      cout<<"given sum subarray exist ";
   }
   if(sum==givenSum){
     flag=true;
    cout<<"given sum subarray exist ";
   }
   else{
    s.insert(sum);
   }
}
  if (flag==false)
  {
   cout<<-1<<endl;
  }
    return 0;
}
*/


// longest sum subarray with given sum...
// neive approach


// #include<iostream>
// using namespace std;

// int main(){
// int b[]={5,8,-4,-4,9,-2,2};
// int d=sizeof(b)/sizeof(b[0]);
//  int ans=0; int givenSum=0;
//   for(int i=0; i<d; i++){
//     int curr=0;
//     for(int j=i; j<d; j++){
//         curr+=b[j];
//         if(curr==givenSum){
//          ans=max(ans,j-i+1);
//         }
//     }
//   }
//    cout<<ans<<endl;
//     return 0;
// }

// efficient solution... by using map;

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={0,5,-5,5,-5,8,3,4,9,5,12};
int size=sizeof(arr)/sizeof(arr[0]);
// finding prefix sum 
int j=0;
int givenSum=0;
int sum=0;
unordered_map<int,int> s;int ans=0;
for(int i=0; i<size; i++){
sum+=arr[i]; 
   if(sum==givenSum){
     ans=max(ans,(i+1));
   }
   if(s.find(sum-givenSum)!=s.end()){
    
      ans=max(ans,(i-s.find(sum-givenSum)->second));
   }
   else{
    pair<int,int>p(sum,j);
    j++;
    s.insert(p);
   }
}
 
   cout<<ans<<endl;
  
    return 0;
}
*/





//Longest subarray with equal number of 1 and 0...

// neive solution..
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={1,1,1,0,1,0,1,0,1,0,1,0};
int n=sizeof(arr)/sizeof(arr[0]);
  int nOne=0;
  int nZero=0;
  int ans=0;
  for(int i=0; i<n; i++){
      nOne=0;
     nZero=0;
    for(int j=i; j<n; j++){
      if(arr[j]==0){
        nZero++;
      }
      if(arr[j]==1){
        nOne++;
      }
    
    if(nZero==nOne){
        ans=max(ans,j-i+1);
    }
  }
  }
    cout<<ans<<endl;
   
    return 0;
}

*/

// efficient solution.. replace all 0 by -1 and find longest sum subarray of sum 0;

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={0,1,1,0,1,1,0,1,1,0};
int size=sizeof(arr)/sizeof(arr[0]);
// finding prefix sum 

int givenSum=0;
int sum=0;
 for(int j=0; j<size; j++){
      if(arr[j]==0){
      arr[j]=-1;
      }
 }
unordered_map<int,int> s;int ans=0;
for(int i=0; i<size; i++){
sum+=arr[i];
if(sum==givenSum){
     ans=max(ans,(i+1));
   }
   if(s.find(sum-givenSum)!=s.end()){
    
      ans=max(ans,(i-s.find(sum-givenSum)->second));
   }
    else{
    pair<int,int>p(sum,i);
   
    s.insert(p);
   }
   
  
}

   cout<<ans<<endl;
  
    return 0;
}

*/



// Longest common span whit same sum in binary array...
// neive approach jaise hi sumOne sumTwo ke barabar hota hai index store krte hai ans me max value store krke print krte hai.

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={0,1,1,0,0,1,0,1,1,0};
int brr[]={0,1,1,1,1,0,0,1,1,0};
int size=sizeof(arr)/sizeof(arr[0]);
// finding prefix sum 
int ans=0;
for(int i=0; i<size; i++){
    int sum1=0;
int sum2=0;
    for(int j=i; j<size; j++){
sum1+=arr[j];sum2+=brr[j];
if(sum1==sum2){
     ans=max(ans,j-i+1);
   }
    }  
}

   cout<<ans<<endl;
  
    return 0;
}

*/

// Efficieant solution.. subtrack one array to other and find longest sub array with sum zero...
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={0,1,1,1,0,1,0,1,1,0};
int brr[]={0,1,1,1,0,0,0,1,1,0};
int size=sizeof(arr)/sizeof(arr[0]);
int temp[size];


int ans=0;
for(int i=0; i<size; i++){
 temp[i]= arr[i]-brr[i];
}
int sum=0;
unordered_map<int,int>mp;
for(int i=0; i<size; i++){
    sum+=temp[i];
    if(sum==0){
        ans=max(ans,i+1);
    }
 if(mp.find(sum)!=mp.end()){
   ans=max(ans,i-mp.find(sum)->second);
 }
 else{
    pair<int,int>p(sum,i);
    mp.insert(p);
 }
}
   cout<<ans<<endl;
    return 0;
}

*/

// Longest consecutive subsequence...
//neive solution.. nlon(n)
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={20,5,6,7,30,6,40};
int size=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+size);
int ans=0; int curr=0;
for(int i=1; i<size; i++){
    if(arr[i-1]+1==arr[i]){
        curr++;
        ans=max(ans,curr);
    }
    else if(arr[i]!=arr[i-1]){
        curr=0;
    }
}
cout<<ans+1<<endl;

    return 0;
}
*/




//efficient solution time- O(n), space O(n);

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int arr[]={20,5,30,6,40};
// int size=sizeof(arr)/sizeof(arr[0]);
// set<int> s(arr,arr+size);
// set<int> iterator::i=s.begin();
// i=i++;
// int curr=0;
// int ans=0;
// for(auto it=i; it!=s.end(); it++){
//     if(*(--it)==(*it)){
//         curr++;
//         ans=max(ans,curr);
//     }
//     else{
//         curr=0;
//     }
// }
// cout<<ans+1<<endl;

//     return 0;
// }

// count distinct element in window..
/*

#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={10,20,20,10,30,40,10};
int size=sizeof(arr)/sizeof(arr[0]);
unordered_map<int,int>mp;
int k=4;
for(int i=0; i<k ; i++){
    mp[arr[i]]++;
}
cout<<mp.size()<<" ";
for(int i=k ; i<size; i++){
    mp[arr[i-k]]--;
    if(mp[arr[i-k]]==0){
        mp.erase(arr[i-k]);
    }
    mp[arr[i]]++;
    cout<<mp.size()<<" ";
}
    return 0;
}

*/

// more than n/k occurance..
// naive
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={10,20,10,30,30,50,10,20};
int k=4;
int i=1,curr=1;
sort(arr,arr+8);
while(i<8){
  while(i<8 && arr[i]==arr[i-1]){
   curr++; i++;
  }
  if(curr>8/k){
    cout<<arr[i-1]<<" ";
  }
  curr=1; i++;
}
return 0;
}
*/

// efficient approach...
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={10,20,10,30,30,50,10,20};
map<int,int>mp; int k=4;
for(int i=0; i<8; i++){
  mp[arr[i]]++;
}
for(auto e: mp){
  if(e.second>8/k){
    cout<<e.first<<" ";
  }
}
return 0;
}

*/



















































