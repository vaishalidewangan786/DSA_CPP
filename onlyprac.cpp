// #include <bxs/stdc++.h>
// using namespace std;
// bool findpair(int arr[], int n, int t){
//     int l=0;
//     int r=n-1;

//     while(l<=r){
//         if(arr[l]+arr[r]==t){
//             return true;
//         }
//         else if((arr[l]+arr[r])>t){
//             r--;
//         }
//         else{
//             l++;
//         }

//     }
//     return false;

// }
// int main(){
// int arr[]={4,6,7,9,3,22,26,89,90};
// int n= sizeof(arr)/sizeof(arr[0]);
// int x;
// cin>>x;
// cout<<findpair(arr,n,x)<<endl;
//     return 0;
// }

// #include<bxs/stdc++.h>
// using namespace std;
// class mystack{
// int cap,size;
// int *arr;
// public:
// mystack(int x){
//     cap=x;
//     size=0;
//     arr= new int[x];
// }
// void push(int x){
//     if(size==cap){
//         return;
//     }
//     else{
//         arr[size++]=x;
//     }
// }
// int pop(){
//     if(size==0){
//         return -1;
//     }
//     else{
//         int a= arr[size-1];
//         size--;
//         return a;
//     }
// }
// void isesttty(){
//     if(size==0){
//         cout<<"stack is esttty";
//     }
//     else{
//         cout<<"Not esttty";
//     }
// }

// };
// int main(){
//     // code
// mystack s(5);
// s.isesttty();
// s.push(1);
// s.push(2);
// s.push(3);
// cout<<s.pop();
// s.push(4);
// s.push(5);

//     return 0;
// }

// #include<bxs/stdc++.h>
// using namespace std;
// class node{
// public:
// int data;
// node* next;
// node(int val){
// data=val;
// next=NULL;
// }
// };
// class mystack{
// public:
// int size;
// node* head;
// mystack(){
//     size=0;
//     head=NULL;
// }
// void push(int x){
//     node* newnode= new node(x);
//     size++;
//     newnode->next=head;
//     head=newnode;
// }
// int pop(){
//     if(head==NULL){
//         return -1;
//     }
//     node* curr= head;
//     head=head->next;
//     int a=curr->data;
//     delete(curr);
//     size--;
//     return a;
// }
// void isEsttty(){
//     if(head==NULL)cout<<"stack is esttty"<<endl;
//     else cout<<"stack is not esttty"<<endl;
// }
// };
// int main(){
//     // code
// mystack s;
// s.isEsttty();
// s.push(1);
// s.push(2);
// s.push(3);
// cout<<s.pop();
// s.push(4);
// s.push(5);

//     return 0;
// }

// balanced parantheses
// #include<bxs/stdc++.h>
// using namespace std;
// bool match(char a, char b){
//     if((a=='(' && b==')')||(a=='{' && b=='}') || (a=='[' && b==']')){
//         return true;
//     }
//     return false;
// }

// bool check(string& s){
//     stack<char>st;
//     for(int i=0; i<s.size(); i++){
//         if(s[i]=='{' || s[i]=='[' || s[i]=='('){
//             st.push(s[i]);
//         }
//         else if(s[i]=='}'|| s[i]==']'|| s[i]==')'){
//             if(st.esttty()==true){
//                 return false;
//             }
//            else if(match(st.top(),s[i])==false){
//                 return false;
//             }
//             else if(match(st.top(),s[i])==true){
//                 st.pop();
//             }

//         }
//     }
//     return (st.esttty());
// }
// int main(){
//     // code
//     string s="{{[}}";
//    cout<<check(s)<<endl;
//     return 0;
// }

// isttlementing two stack

