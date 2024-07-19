// sorting of array...

/*
#include<bits/stdc++.h>
# include<algorithm>
using namespace std;

int main(){
int arr[]={3,7,2,1};
int n= sizeof(arr)/sizeof(arr[0]);
 sort(arr,arr+n);// arr+n pointing beyond last element.
cout<<"After sorting"<<endl;
 for(int x: arr){
    cout<<x<<" ";
 }
 cout<<endl<<"After reverse sorting"<<endl;
 sort(arr,arr+n,greater<int>());
for(int x: arr){
    cout<<x<<" ";
 }
    return 0;
}
*/

//sorting of vector...
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
    vector<int> v={10,20,5,7};
	
	sort(v.begin(),v.end());
	
	for(int x: v)
	    cout<<x<<" ";
	
	sort(v.begin(),v.end(),greater<int>());
	
	cout<<endl;
	for(int x: v)
	    cout<<x<<" ";
}
*/

// bubble sort...
// in this sort technique we compare adjacent element and we perform swap operation..
// we can further optimize the methode if given array is fully or partially sorted if swapping not takes place..
/*

#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
    // bool swapped= false;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                // swapped = true;
            }
        }
        // if(swapped== false){
        //     break;
        // }
    }
    for(int x=0; x<n; x++){
        cout<<arr[x]<<" ";
    }
}
int main(){
int arr[]={1,2,3,4,5,6,7,8};
int n= sizeof(arr)/sizeof(arr[0]);
bubbleSort(arr,n);
    return 0;
}


*/

// selection sort : we select minimum element and we swap that with initial unsorted element of array;

/*
#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n){
  for(int i=0; i<n-1; i++){
    int min_idx=i;
    for(int j=i+1; j<n; j++){
        if(arr[j]<arr[min_idx]){
          min_idx=j;  }
           
    }
       swap(arr[i],arr[min_idx]);
  }
}
int main(){
int arr[]={1,22,13,4,15,6,27,8};
int n= sizeof(arr)/sizeof(arr[0]);
selectionSort(arr,n);
 for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
  }
    return 0;
}

*/

// Insertion sort
/*
#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++ ){
       int j=i-1;
       int key= arr[i];
       while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=key;
    }
}
int main(){
int arr[]={1,22,13,4,15,6,27,8};
int n= sizeof(arr)/sizeof(arr[0]);
insertionSort(arr,n);
 for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
  }
    return 0;
}
*/

// merge sort for two sorted array...
/*
#include<bits/stdc++.h>
using namespace std;
void mergeSort(int a[], int b[], int sa, int sb){
    int i=0; int j=0;
    while(i<sa && j<sb){
        if(a[i]<=b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<sa){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<sb){
        cout<<b[j]<<" ";
        j++;
    }
}
int main(){
int a[]={2,4,6,8,10,11};
int b[]={0,1,3,5,7,10};
int sa=sizeof(a)/sizeof(a[0]);
int sb=sizeof(b)/sizeof(b[0]);
mergeSort(a,b,sa,sb);
    return 0;
}
*/



// merge sort..
/*
#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int m, int r){
    int n1=m-l+1;
    int n2= r-m;
    int la[n1];
    int ra[n2];
    for(int i=0; i<n1; i++){
        la[i]=a[l+i];
    }
    for(int j=0; j<n2; j++){
        ra[j]=a[j+m+1];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(la[i]<=ra[j]){
            a[k++]=la[i++];
        }
        else{
            a[k++]=ra[j++];
        }
    }
    while(i<n1){
        a[k++]=la[i++];
    }
    while(j<n2){
        a[k++]=ra[j++];
    }
}
void mergeSort(int a[], int l, int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main(){
int arr[]={1,22,13,4,15,6,27,8};
int n= sizeof(arr)/sizeof(arr[0]);
mergeSort(arr,0,n-1);
 for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
 }
    return 0;
}

*/




// Intersection of two sorted array...
/*
#include<bits/stdc++.h>
using namespace std;
void Intersection(int a[], int b[], int sa, int sb){
    int i=0; int j=0;
    while(i<sa && j<sb){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;j++;
        }
        else if(a[i]<b[j]){
        
            i++;
        }
        else{
            j++;
        }
    }
    
}
int main(){
int a[]={2,4,6,8,10,11};
int b[]={0,1,2,3,5,7,8,10};
int sa=sizeof(a)/sizeof(a[0]);
int sb=sizeof(b)/sizeof(b[0]);
Intersection(a,b,sa,sb);
    return 0;
}
*/

