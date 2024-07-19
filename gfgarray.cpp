// /*
// #include<bits/stdc++.h>
// using namespace std;
// void selectionsort(int arr[] , int size){
//     for(int i=0; i<size; i++){
//         for(int j=i+1; j<size; j++){
//             if(arr[j]<arr[i]){
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     for(int k=0; k<size; k++){
//         cout<<arr[k]<<" ";
//     }
// }
// int main(){

//     int arr[]={1,4,6,8,23,5,14,85,3};
//     int size= sizeof(arr)/sizeof(arr[0]);
//     selectionsort(arr, size);
//     return 0;
// }

// /*
// // bubble sort
// /*
// #include<bits/stdc++.h>
// using namespace std;
// void bubblesort(int arr[], int size){
//     for(int i=0; i<size; i++){
//         for(int j=0; j<size-i;j++){
//             if(arr[j]>arr[j+1]){
//                 int tem= arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=tem;
//             }
//         }
//     }
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
// int arr[]={1,4,6,8,23,5,14,85,3};
//     int size= sizeof(arr)/sizeof(arr[0]);
//     bubblesort(arr,size);
//     return 0;
// }
// */

// // insertion sort
// /*
// #include<iostream>
// using namespace std;
// void insertionsort(int arr[], int n){
//     for(int i=1; i<n; i++){
//         int curr = arr[i];
//         int j=i-1;
//         while(arr[j]>curr && j>=0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]= curr;
//     }

//     for(int t=0; t<n; t++){
//         cout<<arr[t]<<" ";
//     }
// }
// int main(){
// int arr[]={1,4,6,8,23,5,14,85,3};
//     int size= sizeof(arr)/sizeof(arr[0]);
//     insertionsort(arr,size);
// return 0;
// }


// */
// // merge sort
// #include <iostream>
// using namespace std;
// void merge(int arr[], int l, int r, int mid)
// {
//     int i = l;
//     int j = mid + 1;
//     int k = l;

//     while (l <= mid && j <= r)
//     {
//         if (arr[i] < arr[j])
//         {
//             ab[k] = arr[i];
//             i++;
//             k++;
//         }
//         else if (arr[j] < arr[i])
//         {
//             ab[k] = arr[j];
//             j++;
//             k++;
//         }
//     }
//     if (i > mid)
//     {
//         while (j <= r)
//         {
//             ab[k] = arr[j];
//             k++;
//             j++;
//         }
//     }
//     else
//     {
//         while (i <= mid)
//         {
//             ab[k] = arr[i];
//             k++;
//             i++;
//         }
//     }

//     for (int t = 0; t<=r; t++)
//     {
//         cout << ab[t] << endl;
//     }
// }
// void mergesort(int arr[], int r, int l)
// {

//     if (l < r)
//     {
//         int mid = (l + r) / 2;
//         mergesort(arr, mid, l);
//         mergesort(arr, r, mid + 1);
//         merge(arr, l, r, mid);
//     }
// }

// int main()
// {
//     int arr[] = {1, 4, 6, 8, 23, 5, 14, 85, 3};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     mergesort(arr, size - 1, 0);
//     return 0;
// }








// Rotation of array....
/*
#include <iostream>
using namespace std;
int GCD(int a, int b){
    if(b==0){
        return a;
    } 
      return  GCD(b,a%b);
}
int main()
{

int arr[5]={1,2,3,4,5};
int d;
cin>>d;
int size= sizeof(arr)/sizeof(arr[0]);

 int gcd = GCD(size,d);
 cout<<gcd<<endl;
 int i,j,k,temp;
for(i=0 ; i<gcd; i++){
    d=d%size;
    temp= arr[i];
       j=i;
while(1){
    k=j+d;
    if(k>=size){
        k=k-size;
    }
    if(k==i){
        break;
    }
    arr[j]=arr[k];
    j=k;
}
 arr[j]=temp;
}
for(int c=0;c<size; c++){
    cout<<arr[c]<<" ";
}
    return 0;
}

*/



// Reverse of array

// #include<iostream>
// using namespace std;
// void reverse(int arr[],int s, int e){
//     if(s>=e){
//         return;
//     }
//     else{
//         int temp= arr[e];
//         arr[e]=arr[s];
//         arr[s]= temp;
//         reverse(arr,s+1,e-1);
//     }
// }
// int main(){
// int arr[6]= {6,5,4,3,2,1};
// int size= sizeof(arr)/sizeof(arr[0]);

// reverse(arr,0,size-1);
// for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }


// stock buy sell problem ak bar kharidna ho 



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






// #include<iostream>
// using namespace std;
// int result(int arr[], int size){
// int profit=0;
// for(int i=1; i<size; i++){
//     if(arr[i-1]<arr[i]){
//         profit+= arr[i]-arr[i-1];
//     }
// }
// return profit;
// }
// int main(){
// int arr[]={1,5,3,8,1,2};
// int size=sizeof(arr)/sizeof(arr[0]);
// cout<<result(arr,size)<<endl;
// return 0;
// }

// Tapping rain water problem
// Naive approach

/*
#include<iostream>
using namespace std;
int result(int arr[], int size){
int profit=0;
for(int i=1; i<size-1; i++){
  int lmax=arr[i];
  for(int j=0; j<i; j++){
    lmax=max(lmax,arr[j]);
  }
  int rmax=arr[i];
  for(int j=i+1; j<size; j++){
    rmax=max(rmax,arr[j]);
  }
  profit+=min(lmax,rmax)-arr[i];
}
return profit;
}
int main(){
int arr[]={3, 0, 1, 2, 5};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<result(arr,size)<<endl;
return 0;
}
*/


/*
#include<iostream>
using namespace std;
int result(int arr[], int size){
int profit=0;
int lmax[size],rmax[size];
lmax[0]=arr[0];
rmax[size-1]=arr[size-1];
for(int i=1; i<size; i++){
 lmax[i]=max(arr[i],lmax[i-1]);
}
for(int i=size-2; i>=0; i--){
    rmax[i]=max(arr[i],rmax[i+1]);
}
for(int j=1; j<size-1; j++){

  profit+=min(lmax[j],rmax[j])-arr[j];
}
return profit;
}
int main(){
int arr[]={3, 0, 1, 2, 5};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<result(arr,size)<<endl;
return 0;
}
*/


// best solution for tapping rain water problem

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[]={1,8,6,2,5,4,8,3,7};
// int size=sizeof(arr)/sizeof(arr[0]);
// int l=0;
// int r=size-1;
// int lmax=0;
// int rmax=0;
// int profit=0;
// while(l<=r){
//     if(arr[l]<=arr[r]){
//         if(arr[l]>=lmax){
//             lmax=arr[l];
//         }
//         else{
//             cout<<lmax-arr[l]<<" ";
//             profit+=lmax-arr[l];
//         }
//         l++;
//     }
//     else{
//         if(arr[r]>=rmax){
//             rmax=arr[r];
//         }
//         else{
//             cout<<rmax-arr[r]<<" ";
//             profit+=rmax-arr[r];
//         }
//         r--;
//     }
// }
// cout<<profit<<endl;
//     return 0;
// }



// maximum cosecutive one
// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={1,0,1,1,0,0,1,1,1,0};
// int size=sizeof(arr)/sizeof(arr[0]);
// int res=0;
// for(int i=0; i<size; i++){
//     int curr=0;
//     for(int j=0; j<size; j++){
//         if(arr[j]==0){
//             curr=0;
//         }
//         else{
//             curr++;
//             res=max(res,curr);
//         }
//     }
// }
// cout<<res<<endl;
// return 0;
// }    


// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={1,0,1,1,0,0,1,1,1,0};
// int size=sizeof(arr)/sizeof(arr[0]);
// int res=0;int curr=0;
// for(int i=0; i<size; i++){
//     if(arr[i]==0){
//         curr=0;
//     }
//     else{
//         curr++;
//         res=max(res,curr);
//     }
// }
// cout<<res<<endl;
// return 0;
// }

// maximum sum subarray...
// naive solution
// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={1,8,-6,2,-5,4,-8,3,7};
// int size=sizeof(arr)/sizeof(arr[0]);
// int res=0; 
// for(int i=0; i<size; i++){
//     int curr=0;
//   for(int j=i; j<size; j++){
//         curr+=arr[j];
//         res=max(res,curr);
//   }
// }
// cout<<res<<endl;
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={1,8,-6,2,-5,4,-8,3,7};
// int size=sizeof(arr)/sizeof(arr[0]);
// int res=0; int maxsum=arr[0];
// for(int i=1; i<size; i++){
// maxsum=max(arr[i],maxsum+arr[i]);
// res=max(res,maxsum);
// }
// cout<<res<<endl;
// return 0;
// }

// 

// sliding window algorithm to find maximum sum of subarray...

// #include <iostream>
// using namespace std;

// int maxsumm(int arr[], int size, int ps, int k)
// {
//     int maxsum = ps;
    
//     for (int p=k; p<size;p++)
//     {
//         ps = ps + arr[p] - arr[p-k];
//         maxsum = max(maxsum, ps);
        
//     }
//     return maxsum;
// }

// int main()
// {
//     int arr[10] = {6, 8, -3, 2, -1, -7, -5, 3, 2, 11};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int k;
//     cin >> k;
//     int ksum = 0;
//     for (int i = 0; i < k; i++)
//     {
//         ksum += arr[i];
//     }

     
//     cout << maxsumm(arr, size, ksum, k) << endl;

//     return 0;
// }



//prefix sum array
// #include<iostream>
// using namespace std;
// int main(){
// int arr[5]={10, 20, 10, 5, 15};
// int size=5;
// int ps= 0;
// for(int i=0; i<size;i++){
//     ps=ps+arr[i];
//     arr[i]=ps;
// }
// for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }




// where we can use prefix sum technique 
/* 1 when we have to find sum of elements from a index to b index...
2. when we need to find equillibrium point in array... 
 eq point = left sum == right sum..



// Finding element in rotated array...

// #include<iostream>
// using namespace std;
// int tofindrindex(int arr[],int n){
//    int l=0;
//    int h=n;
//    int mid;
//       mid=(l+h)/2;
//    while(l<=h){
    
//    if(arr[mid]<arr[mid-1] ){
//        return mid;
//    }
//    if(arr[l]<arr[mid]){
//        l=mid+1;
//    }
//    else{
//        h=mid-1;
//    }
//    if(arr[mid]<arr[h]){
//        h=mid-1;
//    }
//    else{
//        l=mid+1;
//    }


// }
// }
// int maim(){

//     int arr[10]= {4,5,6,7,8,9,10,1,2,3};
//     int num;
//     cin>>num;
//      int index = tofindrindex(arr, 9);
//      cout<<index<<endl;
//      return 0;
// }


// modified rotated array...
// #include<iostream>
// using namespace std;
// int ans(int arr[], int key, int n){
// int mid;
// int l=0;
// int h=n;
// while(l<=h){
//     mid=(l+h)/2;
//     if(key==arr[mid]){
//         return mid;
//     }
//     if(arr[l]<arr[mid]){
//         if(key>=arr[l] && key<arr[mid]){
//             h=mid-1;
//         }
//         else {
//             l=mid+1;
//         }
//     }
//     else{
//         if(key>arr[mid] && key<=arr[h]){
//              l=mid+1;
//         }
//         else {
//             h=mid-1;
//         }
//     }
// }
// return -1;
// }
// int main(){
// int arr[10]= {20,30,50,70,90,2,4,7,12,13};
// int n;
// cin>>n;
//  cout<<ans( arr,n, 9)<<endl;

//     return 0;
// }



// majority element.....
/*
# include <iostream>
using namespace std;
int majorelement(int arr[], int n){
    int index =0; int count=1;
    for ( int i=1; i<n; i++){
        if(arr[i]==arr[index]){
            count++;
        }
        else{
            count --;
        }
        if(count==0){
            index++;
            count=1;
        }
    }
    return arr[index];
}
int main(){
int arr[10]= {2,3,4,2,7,2,3,2,7,2};
int n=10;
int me= majorelement(arr,n);
int t=0;
for(int i=0; i<n; i++){
    if(arr[i]==me){
   t++;
    }
}
if(t>n/2){
    cout<<me<<" is majority element."<<endl;
}
else{
    cout<<"not exist."<<endl;
}
    return 0; 
}

*/



// maximum circular sum subarray..
// brute force solution o(n^2)
/*
#include<bits/stdc++.h>
using namespace std;
void maxcsum(int arr[], int n){
    int res=arr[0];
    for(int i=0; i<n; i++){
        int currsum=arr[i];
        int maxsum=arr[i];
        for(int j=1; j<n; j++){
            int indx=(i+j)%n;
            currsum+=arr[indx];
            maxsum=max(maxsum,currsum);
        }
        res=max(maxsum,res);
    }
    cout<<res<<endl;
}
int main(){
int arr[]={5,-2,3,4};
maxcsum(arr,4);
    return 0;
}


*/
/*

#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[], int n){
    int res=-1;
      int currsum=arr[0];
        int maxsum=arr[0];
    for(int i=0; i<n; i++){
      currsum=max(arr[i],currsum+arr[i]);
      maxsum=max(maxsum,currsum);
     
    }
     res =max(maxsum,res);
   return res;
}
int final(int arr[], int n){
    int res=0;
    int mxsum=maxsum(arr,n);
    if(mxsum<0){
        return mxsum;
    }
    else{
      int arrsum=0;
      for(int i=0; i<n; i++){
        arrsum+=arr[i];
        arr[i]=arr[i]*(-1);
      }
      res=max(mxsum,arrsum+maxsum(arr,n));  
    }
    return res;
}
int main(){
int arr[]={5,-2,3,4};
cout<<final(arr, 4);
    return 0;
}
*/

// #include<bits/stdc++.h>
// using namespace std;
// bool cmp(string a, string b){
//     int i=0;
//     while(i<a.size()&&i<b.size()){
//         if(a[i]!=b[i])return a[i]>b[i];
//         else i++;
//     }
//     if(i==a.size()&&i!=b.size()){
//         return a[0]>b[i];
//     }
//     else if(i==b.size()&&i!=a.size()){
//         return a[i]>b[0];
//     }
//     else return a[i-1]=b[i-1];
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<string>v(n);
//     for(int i =0;i<n;i++)cin>>v[i];
//     sort(v.begin(),v.end(),cmp);
//     string res="";
//     for(auto it:v){
//         res+=it;
//     }
//     cout<<res<<endl;
//     return 0;
// }


/*
#include<bits/stdc++.h>
using namespace std;
void LR(int arr[], int n){
 int fele=arr[0];
for(int i=1; i<n; i++){
    arr[i-1]=arr[i];
}
arr[n-1]=fele;
}

int main(){
int arr[]={1,2,9,7,6,0,8};
int n=sizeof(arr)/sizeof(arr[0]);
// int cnt=0;
// for(int i=0; i<n; i++){
// if(arr[i]!=0){
//     swap(arr[cnt],arr[i]);
//     cnt++;
// }
// }
// cout<<"Before LR : ";
for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
// int d;
// cin>>d;
// M-1
// for(int i=0; i<d; i++){
// LR(arr,n);}

// M-2
// reverse(arr,arr+d);
// reverse(arr+d,arr+n);
// reverse(arr,arr+n);

// cout<<endl<<"After LR : ";
// for(int i=0; i<n; i++){
// cout<<arr[i]<<" ";
// }


// Leader Element

// int last= arr[n-1];
// cout<<endl<<last<<" ";
// for(int i=n-2; i>=0; i--){
//     if(last<arr[i]){
//         cout<<arr[i]<<" ";
//         last=arr[i];
//     }
// }

// maximum difference between two element with order arr[j] - arr[i] where j>i.
// int res=INT_MIN;
// for(int i=0; i<n; i++){
//     for(int j=i+1; j<n; j++){
//       res=max(res,(arr[j]-arr[i]));
//     }
// }
// cout<<res<<endl;
// efficient
// int minele=arr[0];
// int res=arr[1]-arr[0];
// for(int i=1; i<n; i++){
// res=max(res,arr[i]-minele);
// minele=min(minele,arr[i]);
// }
// cout<<endl<<res<<endl;
    return 0;
}

*/