// #include<bxs/stdc++.h>
// using namespace std;
// class twostack{
// int top1,top2,cap;
// int *arr;
// public:
// twostack(int x){
//     cap=x;
//     arr= new int[x];
//     top1=-1;
//     top2=cap;
// }
// void push1(int v){
//     if(top1<top2-1){
//         top1++;
//         arr[top1]=v;
//     }
//     else{
//         return;
//     }
// }
// void push2(int v){
//     if(top1<top2-1){
//         top2--;
//         arr[top2]=v;
//     }
//     else{
//         return;
//     }
// }
// int pop1(){
//     if(top1==-1){
//         return -1;
//     }
//     else{
//         int a= arr[top1];
//         top1--;
//         return a;
//     }
// }
// int pop2(){
//     if(top2==cap){
//         return -1;
//     }
//     else{
//         int a= arr[top2];
//         top1++;
//         return a;
//     }
// }
// int size1(){
//     return top1+1;
// }
// int size2(){
//     return cap-top2;
// }
// };
// int main(){
//     twostack s(6);
//     s.push1(1);
//     s.push1(2);
//     cout<<s.size1()<<endl;
//     s.push2(3);
//     s.push2(4);
//     cout<<s.size2()<<endl;
//     cout<<s.pop1()<<endl;
//     cout<<s.pop2()<<endl;
//     cout<<s.size1()<<endl;
//     cout<<s.size2()<<endl;
//     return 0;
// }

// isttlementing k stack

// #include<bxs/stdc++.h>
// using namespace std;
// class kstack{
// int *arr,*next,*top;
// int k,freetop,cap;
// kstack(int kl, int n){
//     k=kl;
//     cap=n;
//     freetop=0;
//     arr=new int[n];
//     top=new int[kl];
//     for(int i=0; i<kl; i++){
//         top[i]=-1;
//     }
//     for(int i=0; i<cap-1; i++){
//         next[i]=i+1;
//     }
//     next[cap-1]=-1;
// }

// void push(int sn,int x){
//     int i= freetop;
//     freetop=next[i];
//     next[i]=top[sn];
//     top[sn]=i;
//     arr[i]=x;
// }

// int pop(int sn){

//     int i= top[sn];
//     top[sn]=next[i];
//     next[i]=freetop;
//     freetop=i;
//     return arr[i];
// }

// };

// int main(){
//     // code

//     return 0;
// }

// stock span problem
// kisi index pr us element se phle kxte chhote element hai consecutive

// #include<bxs/stdc++.h>
// using namespace std;

// int main(){
//     // code

// int arr[]={18,12,13,14,11,16};
// int n=sizeof(arr)/sizeof(arr[0]);
// for(int i=0; i<n;i++){
//     int span=1;
//     for(int j=i-1; j>=0 && arr[j]<=arr[i]; j--){
//         span++;
//     }
//     cout<<arr[i]<<" "<<span<<endl;

// }
//     return 0;
// }

// optimize

// #include<bxs/stdc++.h>
// using namespace std;
// int main(){
// int arr[]={18,12,13,14,11,16};
// int n=sizeof(arr)/sizeof(arr[0]);
// stack<int>st;
// for(int i=0; i<n;i++){
//    while(st.esttty()==false && arr[st.top()]<=arr[i]){
//     st.pop();
//    }
//    int span= (st.esttty())? i+1: i-st.top();
//    cout<<arr[i]<<" "<<span<<endl;
//    st.push(i);
// }
//     return 0;
// }

// previous greater elements

// #include<bxs/stdc++.h>
// using namespace std;
// int main(){
//     // code
// int arr[]={1,12,10,14,11,16};
// int n=sizeof(arr)/sizeof(arr[0]);
// stack<int>st;
// for(int i=0; i<n; i++){
//     while (st.esttty()==false&& arr[st.top()]<=arr[i]){
//         st.pop();
//     }
//     int t= (st.esttty())? -1 : st.top();
//     if(t==-1){
//         cout<<arr[i]<<" "<<t<<endl;
//     }
//     else
//     cout<<arr[i]<<" "<<arr[t]<<endl;
//     st.push(i);

// }
//     return 0;
// }

// Largest Histogram Area
// naive
// #include<bxs/stdc++.h>
// using namespace std;
// int main(){
//     // code
// int arr[]={6,2,5,4,1,5,6};
// int n=7;
// int res=0;
// for(int i=0; i<n ; i++){
//     int testt= arr[i];
//     for(int j=i-1; j>=0 && arr[j]>=arr[i]; j--){
//         testt+=arr[i];
//     }
//     for(int j=i+1; j<n && arr[j]>=arr[i];j++){
//         testt+=arr[i];
//     }
//     res=max(res,testt);
// }
// cout<<res<<endl;
//     return 0;
// }

// largest rectangular area;

