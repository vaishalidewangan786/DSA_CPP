/*
Use case:
range queries like min,max,sum..etc
*/
//max in range;

#include<bits/stdc++.h>
using namespace std;


void build(vector<int>&segment,vector<int>&v,int start,int end, int pos){
    if(start==end){
        segment[pos]=v[start];
        return;
    }
    int mid= (start+end)/2;
    build(segment,v,start,mid,2*pos +1);
    build(segment,v,mid+1,end,2*pos+2);
    segment[pos]= max(segment[2*pos+1],segment[2*pos+2]);
}
int query(int indx, int start, int end, int l, int r,vector<int>&segment){
    if(start>=l && end<= r)// range is completely lies in given query range answer can be from this range
    {
        return segment[indx];
    }
    if(start> r || end<l)//out of range
    {
        return INT_MIN;
    }
    int mid= (start+end)/2;
    int left= query(2*indx+1,start,mid,l,r,segment);
    int right=query(2*indx+2,mid+1,end,l,r,segment);
    return max(left,right);
}

void update(int indx, int start, int end, int node, int val, vector<int>&segment,vector<int>&v){
    if(start==end){
        v[node]=val;
        segment[indx]=val;
        return;
    }
        int mid=(start+end)/2;
        if(node>=start && node<=mid){
            update(2*indx+1,start,mid,node,val,segment,v);
        }
        else{
            update(2*indx+2,mid+1,end,node,val,segment,v);
        }
        segment[indx]=max(segment[2*indx+1],segment[2*indx+2]);
    
}
// void rangeupdate(int pos, int start, int end, int l, int r, int val, vector<int>&segment,vector<int>&v){
//     if(start>=l && end<=r){
//         segment[pos]=max(segment[pos],val);
//         return;
//     }
//     if(r<start || l>end)return;
//     int mid= (start+end)/2;
//     rangeupdate(2*pos+1,start,mid,l,r,val,segment,v);
//     rangeupdate(2*pos+2,mid+1,end,l,r,val,segment,v);
//     segment[pos]=max(segment[2*pos+1],segment[2*pos+2]);
// }
int main(){
    // code
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int>segment(4*n);
    build(segment,v,0,n-1,0);
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<query(0,0,n-1,l,r,segment)<<endl;
    }
    // int indx=2;
    // int val=16;
    // update(0,0,n-1,indx,val,segment,v);
    // rangeupdate(0,0,n-1,2,4,12,segment,v);
    cout<<query(0,0,n-1,4,4,segment)<<endl;
    cout<<query(0,0,n-1,3,3,segment)<<endl;
    cout<<query(0,0,n-1,2,2,segment)<<endl;
    cout<<query(0,0,n-1,4,7,segment)<<endl;
    cout<<query(0,0,n-1,5,8,segment)<<endl;
    return 0;
}