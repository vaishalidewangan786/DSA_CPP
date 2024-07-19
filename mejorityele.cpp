// https://www.geeksforgeeks.org/majority-element/
// moore majority vote algorithm..

// #include<iostream>
// using namespace std;
// int countt(int arr[],int size){
//     int index=0; int count=1;
//     for(int i=1; i<size; i++){
//         if(arr[index]==arr[i]){
//             count++;
//         }
//         else{
//             count--;
//         }
//         if(count==0){
//             index=i;
//             count=1;
//         }
//     }
//     return arr[index];

// }
// void result (int arr[], int size, int num){
//   int c=0;
//   for(int i=0; i<size; i++){
//       if(num==arr[i]){
//           c++;
//       }
//   }
//   if(c>size/2){
//       cout<<num<<" is majority element "<<endl;
//   }
//   else{
//       cout<<"majority element is not present "<<endl;
//   }
// }
// int main(){

// int arr[]={1,4,1,2,1 ,9,1, 1,3};
// int size = sizeof(arr)/sizeof(arr[0]);
// int num= countt(arr,size);
// result(arr,size,num);
// return 0;
// }


//brout force
/*int majorityElement(int a[], int size)
{
        int max_count=0;int r=0;
        for(int i=0; i<size; i++){
            int count=0,t=0;
            for(int j=0; j<size; j++){
                if(a[i]==a[j]){
                    count++;
                    t=a[i];
                }
            }
            if(count>max_count){
                max_count=count;
                r=t;
            }
        }
        if(max_count>size/2){
            return r;
        }
        else{
            return -1;
        }
        
}*/


//Kadan's algorithms.....
// To find maximum sum subarray...
/*

#include<bits/stdc++.h>
using namespace std;
int maxsubarry(int arr[], int size){
    int curr=0;
    int maxsum=0;
    for(int i=0; i<size; i++){
        curr+=arr[i];
        maxsum=max(maxsum,curr);
        if(curr<0){
            curr=0;
        }
    }
    if(maxsum==0){
        for(int j=0; j<(size-1); j++){
            maxsum= max(arr[j],arr[j+1]);
        }
        return maxsum;
    }
    return maxsum;
}
int main(){
int arr[]={-10,-3,-6,-3,-8,-8,-3,-4};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<maxsubarry(arr,size)<<endl;
    return 0;
}
*/

// maximum profit buy sell problem ... 1 // ak bar karidna bechana ho to
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://www.interviewbit.com/courses/programming/topics/arrays/
//
/*

#include<bits/stdc++.h>
using namespace std;
int result (int arr[], int size){
    int min_so_far=arr[0];
    int res=0;
    for(int i=1; i<(size); i++){
        
            min_so_far=min(min_so_far,arr[i]);// ab tk ka sbse kam..
            int temp = arr[i]- min_so_far;
        
        res = max(res, temp);// maximum profit..
    }
    return res;
}
int main(){
int arr[]={3,1,4,8,7,2,5};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<result(arr,size)<<endl;
    return 0;
}


*/
// bar bar kharidna bechna ho to 
/*
#include<iostream>
using namespace std;
int result(int arr[], int size){
int profit=0;
for(int i=1; i<size; i++){
    if(arr[i-1]<arr[i]){
        profit+= arr[i]-arr[i-1];
    }
}
return profit;
}
int main(){
int arr[]={3,1,4,8,7,2,5};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<result(arr,size)<<endl;
return 0;
}


*/
// Trapping Rain problem
// https://www.interviewbit.com/courses/programming/topics/arrays/
/*
#include<iostream>
using namespace std;
int Raintrapping(int arr[], int al[], int ar[], int size ){
    int result=0;
    for(int i=1; i<size; i++){
       if((arr[i]<al[i])&&(arr[i]<ar[i])){
           result= result + min(al[i], ar[i]) - arr[i];
       }
    }
    return result;
}
int main(){
int arr[]={1,8,6,2,5,4,8,3,7};
int size= sizeof(arr)/sizeof(arr[0]);
int arrleft[size];
int arrright[size];
arrleft[size-1]=arr[size-1];
arrright[0]=arr[0];
for(int i=size-1; i>0; i--){
 arrleft[i-1] = max(arr[i-1], arrleft[i]);
}

for(int j=1; j<size; j++){
arrright[j]= max(arr[j],arrright[j-1]);
}

cout<<Raintrapping(arr,arrleft,arrright,size)<<endl;
return 0;
}
*/

// above methode take O(n) time and space O(n)

// efficient solution....

/*

#include<iostream>
using namespace std;
int trapping(int arr[],int n){
    int l=0;
    int r=n-1;
    int lmax=0;
    int rmax=0;
    int res=0;
    while(l<=r){
        if(arr[l]<=arr[r]){
            if(arr[l]>=lmax){
                lmax=arr[l];
            }
            else{
                res+=lmax- arr[l];
            }
            l++;
        }
        else{
            if(arr[r]>=rmax){
                rmax=arr[r];
            }
            else{
                res+=rmax-arr[r];
            }
            r--;
        }
    }
    return res;
}
 int main(){
int arr[]={1,8,6,2,5,4,8,3,7};
int size= sizeof(arr)/sizeof(arr[0]);
cout<<trapping(arr,size)<<endl;
    return 0;
}
*/



