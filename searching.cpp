// linear search..

/*
#include<iostream>
using namespace std;
int linear_search(int arr[], int n, int key){
    for (int i=0; i<n; i++){
        if(arr[i]==key){
        return 1;
        }
       
    }
    return 0;
}
int main(){
    int n=5;
int arr[n]={1,4,6,7,9};
int key=6;
cout<<linear_search(arr,n,key)<<endl;
key=2;
cout<<linear_search(arr,n,key)<<endl;
    return 0;
}
*/

// binary search..

/*
#include <iostream>
using namespace std;
int binary_search(int end, int arr[],int key ){
int bign=0;
while(bign<=end){
    int mid = (end+bign)/2;
    if (arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
     bign=mid+1;
    }
    else if(arr[mid]>key){
      end=mid-1;
    }
}
return 0;
}
int main(){
 
    int arr[]={3,6,9,12,14,16};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size;
    int key;
    cout<<"enter key : "<<endl;
    cin>>key;
     cout<<binary_search((size-1),arr,key)<<endl;

}
*/

// ternary search

/*
#include<bits/stdc++.h>
using namespace std;
int ternaryS(int arr[], int size, int key){
    int s=0;
    int e=size-1;
    
    while(s<=e){
    int mid1= s + (e-s)/3;
    int mid2= e - (e-s)/3;
    if(key==arr[mid1]){
        return 1; 
    }
    if(key==arr[mid2]){
        return 1;
    }
    if(key<arr[mid1]){
       e= mid1-1;
    }
    else if(key>arr[mid2]){
        s = mid2+1;
    }
    else {
        s= mid1+1;
        e= mid2-1;
    }
    }
    return -1;
}
int main(){

    int arr[]={1,4,6,8,23,85,398};
    int size= sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    cout<<ternaryS(arr, size,key)<<endl;
    return 0;
}
*/

/*
Binary Search problem..
search target
peak element
pivot element
sqrt root
search in rotated sorted array
first occurance
last occurance and number of accurance
search in infinite array
bool allocationa problem..
*/




// square root 
/*
#include<bits/stdc++.h>
using namespace std;
int sqroot(int x){
    int l=1;
    int r=x;int mid, msq,ans=-1;
    while(l<=r){
    mid= (l+r)/2;
    msq= mid*mid;
    if(msq>x){
      r=mid-1;
    }
    else if(msq==x){
        return mid;
    }
    else{
        l=mid+1;
       ans= mid;
    }
    }
    return ans;
}
int main(){
int x;
cin>>x;
cout<<sqroot(x)<<endl;
    return 0;
}
*/

// index of first occurance
/*
#include<bits/stdc++.h>
using namespace std;
int fsocc(int arr[],int n, int x ){
    int l=0; int r=n-1;
    int mid;
    while (l<=r)
    {
      mid=(l+r)/2;
      if(arr[mid]< x){
          l= mid+1;
      }
      else if(arr[mid]>x){
          r=mid-1;
      }
      else{
           if(mid==0 || arr[mid+1]!= arr[mid]){
               return mid;
           }
           else {
              // r= mid-1;
              l= mid +1;
           }
      }
    }
    return -1;
}
int main(){
int arr[]={1,2,3,3,4,5,5,5,5,7};
int x;
cin>>x;
int n= sizeof(arr)/sizeof(arr[0]);
cout<<fsocc(arr,n,x)<<endl;
    return 0;
}

*/

//finding element in infinite array
/*
#include<bits/stdc++.h>
using namespace std;
int bSearch(int arr[], int low, int high, int x)
{
	if(low > high)
		return -1;

	int mid = (low + high) / 2;

	if(arr[mid] == x)
		return mid;

	else if(arr[mid] > x)
		return bSearch(arr, low, mid - 1, x);

	else
		return bSearch(arr, mid + 1, high, x);
}
int findex(int arr[], int x){
    if (arr[0]==x){
        return 0;
    }
    int i=1;
    while (x > arr[i]){
        i=i*2;
        }
        if (arr[i]==x){
            return i;
        }
   return bSearch( arr, i/2 +1, i-1, x);
    
}

int main(){
int arr[]={1,2,3,13,24,45,55,65,75,87};
int x;
cin>>x;
int n= sizeof(arr)/sizeof(arr[0]);
int index= findex(arr,x);
cout<<index<<endl;
    return 0;
}
*/