// union of two sorted array...
/*
#include<bits/stdc++.h>
using namespace std;
void unionPrint(int a[], int b[], int sa, int sb){
    int i=0; int j=0;
    while(i<sa && j<sb){
        if(i>0 && a[i]==a[i-1]){i++;continue;}
        if(j>0 && b[j]==b[j-1]){j++;continue;}
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++; j++;
        }
        else if(a[i]>b[j]){
            cout<<b[j]<<" ";
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
        }

    }
    while(i<sa){
        if(i>0 && a[i]!=a[i-1]){
        cout<<a[i]<<" ";
        i++;}
    }
    while(j<sb){
        if(i>0 && b[j]!=b[j-1]){
        cout<<b[j]<<" ";
        j++;}
    }
}
int main(){
int a[]={2,4,6,8,10,11};
int b[]={0,1,2,3,5,7,10};
int sa=sizeof(a)/sizeof(a[0]);
int sb=sizeof(b)/sizeof(b[0]);
unionPrint(a,b,sa,sb);
    return 0;
}
*/


// find inversion in array

/*

#include<bits/stdc++.h>
using namespace std;
int mergeandcount(int a[], int l, int r,int m){
    int n1=m-l+1; int n2= r-m;
    int la[n1],ra[n2];
    for(int i=0; i<n1; i++){
        la[i]=a[l+i];
    }
    for(int j=0; j<n2; j++){
        ra[j]=a[m+1+j];
    }
int i=0, j=0, k=l; int res=0;
while(i<n1 && j<n2){
    if(la[i]<=ra[j]){
        a[k++]=la[i++];
    }
    else{
        a[k++]=ra[j++];
        res+=(n1-i);
    }
}
while(i<n1){
    a[k++]=la[i++];
}
while(j<n2){
    a[k++]=ra[j++];
}
return res;

    }

int countinv(int a[], int l, int r){
int m; int res=0;
if(l<r){
    m=l+(r-l)/2;
    res+=countinv(a,l,m);
    res+=countinv(a,m+1,r);
    res+=mergeandcount(a,l,r,m);
}
return res;
}
int main(){
int arr[]={2,4,7,5,11,1,3};
cout<<countinv(arr,0,6);
    return 0;
}

*/


// Partition of array 
// 1. naive partition.. put all the small elements first then equal elements then greater elements..
// stable partition..
/*
#include<bits/stdc++.h>
using namespace std;
void naivePartition(int arr[],int l, int h, int p){
 int temp[h-l+1]; int res=0;
 int index=0;
 for(int i=l; i<=h; i++){
    if(arr[i]<arr[p]){
        temp[index++]=arr[i];
    }
 }
 res=index;
  for(int i=l; i<h; i++){

    if(arr[i]==arr[p]){
        temp[index++]=arr[i];
    }
 }
  for(int i=l; i<h; i++){
    if(arr[i]>arr[p]){
        temp[index++]=arr[i];
    }
 }
for(int i=0; i<=6; i++){
    cout<<temp[i]<<" ";
}
}
int main(){
int arr[]={2,4,7,5,11,1,3};
naivePartition(arr,0,6,3);


    return 0;
}


*/



// lomuto partition...
// unstable partition.. T= O(n) , S= O(1);
/*
#include<bits/stdc++.h>
using namespace std;
int lomutoPartition(int a[],int l, int r ,int p){
    swap(a[r],a[p]);
int i=l-1;
for(int j=0;j<r;j++){
    if(a[j]<a[r]){
        i++;
        swap(a[i],a[j]);
    }
}
swap(a[i+1],a[r]);
return i+1;
}

int main(){
int arr[]={2,4,7,5,11,1,3};
cout<<lomutoPartition(arr,0,6,3)<<endl;

    return 0;
}

*/


//Quick sort..
/*
#include<bits/stdc++.h>
using namespace std;
int Quickfun(int arr[], int l,int h){
    int p=arr[h];
    int i=l-1;
    for(int j=l ; j<=h-1; j++){
        if(arr[j]<p){   
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
void QuickSort(int arr[], int l, int h){
    if(l<h){
    int p= Quickfun(arr,l,h);
    QuickSort(arr,l,p-1);
    QuickSort(arr,p+1,h);
    }
}

int main(){
int arr[]={8,4,7,9,3,10,5};
int n=sizeof(arr)/sizeof(arr[0]);
QuickSort(arr,0,n-1);
for(int x:arr){
    cout<<x<<" ";
}
    return 0;
}

*/

