// // heap data structure to implement prioriti queue....
// // heap implementation + insertion + heapify + extractMin 


#include<bits/stdc++.h>
using namespace std;
class minheap{
public:
int cap;
int size; 
int *arr;
minheap(int c){
    cap=c;
    size=0;
    arr= new int[c];
}
int left(int i) {return (2*i +1);}
int right(int i){return (2*i+2);}
int parent(int i){return (i-1)/2;}
void insert(int x){
    if(size==cap){
        return;
    }
    else{
        size++;
        arr[size-1]=x;
        for(int i=size-1; i>=0 && arr[parent(i)]>arr[i];){
              swap(arr[parent(i)],arr[i]);
              i=parent(i);
        }
    }
}
void heapify(int indx){
    int newindx=indx;
    int li=left(indx); int ri=right(indx);
    if(li<size && arr[li]<arr[indx]){
        newindx=left(indx);
    }
    if(ri<size && arr[ri]<arr[left(indx)]){
        newindx=right(indx);
    }   
    if(newindx!=indx){
    swap(arr[indx],arr[newindx]);
    heapify(newindx);
    }
}
int extractmin(){
    if(size==0){
        return INT_MIN;
    }
    if(size==1){
        size--;
        return arr[0];
    }
    swap(arr[0], arr[size-1]);
    size--;
    heapify(0);
    return arr[size];
}
void decreasekey(int i, int x){
    arr[i]=x;
    for(int j=i; j>=0 && arr[i]<arr[parent(i)];){
        swap(arr[i],arr[parent(i)]);
        i=parent(i);
    }
}
void deletekey(int i){
   decreasekey(i,INT_MIN);
   extractmin();
}
void buildheap(int arr[],int sz){
for(int i=(sz-2)/2; i>=0; i++){
    heapify(i);
}
}
void print(){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};

int main(){
minheap myheap(20);
myheap.insert(4);
myheap.insert(8);
myheap.insert(2);
myheap.insert(7);
myheap.insert(9);
myheap.insert(18);
myheap.insert(25);
myheap.insert(17);
myheap.insert(3);
myheap.insert(13);
myheap.insert(23);
myheap.insert(72);
myheap.print();
cout<<"extractmin : ";
myheap.extractmin();
myheap.print();
cout<<"extractmin : ";
myheap.extractmin();
myheap.print();
cout<<"decreasekey : ";
myheap.decreasekey(2,5);
myheap.print();
cout<<"deletekey : ";
myheap.deletekey(5);
myheap.print();
    return 0;
}



// heap sort
// approach: we will be given an array first we will make max heap if sorting is in increasing order
// else we use minheap; 
/*
#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[], int i,int n){
    int maxindex=i;
    int li= 2*i+1;
    int ri= 2*i+2;
    if(li<n && arr[i]<arr[li]){
        maxindex=li;
    }
    if(ri<n && arr[li]<arr[ri]){
        maxindex=ri;
    } 
    if(maxindex!=i){
        swap(arr[i],arr[maxindex]);
        heapify(arr,maxindex,n);
    }

}
void buildheap(int arr[], int n){
    for(int i=n/2-1; i>=0; i--){
        heapify(arr,i,n);
    }
}
void heapsort(int arr[], int n){
    buildheap(arr,n);
    for (int i=n-1; i>0; i--) 
	{ 
		swap(arr[0], arr[i]);
		heapify(arr, 0, i); 
	}
}
int main(){
int arr[]= {3,7,2,13,9,5,22};
int n= sizeof(arr)/sizeof(arr[0]);

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
heapsort(arr,n);
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
*/

// priority queue..

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int arr[]= {3,7,2,13,9,5,22};
// // max heap 
// int n= sizeof(arr)/sizeof(arr[0]);
// priority_queue<int>pq(arr,arr+n);

// // min heap
// priority_queue<int,vector<int>, greater<int>>pqmin (arr,arr+n);
// cout<<"maxheap"<<endl;
// while(pq.empty()==false){
//     cout<<pq.top()<<" ";
//     pq.pop();
// }
// cout<<endl<<"minheap"<<endl;
// while(pqmin.empty()==false){
//     cout<<pqmin.top()<<" ";
//     pqmin.pop();
// }
// return 0;
// }


// Sort K-sort elements

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int arr[]={9,8,7,19,18};
// int n=sizeof(arr)/sizeof(arr[0]);
// int k=2;
// priority_queue<int, vector<int>, greater<int>>pq;
// for(int i=0; i<=k; i++){
//     pq.push(arr[i]);
// }
// int indx=0;
// for(int i=k+1; i<n; i++){
//     arr[indx++]=pq.top();
//     pq.pop();
//     pq.push(arr[i]);
// }
// while(pq.empty()==false){
//     arr[indx++]=pq.top();
//     pq.pop();
// }

// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }



// K largest elements

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int arr[]={9,8,7,19,18,34};
// int n=sizeof(arr)/sizeof(arr[0]);
// int k=3;
// priority_queue<int, vector<int>, greater<int>>pq;
// for(int i=0; i<k; i++){
//     pq.push(arr[i]);
// }

// for(int i=k; i<n; i++){
//    if(pq.top()<arr[i]){
//     pq.pop();
//     pq.push(arr[i]);
//    }
// }
// while(pq.empty()==false){
//   cout<<pq.top()<<" ";
//   pq.pop();
// }

//     return 0;
// }


// K-closest element

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int arr[]={ 10,30,5,40,38,80,70 };
// int n=sizeof(arr)/sizeof(arr[0]);
// int k=5; int x= 38;
// priority_queue< pair<int,int> >pq;
// for(int i=0; i<k; i++){
//     pq.push({abs(arr[i]-x),i});
// }
// int indx=0;
// for(int i=k; i<n; i++){
//      int diff = abs(arr[i] - x); 
//     if(pq.top().first > diff){
//         pq.pop();
//         pq.push({diff,i});
//     }
// }
// while(pq.empty()==false){
//     cout<<arr[pq.top().second]<<" ";
//     pq.pop();
// }
//     return 0;
// }

// merge k sorted array
// approach 1: take all the element ans sort the whole array;
// approach 2: apply merge sort in two array then call for others
// approach 3

// #include <bits/stdc++.h>
// using namespace std;
// struct Triplet{
//     int val,aPos,vPos;
//     Triplet(int v,int ap, int vp){
//         val=v;aPos=ap;vPos=vp;
//     }
// };
// struct MyComp{
//     bool operator()(Triplet &t1,Triplet &t2){
//         return t1.val>t2.val;
//     }
// };
// vector<int> mergeArr(vector<vector<int> > &arr) 
// { 
//     vector<int> res;       
//     priority_queue <Triplet, vector<Triplet>,MyComp> pq;   
//     for(int i=0;i<arr.size();i++){
//         Triplet t(arr[i][0],i,0);
//         pq.push(t);
//     }   
//     while(pq.empty()==false){
//         Triplet curr=pq.top();pq.pop();
//         res.push_back(curr.val);
//         int ap=curr.aPos;int vp=curr.vPos;
//         if(vp+1<arr[ap].size()){
//             Triplet t(arr[ap][vp+1],ap,vp+1);
//             pq.push(t);
//         }
//     }
//     return res;
// }

// int main()
// {
// 	vector<vector<int> > arr{ { 10, 20, 30 }, 
//                               { 5, 15 }, 
//                               { 1, 9, 11, 18 } }; 
  
//     vector<int> res=mergeArr(arr);  
//     cout << "Merged array is " << endl; 
//     for (auto x : res) 
//         cout << x << " "; 
  
//     return 0; 
// }

//________________________________________________________________________________________________

// Median of stream imp..

// #include<bits/stdc++.h>
// using namespace std;
// void medofstream(int arr[], int n){
//     priority_queue<int>one;
//     priority_queue<int,vector<int>,greater<int>>two;
//     one.push(arr[0]);
//     cout<<arr[0]<<" ";
//     for(int i=1; i<n; i++){
//         if(one.size()>two.size()){
//             if(one.top()<arr[i]){
//                 two.push(arr[i]);
//             }
//             else{
//                 two.push(one.top());
//                 one.pop();
//                 one.push(arr[i]);
//             }
//             cout<<(one.top()+two.top())/2.0<<" ";
//         }
//         else{
//             if(one.top()>=arr[i]){
//                 one.push(arr[i]);
//             }
//             else{
//                 two.push(arr[i]);
//                 one.push(two.top());
//                 two.pop();
//             }
//             cout<<one.top()<<" ";

//         }
//     }
// }

// int main(){
//     // code
// int arr[]={12,15,10,5,8,7,16};
// int n=sizeof(arr)/sizeof(arr[0]);
// medofstream(arr,n);

//     return 0;
// }


// kth smallest and kth sortest element in array;
// for small -maxheap for large - minheap
/*
#include<bits/stdc++.h>
using namespace std;
int kthsmallest(int arr[], int n,int k){
priority_queue<int>pq;
for(int i=0; i<k; i++){
    pq.push(arr[i]);
}
for(int j=k ; j<n; j++){
    if(pq.top()> arr[j]){
        pq.pop();
        pq.push(arr[j]);
    }
}
return pq.top();
}
int kthlargestest(int arr[], int n,int k){
priority_queue<int,vector<int>, greater<int>>pq;
for(int i=0; i<k; i++){
    pq.push(arr[i]);
}
for(int j=k ; j<n; j++){
    if(pq.top()< arr[j]){
        pq.pop();
        pq.push(arr[j]);
    }
}
return pq.top();

}
int main(){
int arr[]={ 10,30,5,40,38,80,70 };
int n=sizeof(arr)/sizeof(arr[0]);
for(int j=0 ; j<n; j++){
cout<<arr[j]<<" ";
}
cout<<endl;
cout<<"kthsmallest :"<<kthsmallest(arr,n,3)<<endl;
cout<<"kthlargest :"<<kthlargestest(arr,n,3)<<endl;
return 0;
}
*/

// is given binary tree is a heap/maxheap..

// approach:- calculate maxnumber of node in given binary tree using recursion
// check if it is a complete binery tree- if any point index if greater than maxnumber 
// check maxheap/ minheap parent child comparison..