// finding element in rotated shorted array..

/*
#include<bits/stdc++.h>
using namespace std;
int findi(int arr[], int n, int x){
    int l=0; int r=n-1; int mid;
    while(l<=r){
     mid= (l+r)/2;
     if(arr[mid]==x){
         return mid;
     }
     if(arr[mid]< arr[r]){
         if(arr[mid]< x  && x<= arr[r]){
             l= mid+1;
         }
         else r=mid-1;
     }
    
    else{
        if(arr[mid]> x && arr[l]<=x){
            r=mid-1;
        }
        else l=mid+1;
    }
    
}
return -1;
}
int main(){
int arr[]={5,13,24,45,55,65,75,87,1,2,3,4};
int x;
cin>>x;
int n= sizeof(arr)/sizeof(arr[0]);
cout<<findi(arr,n,x)<<endl;

    return 0;
}

*/

//peak element....

/*
#include<bits/stdc++.h>
using namespace std;
int findp(int arr[], int n){
int l=0; int r=n-1;
int mid;
while(l<=r){
mid= (l+r)/2;
if((mid==0 || arr[mid-1]<= arr[mid])&&(mid==n-1 || arr[mid+1]<=arr[mid])){
    return mid;
}
if(mid>0 && arr[mid-1]>=arr[mid]){
    r=mid-1;
}
else l=mid+1;
}
return -1;
}

int main(){
int arr[]={4,6,7,9,3,22,6,89,4};
int n= sizeof(arr)/sizeof(arr[0]);
cout<<findp(arr,n)<<endl;

    return 0;
}
*/

//pair sum
/*
#include <bits/stdc++.h>
using namespace std;
bool findpair(int arr[], int n, int t){
    int l=0;
    int r=n-1;
    
    while(l<=r){
        if(arr[l]+arr[r]==t){
            return true;
        }
        else if((arr[l]+arr[r])>t){
            r--;
        }
        else{
            l++;
        }

    }
    return false;

}
int main(){
int arr[]={4,6,7,9,3,22,26,89,90};
int n= sizeof(arr)/sizeof(arr[0]);
int x;
cin>>x;
cout<<findpair(arr,n,x)<<endl;
    return 0;
}
*/

// finding median of two shorted array of different size


#include<iostream>
#include<vector>
using namespace std;
double findmedian(vector<int>a1,vector<int>a2){
    if(a1.size()>a2.size()){
     findmedian(a2,a1);
    }
    int n1=a1.size()-1; // chhote ki last index
    int n2=a2.size()-1; // bde ki last index
    int low=0;
    int high=n1;
    while(low<=high){
int cut1= (low+high)/2;
int cut2= (n1+n2+1)/2 -cut1;

int l1,l2,r1,r2;
if(cut1==0){
    l1=INT_MIN;
}
else{
    l1=a1[cut1-1];
}
    
if(cut2==0) {
    l2=INT_MIN;
} 
else{
    l2=a2[cut2-1];
}
if(cut1==n1){
    r1=INT_MAX;
}
else
{
r1=a1[cut1];
}

if(cut2==n2){
    r2=INT_MAX;
}
else
{
r2=a2[cut2];
}



if(l1<=r2 && l2<=r1){
    if((n1+n2)%2==0){
        return   ((max(l1,l2))+(min(r1,r2)))/2.0;
    }
    else{
        return max(l1,l2);
    }
}
else if(l1>r2){
    high=cut1-1;
}
else{
    low=cut1+1;
}
}
return 0.0;
}

int main(){
vector<int>arr1={1,3,7,9,10};
vector<int>arr2={2,5};

cout<<"ans   "<< findmedian(arr1,arr2)<<endl;
    return 0;
}