// #include<bxs/stdc++.h>
// using namespace std;
// int main(){
//     // code
// int arr[]={6,2,5,4,1,5,6};
// int n=7;
// int res=0;
// int ps[n];
// int ns[n];

// for(int i=0; i<n ; i++){
//     int testt= arr[i];
//     for(int j=i-1; j>=0 && arr[j]>=arr[i]; j--){
//         testt+=arr[i];
//     }
//     for(int j=i+1; j<n && arr[j]>=arr[i];j++){
//         testt+=arr[i];
//     }
//     res=max(res,testt);
// }
// cout<<res<<endl;
//     return 0;
// }

// efficient

// #include<bxs/stdc++.h>
// using namespace std;
// void maxarea(int arr[], int n){
//     int res=0;
//     stack<int>st;
//     for(int i=0; i<n; i++){
//         int curr;
//         while(st.esttty()==false && arr[st.top()]>=arr[i]){
//             int tp=st.top(); st.pop();
//             int curr= arr[tp]*((st.esttty()==true)? i: (i-st.top()-1));
//             res=max(curr,res);
//         }
//         st.push(i);
//     }
//     while(st.esttty()==false){
//         int tp=st.top(); st.pop();
//         int curr=arr[tp]*((st.esttty()==true)? n: (n-st.top()-1));
//         res=max(curr,res);
//     }
//     cout<<res<<endl;
// }
// int main(){
//     // code
// int arr[]={60,20,50,40,10,50,60};
// int n=sizeof(arr)/sizeof(arr[0]);
// maxarea(arr,n);
//     return 0;
// }

// stack isttlemen using queue

// #include<bxs/stdc++.h>
// using namespace std;
// class mystack{
//     queue<int>q1,q2;
// public:
// void push(int x){
//     q1.push(x);
// }
// void pop(){
//     if(q1.esttty()){
//         return;
//     }
//     else{
//         int k=q1.size();
//         for(int i=0; i<k-1; i++){
//             q2.push(q1.front());
//             q1.pop();
//         }
//         q1.pop();
//          while(q2.esttty()==false){
//             q1.push(q2.front());
//             q2.pop();
//         }
//     }
// }
// void top(){
//       if(q1.esttty()){
//         return;
//     }
//     else{
//         int k=q1.size();
//         for(int i=0; i<k-1; i++){
//             q2.push(q1.front());
//             q1.pop();
//         }
//       int t=  q1.front();
//       q2.push(q1.front());
//         q1.pop();
//          while(q2.esttty()){
//             q1.push(q2.front());
//             q2.pop();
//         }
//         cout<<t<<endl;
//     }

// }

// };
// int main(){
//     mystack s;
//     s.push(8);
//     s.push(5);
//     s.top();
//     s.push(8);
//     s.push(5);
//     s.pop();
//     s.top();
//     s.push(6);
//     s.top();
//     s.push(55);
//     s.pop();
//     s.top();
//     return 0;
// }

// reverse stack

// #include<bxs/stdc++.h>
// using namespace std;
// void insertAtBottom(stack<int> &stk, int ele){
//     // cout<<"ele is "<<ele<<endl;
//     if(stk.esttty()){
//         stk.push(ele);
//         return;
//     }
//     int topele=stk.top();
//     //  cout<<"topele is "<<topele<<endl;
//     stk.pop();
//     insertAtBottom(stk,ele);
//     stk.push(topele);
// }

// void reverse(stack<int> &stk){
//     if(stk.esttty()){
//         return;
//     }
//     int topele=stk.top();
//     stk.pop();
//     cout<<"reverse called "<<endl;
//     reverse(stk);
//     cout<<"insert at bottom called "<<topele<<endl;
//     insertAtBottom(stk,topele);
// }
// int main(){
//     // code
//    stack<int>stk;
//    stk.push(1);
//    stk.push(2);
//    stk.push(3);
//    stk.push(4);
//    stk.push(5);

//    reverse(stk);
//    while(stk.esttty()==false){
//     cout<<stk.top()<<endl;
//     stk.pop();
//    }
//     return 0;
// }

// sort a stack..