/*
#include<bits/stdc++.h>
using namespace std;
int Quickfun(int arr[], int l,int h){
    int p=arr[h];
    int i=l-1;
    for(int j=l ; j<=h-1; j++){
        if(arr[j]<p){   
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
void QuickSort(int arr[], int l, int h){
    if(l<h){
    int p= Quickfun(arr,l,h);
    QuickSort(arr,l,p-1);
    QuickSort(arr,p+1,h);
    }
}

int main(){
int arr[]={8,4,7,9,3,10,5};
int n=sizeof(arr)/sizeof(arr[0]);
QuickSort(arr,0,n-1);
for(int x:arr){
    cout<<x<<" ";
}
    return 0;
}
*/

// kth smallest element in array..
// partition funtion gives true position of any element ...
/*
#include<bits/stdc++.h>
using namespace std;
int partition(int a[], int l ,int r){
    int pivot=a[r];
    int j=l;
    int i=l-1;
    for(j=l; j<=r-1; j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;   
}
int kthsmallestele(int a[], int l, int r,int k){
    while(l<=r){
        int pi=partition(a,l,r);
        if(pi==k-1){
            return pi;
        }
        else if(pi>k-1){
            r=pi-1;
        }
        else{
            l=pi+1;
        }
    }
    return -1;
}

int main(){
int a[]={2,4,6,8,10,11,0,1,2,3,5,7,10};
int sa=sizeof(a)/sizeof(a[0]);
int k;
cin>>k;
int ind=kthsmallestele(a,0,sa-1,k);
cout<<a[ind]<<endl;
for(auto x: a){
    cout<<x<<" ";
}
    return 0;
}
*/
 
// minimum difference in array....

// sort two types of array in any order like 1. first negative element second positive element 2. even odd number 3 true false
/*
#include<bits/stdc++.h>
using namespace std;
void partition(int a[], int l ,int r){
    int pivot=0;
    int j=r;
    int i=-1;
    for(j=l; j<=r-1; j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
}
int main(){
int a[]={2,-4,-6,-8,10,11,0,-1,2,-3,5,7,10};
int n=sizeof(a)/sizeof(a[0]);
partition(a,0,n-1);
for(auto x:a){
    cout<<x<<" ";
}
    return 0;
}
*/

//sorting three type of elements.... like 0,1,2  or multiple occurance of a pivot may exist or partition around a range
//Dutch nationa flag algorithms..

/*
#include<bits/stdc++.h>
using namespace std;
void partition(int a[], int l ,int r){
    int lo=0;int hi=r; int mid=0;
    while(mid<=hi){
        if(a[mid]==0){
            swap(a[lo],a[mid]);
            lo++;mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[hi],a[mid]);
            hi--;
        }
    }
}
int main(){
int a[]={1,2,1,0,0,1,2,2,1,1,0,1,0};
int n=sizeof(a)/sizeof(a[0]);
partition(a,0,n-1);
for(auto x:a){
    cout<<x<<" ";
}
    return 0;
}*/


// merge two intervals
/*
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>&a, pair<int,int>&b){
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first<b.first;
}
void mergeintervals(vector<pair<int,int>>&v){
    sort(v.begin(),v.end(),cmp);
    // for(auto x:v){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    int count=0;
for(int i=1; i<v.size(); i++){
if(v[count].second>=v[i].first){
    v[count].second= v[i].second;
}
else{
    count++;
    v[count]=v[i];
}
}
 for(int i=0; i<=count; i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
int main(){
    
vector<pair<int,int>> v={{1,6},{2,7},{9,12},{1,2},{14,15},{1,4},{12,13}};

 mergeintervals(v);
    return 0;
}
*/

// meeting the maximum guest when arrvial time and departure time is given..

/*
#include<bits/stdc++.h>
using namespace std;
int maxmeet(int arr[],int dip[], int n){
sort(arr,arr+n);
sort(dip,dip+n); int ans=1,curr=1;
int i=1; int j=0;
while(i<n && j<n){
if(arr[i]<dip[j]){
    ++curr; i++;

}
else {
    --curr;
    j++;
  
}
// else{
//     i++; j++;
// }

  ans=max(ans,curr);
  cout<<ans<<" ";
}
while(i<n){
    curr++; i++;
}

return ans;
}
int main(){
int arr[] = { 900, 600, 700};
    int dep[] = { 1000, 700, 730};

cout<<maxmeet(arr,dep,3);


return 0;
}

*/