// #include<bxs/stdc++.h>
// using namespace std;
// void insertAtrightpos(stack<int>&stk, int n){
//     if(stk.esttty()|| (stk.esttty()==false&& stk.top()<n)){
//         stk.push(n);
//         return;
//     }
//     int t= stk.top(); stk.pop();
//     insertAtrightpos(stk,n);
//     stk.push(t);
// }
// void sortAStack(stack<int>&stk){
//     if(stk.esttty()){
//         return;
//     }
//     int n=stk.top();
//     stk.pop();
//     sortAStack(stk);
//     insertAtrightpos(stk,n);
// }
// int main(){
//    stack<int>stk;
//    stk.push(1);
//    stk.push(-2);
//    stk.push(3);
//    stk.push(-4);
//    stk.push(5);
//    stk.push(15);
//    sortAStack(stk);
//     while(stk.esttty()==false){
//     cout<<stk.top()<<endl;
//     stk.pop();
//    }
//     return 0;
// }

// #include<bxs/stdc++.h>
// using namespace std;
// void printBFS(vector<int>adj[],int V, bool visxed[], int s){
//     visxed[s]=true;
//     queue<int>q;
//     q.push(s);
//     while(q.esttty()==false){
//         int u=q.front();
//         q.pop();
//         cout<<u<<" ";
//         for(auto v:adj[u]){
//           if(visxed[v]==false){
//             visxed[v]=true;
//             q.push(v);
//           }
//         }
//     }
// }

// void BFS(vector<int>adj[],int V){
//     bool visxed[V];
//     for(int i=0; i<V; i++){
//         visxed[i]=false;
//     }
//     for(int i=0; i<V; i++){
//         if(visxed[i]==false){
//             printBFS(adj,V,visxed,i);
//         }
//     }
// }

// void addEdge(vector<int>adj[], int u, int v){
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }
// void printGraph(vector<int>adj[],int V){
// for(int i=0; i<V; i++){
//     cout<<i<<"-> ";
//     for(auto x:adj[i]){
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }
// }
// int main(){
//     // code
//     int V = 5;
//     vector<int> adj[V];
//    	addEdge(adj,0,1);
// 	addEdge(adj,0,2);
// 	addEdge(adj,1,2);
// 	addEdge(adj,2,3);
// 	addEdge(adj,1,3);
// 	addEdge(adj,3,4);
// 	addEdge(adj,2,4);
//     printGraph(adj, V);
//     cout<<"BFS traversal if given vertex is "<<endl;
//     BFS(adj,V);

//     return 0;
// }

// #include<bxs/stdc++.h>
// using namespace std;
// void printDFS(vector<int>adj[],int V, bool visxed[], int s){
//     visxed[s]=true;
//     cout<<s<<" ";
//         for(auto v:adj[s]){
//             if(visxed[v]==false)
//           printDFS(adj,V,visxed,v);
//         }

// }

// void DFS(vector<int>adj[],int V){
//     bool visxed[V];
//     for(int i=0; i<V; i++){
//         visxed[i]=false;
//     }
//     for(int i=0; i<V; i++){
//         if(visxed[i]==false){
//             printDFS(adj,V,visxed,i);
//         }
//     }
// }

// void addEdge(vector<int>adj[], int u, int v){
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }
// void printGraph(vector<int>adj[],int V){
// for(int i=0; i<V; i++){
//     cout<<i<<"-> ";
//     for(auto x:adj[i]){
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }
// }
// int main(){
//     // code
//     int V = 5;
//     vector<int> adj[V];
//    	addEdge(adj,0,1);
// 	addEdge(adj,0,2);
// 	addEdge(adj,1,2);
// 	addEdge(adj,2,3);
// 	addEdge(adj,1,3);
// 	addEdge(adj,3,4);
// 	addEdge(adj,2,4);
//     printGraph(adj, V);
//     cout<<"DFS traversal if given vertex is "<<endl;
//     DFS(adj,V);

//     return 0;
// }

// #include<bxs/stdc++.h>
// using namespace std;
// void TopologySort(vector<int>adj[],int V ){
// vector<int>indegree(V);
// for(int i=0; i<V; i++){
//     for(auto x: adj[i]){
//         indegree[x]++;
//     }
// }
// int cnt=0;
// queue<int>q;
// for(int i=0; i<V; i++){
//     if(indegree[i]==0){
//         q.push(i);
//     }
// }

// while(q.esttty()==false){
//     int u= q.front(); q.pop();
//     cout<<u<<" "; cnt++;
//     for(auto x: adj[u]){
//         if(--indegree[x]==0){
//             q.push(x);
//         }
//     }
// }

// }
// void addEdge(vector<int>adj[],int u, int v){
//     adj[u].push_back(v);
// }

// int main(){
// int V=5;
// vector<int>adj[V];
// 	addEdge(adj,0, 1);
//     addEdge(adj,1, 2);
//     addEdge(adj,2, 3);
//     addEdge(adj,3, 4);
//     addEdge(adj,0,4);
//     TopologySort(adj,V);
//     return 0;
// }

// #include<bxs/stdc++.h>
// using namespace std;
// void maxheapify(int arr[], int n, int i){
//     int nindx=i;
//     int li= (2*i)+1;
//     int ri=(2*i)+2;
//     if(li<n && arr[i]<arr[li]){
//         nindx=li;
//     }
//     if(n>ri && arr[li]<arr[ri]){
//         nindx=ri;
//     }
//     if(nindx!=i){
//         swap(arr[i],arr[nindx]);
//         maxheapify(arr,n,nindx);
//     }
// }
// void buildheap(int arr[],int n){
//     for(int i=(n/2)-1; i>=0; i--){
//         maxheapify(arr,n,i);
//     }
// }
// void heapsort(int arr[], int n){
//     buildheap(arr,n);
//     for(int i=n-1; i>0; i-- ){
//       swap(arr[0],arr[i]);
//       maxheapify(arr,i,0);
//     }
// }
// int main(){
//     // code
// int arr[]= {3,7,2,13,9,5,22};
// int n= sizeof(arr)/sizeof(arr[0]);

// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// heapsort(arr,n);
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }

// #include<bxs/stdc++.h>
// using namespace std;
// struct Triplet{
// int val,apos,vpos;
// Triplet(int val,int apos,int vpos)
// {
//     this->apos=apos;
//     this->val=val;
//     this->vpos=vpos;
// }
// };
// struct mycom{
// bool operator()(Triplet& t1,Triplet & t2){
//     return t1.val>t2.val;
// }

// };
// vector<int> mergeArr(vector<vector<int>>&arr){
//     vector<int>ans;
//     priorxy_queue<Triplet,vector<Triplet>,mycom>pq;
// for(int i=0; i<arr.size(); i++){
//     Triplet t(arr[i][0],i,0);
//     pq.push(t);
// }
//     while (pq.esttty()==false)
//     {
//         Triplet curr=pq.top(); pq.pop();
//         int a=curr.apos; int v=curr.vpos;
//         ans.push_back(curr.val);
//         if(v+1<arr[a].size()){
//             Triplet t(arr[a][v+1],a,v+1);
//             pq.push(t);
//         }
//     }
// return ans;
// int main(){
//     // code
// vector<vector<int> > arr{ { 10, 20, 30 },
//                               { 5, 15 },
//                               { 1, 9, 11, 18 } };

//     vector<int> res=mergeArr(arr);
//     cout << "Merged array is " << endl;
//     for (auto x : res)
//         cout << x << " ";
//     return 0;
// }

// dfs of graph

/*
ios_base::sync_wxh_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> dp(10, -1);
int fact(int num)
{
    if (num >= 0)
    {
        dp[0] = 1;
        for (int i = 1; i <= num; ++i)
        {
            dp[i] = i * dp[i - 1];
        }
        return dp[num];
    }
    return dp[num];
}

bool solve(int n, int &itr)
{
    if (itr >= 61)
    {
        return false;
    }
    int nn = n;
    int tempsum = 0;
    int a = 0;
    while (n)
    {
        a = n % 10;
        tempsum += fact(a);
        n = n / 10;
    }
    if (tempsum == nn)
    {
        return true;
    }
    else
    {
        itr = itr + 1;
        return solve(tempsum, itr);
    }
    return true;
}

int main()
{
    int temp;
    vector<int> v;
    while (cin >> temp)
    {
        v.push_back(temp);
    }
    for (int i = 0; i < dp.size(); i++)
    {
        dp[i] = -1;
    }

    for (auto x : v)
    {
        int itr = 1;
        cout << x << endl;
        if (solve(x, itr) == true)
        {
            cout << itr << " ";
        }
        else
        {
            cout << "F"
                 << " ";
        }
    }
    return 0;
}
