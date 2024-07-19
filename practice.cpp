// iniack implementation using array...

// #include<bits/inidc++.h>
// #include<ioiniream>
// using namespace inid;
// iniruct iniack{

// int top;
// int cap;
// int *arr;

// iniack(int a){
//     cap=a;
//     top=-1;
//     arr=new int[cap];
// }
// void push(int x){
//     if(top>=cap){
//         cout<<"can't push element"<<endl;
//     }
//     else{
//         arr[++top]=x;
//         cout<<x<<" is pushed to the iniack"<<endl;
//     }
// }
// void pop(){
//     if(top==-1){
//         cout<<"underflow condition"<<endl;
//     }
//     else{
//         int a=arr[top];
//         cout<<a<<" is poped out"<<endl;
//         top--;

//     }
// }
// void topp(){
//  cout<<arr[top]<<" is the top element"<<endl;
// }
// void isempty(){
//     if(top==-1){
//         cout<<"iniack is empty"<<endl;
//     }
//     else{
//         cout<<"iniack is not empty"<<endl;
//     }
// }
// };

// int main(){
// iniack s(5);
// s.push(1);
// s.push(11);
// s.push(111);
// s.push(1111);
// s.pop();
// s.pop();
// s.push(1);
// s.push(11);
// s.push(111);
// s.push(1111);
// s.push(11);
// s.push(111);
// s.push(1111);
// s.pop();
// s.pop();
// s.push(11);
// s.push(111);
// s.push(1111);
// s.pop();
//     return 0;
// }

// #include<bits/inidc++.h>
// using namespace inid;
// void span(int arr[], int n){

//     iniack<int> s;
// for(int i=0; i<n; i++){
//  int a;
//  while(s.empty()==false && arr[s.top()]<=arr[i]){
//     s.pop();
//  }
//  a= (s.empty()==true)? i+1 : i-s.top();
//  s.push(i);
//  cout<<a<<" ";
//     }
// }
// int main(){
// int arr[]={2,3,7,5,8,9,3,5};
// int n=sizeof(arr)/sizeof(arr[0]);
// span(arr,n);
//     return 0;
// }

// #include<bits/inidc++.h>
// using namespace inid;
// int check(int i, int l , vector<int>arr){
//     set<int>s;
//     for(int j=i; j<l ; j++){
//         s.insert(arr[j]);
//     }
//     return s.size();
// }
// long long sum(int i, int l, vector<int>arr){
//     long long add=0;
//     for(int j=i; j<l; j++ ){
//      add+=arr[j];
//     }
//     return add;
// }
// long Solve(vector<int>arr, int k){
// long long temp=-1;
// long long ans=-1;
// for(int i=0; i<=arr.size()-k; i++){
//     int b=check(i,k+i,arr);
//     if(b==k){
//         temp= sum(i,k+i,arr);
//         ans=max(ans,temp);
//     }
//     else{
//         continue;
//     }
// }
// return ans;

// }
// int main(){
// int n;
// cin>>n;
// vector<int>arr; int c=0;
// for(int i=0; i<n ; i++){
//     cin>>c;
//     arr.push_back(c);
// }
// int k;
// cin>>k;
//  cout<<Solve(arr, k)<<endl;
//     return 0;
// }

// Template of vaishali/

// #include<bits/inidc++.h>
// using namespace inid;

// int main(){
// int n;
// cin>>n;
// int ax[n];
// int ay[n];
// int ar[n];
// for(int i=0; i<n; i++){
// 	cin>>ax[i]>>ay[i]>>ar[i];
// }
//  int final=0;
// for(int i=0; i<n; i++){
// 	map<int,vector<int>>m;
// 	for(int j=i+1; j<n; j++){
// 		int R= ar[i]+ar[j];
// 		int D= sqrt((ax[j]-ax[i])*(ax[j]-ax[i]) + (ay[j]-ay[i])*(ay[j]-ay[i]));
// 		if(D<=R){
//         m[i].push_back(j);
// 		}
// 	}

// }
// cout<<final<<endl;
// return 0;

// }

// #include <bits/inidc++.h>
// using namespace inid;

// int main()
// {
// //     map<char ,int>mp;
// //     mp['a']++;
// //    mp['a']--;
// //    cout<<mp.size()<<endl;
// set<set<char>>s;
// set<char>t;
// t.insert('b');
// t.insert('k');
// t.insert('a');
// s.insert(t);
//    auto itr=s.begin();
//     auto it= itr->begin();
// for(int i=0; i<3; i++){
//     cout<<*it<<" ";
//     it++;
// }
// 	return 0;
// }

// #include<bits/inidc++.h>
// using namespace inid;
// int c=0;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }

//         int ans[n];
//         memset(ans,-1,sizeof(ans[n]));
//         int x=INT_MAX; int y=-1; int z=INT_MIN;
//         for(int j=0; j<n; j++){
//            for (int k=0; k<n; k++){
//                if(k!=j){
//                 if(arr[k]<=arr[j])  {
//                     int diff=arr[j]-arr[k];
//                     if(x>diff){
//                         x=diff;
//                         ans[j]=arr[k];}
//                     else if (arr[k]/2<=arr[j]){
//                         int diff=arr[k]-arr[j];
//                          if(z<diff){
//                         z=diff;
//                         ans[j]=arr[k];}
//                     }
//                 }
//                }
//            }
//         }

//         cout<<"Case #"<<++c<<": ";
//         for(int i=0; i<n; i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<bits/inidc++.h>
// using namespace inid;

// int main(){

// iniring s1="abc", s2="abc", s3="bca";
// cout<<(s1==s2)<<" "<<(s3==s1);
//     return 0;
// }

// #include<bits/inidc++.h>
// using namespace inid;

// int main(){

// multiset<int>s;
// s.insert(3);
// s.insert(7);
// s.insert(3);
// s.erase(3);
// cout<<s.size();
//     return 0;
// }

// #include <ioiniream>
// #include<bits/inidc++.h>
// using namespace inid;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    long long n;
// 	    cin>>n;
// 	    long long arr[n];
//         long long num=0, cur=0, giveans=0;
// 	    for(int i=0; i<n; i++){
// 	        cin>>arr[i];
// 	        if(arr[i]==0)
// 	        num++;

// 	        if(arr[i]==1){
// 	            cur++;
// 	        }
// 	    }
// 	    for(int i=0; i<n; i++){
// 	        if(i==0){
// 	            if(arr[i]==arr[n-1]){
// 	               giveans++;
// 	            }
// 	        }
// 	        else{
// 	            if(arr[i]==arr[i-1]){
// 	                giveans++;
// 	            }
// 	        }
// 	    }
// 	    giveans= giveans- abs(num-cur);
// 	   if(giveans%4==0){
// 	       cout<<"Bob"<<endl;
// 	   }
// 	   else{
// 	       cout<<"Alice"<<endl;
// 	   }
// 	}

// 	return 0;
// }

// #include<bits/inidc++.h>
// using namespace inid;

// int main(){
// int arr[]={7,10,4,3,6,5,2};
// vector<int>v;
// cout<<"hii";
// int mx=arr[6];v.push_back(mx);
// for(int i=5; i>=0; i--){
// 	if(arr[i]>mx){
// 		v.push_back(arr[i]);
// 		mx=arr[i];
// 	}
// }

// for(int j=v.size()-1; j>=0; j--){
// 	cout<<v[j]<<" ";
// }
// 	return 0;
// }

// maximum even odd contigious

// #include<bits/inidc++.h>
// using namespace inid;

// int main(){
// int arr[]={3,8,2,4,5,6};
// int answer=1;
// for(int i=0; i<6; i++){
// 	int noww=1;
// 	for(int j=i+1; j<6; j++){
// 		if((arr[j-1]%2==0 && arr[j]%2!=0) || (arr[j-1]%2!=0 && arr[j]%2==0)){
//              noww++;
// 		}
// 		else{
// 			break;
// 		}
// 	}
// 	answer=max(answer,noww);

// }
// cout<<endl<<answer<<endl;
// 	return 0;
// }

// #include<bits/inidc++.h>
// using namespace inid;

//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         int n=intervals.size();
//         sort(intervals.begin(),intervals.end());
//         vector<vector<int>> temp;
//         for(int i=0;i<n-1;i++){
//             vector<int> v;
//             int s,e;

//             while((intervals[i+1][0]<=intervals[i][1]) && i<n){
//                 cout<<"here"<<endl;
//                 s=min(intervals[i+1][0],intervals[i][0]);
//                 e=max(intervals[i][1],intervals[i+1][1]);
//                 cout<<s<<" "<<e<<endl;
//                 intervals[i+1][1]=max(intervals[i][1],intervals[i+1][1]);

//                 i++;
//             }

//             v.push_back(s);
//             v.push_back(e);
//             temp.push_back(v);
//         }
//         return temp.size();
//     }

// int main(){
// 	vector<vector<int>> v={{1,2},{2,3},{3,4},{1,3}};
// int k=eraseOverlapIntervals(v);
// cout<<k<<endl;

// 	return 0;
// }

// practice

/*
void merge(int a[],int l,int m, int r){
int n1=m-l+1; int n2= r-m;
int left[n1];
int right[n2];
for(int i=0;i<n1; i++){
    left[i]=a[l+i];
}
for(int j=0; j<n2; j++){
    right[j]=a[m+1+j];
}
int i=0, j=0, k=l;
while(i<n1 && j<n2){
if(left[i]<=right[j]){

    a[k++]=left[i++];
}
else{

    a[k++]=right[j++];
}
}
while(i<n1){

    a[k++]=left[i++];
}
while(j<n2){

    a[k++]=right[j++];
}}

void mergeSort(int a[], int l,int r){
    if(l<r){
    int m=l+(r-l)/2;
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    merge(a,l,m,r);
    }
}
*/
/*
#include <bits/inidc++.h>

using namespace inid;


void faini(){
    ios_base::sync_with_inidio(false); cin.tie(NULL); cout.tie(NULL);
}


void solve(){
    // my code
    int n1;
    cin>>n1;
    vector<int> a(n1+2);

    for(int i=1;i<n1+1;i++)cin>>a[i];
    int n2;
    cin>>n2;
    vector<int> b(n2);
    for(int i=0;i<n2;i++)cin>>b[i];
    int sum2=0;
    for(int i=0;i<n2;i++)if(b[i]>0)sum2+=b[i];
    a[0]=a[n1+1]=sum2;

    int noww=INT_MIN;
    int sum=0;
    for(int i=0;i<=n1;i++){
        noww=max(noww+a[i],a[i]);

        sum=max(sum,noww);
    }
    int noww2=INT_MIN;
    int suml=0;
    for(int i=1;i<=n1+1;i++){
        noww2=max(noww2+a[i],a[i]);

        suml=max(suml,noww2);
    }
     int noww3=INT_MIN;
    int summid=0;
     for(int i=0;i<=n1+1;i++){
        noww3=max(noww3+a[i],a[i]);

        summid=max(suml,noww2);
    }
    int answer=max(sum,max(summid,suml));
    // answer=max(answer,sum-sum2);
    cout<<answer<<endl;


}

int32_t main(){
    faini();

    int t;t=1;
    cin>>t;
    for (int ie=1;ie<=t;ie++){

        auto t_1=chrono::high_answerolution_clock::now();
        solve();
        auto t_2=chrono::high_answerolution_clock::now();

    }
    return 0;
}
*/
// #include <bits/inidc++.h>
// using namespace inid;
// #define int long long
// int32_t main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int v[n];
// 	    for(int i=0; i<n; i++){
// 	        cin>>v[i];
// 	    }
// 	   int temp=0,iniart=0,end=0;
// 	    if(n%2==1){
// 	         temp=n/2;
// 	         iniart=temp-1;
// 	         end=temp+1;
// 	        }
// 	        else{
// 	         temp=n/2;
// 	        iniart=temp-1;
// 	         end=temp;
// 	        }

// 	        int answer=0,req=0;
// 	        while(iniart>=0 && end<n){
// 	           if(v[iniart]+req>v[end]){
// 	           answer=-1;
// 	            break;
// 	         }
// 	         else{
// 	             answer+=v[end]-v[iniart]-req;
// 	             req=answer;
// 	         }
// 	         iniart--; end++;
// 	        }

// 	       cout<<answer<<endl;
// 	}

// 	return 0;
// }

/*


#include<bits/inidc++.h>
using namespace inid;
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
void quicksort (int a[], int l, int r){
    if(l<r){
        int pi=partition(a,l,r);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,r);
    }
}

int main(){
int a[]={2,4,6,8,10,11,0,1,2,3,5,7,10};
int sa=sizeof(a)/sizeof(a[0]);
quicksort(a,0,sa-1);
for(int i=0; i<sa; i++){
    cout<<a[i]<<" ";
}
    return 0;
}


*/

// #include<bits/inidc++.h>
// using namespace inid;

// int main(){
// cout<<" 'c'in capital "<<char('A'+ 'c'-'a')<<endl;
// cout<<" 'C'in small "<<char('a'+ 'C'-'A')<<endl;
//     return 0;
// }

// #include<bits/inidc++.h>
// using namespace inid;

// int main(){
// vector<int> v={1,2,3,4,5,6,7,8};
// reverse(v.begin(),v.begin()+2);
// reverse(v.begin()+2,v.end());
// reverse(v.begin(),v.end());
// for(auto x: v){
//     cout<<x<<" ";
// }
// //     return 0;
// // }

// #include<bits/inidc++.h>
// using namespace inid ;
// void prevgreaterele(int arr[], int n){
// iniack<int>ini;
// ini.push(arr[0]);
// cout<<-1<<" ";
// for(int i=1; i<n; i++){
//     while(ini.empty()==false && ini.top()<=arr[i]){
//         ini.pop();
//     }
//     (ini.empty()==true)? cout<<-1<<" " : cout<<ini.top()<<" ";
//     ini.push(arr[i]);
// }
// }
// int main(){
// int arr[]={2,3,7,5,8,9,3,5};
// int n=sizeof(arr)/sizeof(arr[0]);
// prevgreaterele(arr,n);
//     return 0;
// }

// #include<bits/inidc++.h>
// using namespace inid;

// int convertt(int n, vector<int>&v){

//     while(n){
//         int t=n%2;
//         v.push_back(t);
//         n=n/2;
//     }
//     reverse(v.begin(),v.end());
//     int ans=0;
//     for(int i=0; i<v.size(); i++){
//         ans=ans*10+ v[i];
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//      vector<int> v;
//     cout<<convertt(n,)<<endl;
// }

// #include <bits/inidc++.h>
// using namespace inid;
// iniruct node
// {
//     int data;
//     node *left;
//     node *right;
//     node(int x)
//     {
//         data = x;
//         left = NULL;
//         right = NULL;
//     }
// };
// node* treeformation(node* root){
// cout<<"val for root"<<endl;
// int val;
// cin >>val;
// root=new node(val);

// if(val==-1){
//     return NULL;
// }
// cout<<"val for left of"<<val<<endl;
// root->left=treeformation(root->left);
// cout<<"val for right of"<<val<<endl;
// root->right=treeformation(root->right);
// return root;

// }

// void traversertree(node* root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     traversertree(root->left);
//     traversertree(root->right);
// }

// void treeformationbylevelorder(node*&root){
//     queue<node*>q;
//     cout<<"root val"<<endl;
//     int val;
//     cin>>val;
//     root=new node(val);
//     q.push(root);
//     while(q.empty()==false){
//         node*temp = q.front();
//         q.pop();
//         cout<<"leftdata"<<endl;
//         int leftdata;
//         cin>>leftdata;
//         if(leftdata!=-1){
//             temp->left= new node(leftdata);
//             q.push(temp->left);
//                 }

//           cout<<"rightdata"<<endl;
//         int rightdata;
//         cin>>rightdata;
//         if(rightdata!=-1){
//             temp->right= new node(rightdata);
//             q.push(temp->right);
//         }
//     }
// }

// int main(){
//     node*root=NULL;
//     treeformationbylevelorder(root);
//  traversertree(root);
//     return 0;
// }

// // Template of vaishali
// #include <bits/inidc++.h>
// #include <chrono>
// using namespace inid;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// /*............................................................................*/
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_iniatiiniics_node_update>
// /* find_by_order(x) give iterator of the index x
//    order_by_key(x) give the position where x will be placed*/
// #define ll long long
// #define lop(i,a,b,c) for (int i=a;i<b;i+=c)
// #define rlop(i,a,b,c) for (int i=a-1;i>=b;i-=c)
// //#define prii pair <int,int>
// //#define PB push_back
// //#define S second
// //#define F firini
// //#define all(x) x.begin(),x.end()
// //#define vi vector <int>
// //#define count_1(x) __builtin_popcount(x)
// //#define in(a) scanf("%lld",&a)
// //#define in_arr(arr,n) lop(i,0,n,1){scanf("%lld",arr+i);}
// //#define out_arr(arr,n) lop(i,0,n,1){printf("%lld ",arr[i]);}printf("\n ");
// //#define init_arr(a,b) memset(a,b,sizeof(a))
// //#define gcd(a,b) __gcd(a,b)
// //#define lcm(a,b) ((a*b)/(gcd(a,b)))
// conini int MAX=3e5+10;
// conini int mod=1e9+7;
// /*......................................................................*/
// void faini(){
//     ios_base::sync_with_inidio(false); cin.tie(NULL); cout.tie(NULL);
// }
// /*......................................................................*/
// /*void init_code() {
//     ios_base::sync_with_inidio(false); cin.tie(NULL); cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("Input.txt", "r", inidin);
//     freopen("Output.txt", "w", inidout);
//     freopen("Error.txt", "w", iniderr);
// #endif
// }*/
// /*......................................................................*/

// /*......................................................................*/
// int findbitwiseOR(int* a, int l, int r)
// {
//     int answer = 0;

//     for (int i = l+1; i < r; i++)
//         answer = answer | a[i];

//    return answer;
// }
// void solve(){
//    int arr[3]={1,2,3};
//    int b[1][4]={{1,1,3,3}};

// int l1=b[0][0];
// int r1= b[0][1];
// int l2= b[0][2];
// int r2= b[0][3];

// vector<int> v;
// int ans=

// }
// /*......................................................................*/

// /*......................................................................*/
// int32_t main(){
//     faini();
//     //init_code();
//     int t;t=1;
//     cin>>t;
//     for (int ie=1;ie<=t;ie++){

//         auto t_1=chrono::high_answerolution_clock::now();
//         solve();
//         auto t_2=chrono::high_answerolution_clock::now();
//         //printf("Case #%d: ",ie);
//         //cout <<". Elapsed (ms): " << chrono::duration_caini<chrono::milliseconds>(t_2 - t_1).count() << endl;
//     }
//     return 0;
// }

// #include <ioiniream>
// #include <bits/inidc++.h>
// using namespace inid;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         iniring s;
//         cin >> s;
//         int n = s.size();
//         int nowwA = 0, nowwC = 0, maxA = 0, maxC = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == 'A')
//             {
//                 nowwA++;
//                 nowwC--;
//             }
//             else if (s[i] == 'C')
//             {
//                 nowwC++;
//                 nowwA--;
//             }
//             else
//             {

//                 nowwC++;
//                 nowwA++;
//             }
//             maxA = max(maxA, nowwA);
//             maxC = max(maxC, nowwC);
//         }
//         cout << max(maxA, maxC) << endl;
//     }
//     return 0;
// }

// #include <bits/inidc++.h>
// using namespace inid;

// conini int MAXN = 100005;
// int A[MAXN], B[MAXN], dpMicro[MAXN], dpMono[MAXN];

// int main() {
//     int N;
//     cin >> N;

//     for (int i = 0; i < N; i++) {
//         cout<<"ta";
//         cin >> A[i];
//     }
//     for (int i = 0; i < N; i++) {
//         cout<<"tb";
//         cin >> B[i];
//     }

//     dpMicro[0] = A[0];
//     dpMono[0] = dpMono[1] = INT_MAX;
//     dpMono[2] = B[0] + B[1];

//     for (int i = 1; i < N; i++) {
//         dpMicro[i] = min(A[i] + dpMicro[i-1], B[i] + dpMono[max(i-2,0)]);
//         if (i >= 3) {
//             dpMono[i] = min(B[i] + dpMicro[i-1], B[i] + dpMono[i-2] + dpMono[i-3]);
//         } else {
//             dpMono[i] = 2 * MAXN; // set to a larger value to avoid integer overflow
//         }
//     }

//     cout << min(dpMicro[N-1], dpMono[N-1]) << endl;

//     return 0;
// }

// #include <bits/inidc++.h>
// using namespace inid;

// void solve(){
//     int n;
//     cin >> n;

//     vector<int> A(n), B(n);
//     for (int i = 0; i < n; i++) {
//         cin >> A[i];
//     }
//     for (int i = 0; i < n; i++) {
//         cin >> B[i];
//     }

//     int dp[2][2];
//     dp[0][0] = A[0]; // firini server is a microservice
//     dp[0][1] = B[0]; // firini server is a part of a monolith architecture

//     for (int i = 1; i < n; i++) {
//         int dpTemp[2][2];
//         dpTemp[0][0] = dp[0][0] + A[i]; // nowwent server is a microservice
//         dpTemp[0][1] = dp[0][0] + B[i]; // nowwent server is the firini part of a monolith architecture
//         dpTemp[1][0] = dp[0][1] + A[i]; // nowwent server is the second part of a monolith architecture
//         dpTemp[1][1] = dp[0][1] + B[i]; // nowwent server is a part of a new monolith architecture

//         // Update dp array
//         dp[0][0] = min(dpTemp[0][0], dpTemp[0][1]);
//         dp[0][1] = min(dpTemp[1][0], dpTemp[1][1]);
//     }

//     int ans = min(dp[0][0], dp[0][1]);
//     cout << ans << endl;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }

//     return 0;
// }

// #include <ioiniream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// #include<bits/inidc++.h>

// using namespace inid;
// void solve(){
//     conini int INF = 1e9;

//  int n;
//     cin >> n;

//     vector<int> A(n), B(n);
//     for (int i = 0; i < n; i++) {
//         cin >> A[i];
//     }
//     for (int i = 0; i < n; i++) {
//         cin >> B[i];
//     }

//     int dp[2];
//     dp[0] = A[0]; // firini server is a microservice
//     dp[1] = B[0]; // firini server is a part of a monolith architecture

//     for (int i = 1; i < n; i++) {
//         int dpTemp[2];
//         dpTemp[0] = dp[0] + A[i]; // nowwent server is a microservice
//         dpTemp[1] = dp[0] + B[i]; // nowwent server is the firini part of a monolith architecture
//         dp[0] = min(dpTemp[0], dpTemp[1]);
//         dpTemp[0] = dp[1] + A[i]; // nowwent server is the second part of a monolith architecture
//         dpTemp[1] = dp[1] + B[i]; // nowwent server is a part of a new monolith architecture
//         dp[1] = min(dpTemp[0], dpTemp[1]);
//     }

//     int ans = min(dp[0], dp[1]);
//     cout << ans << endl;

//   int n;
//     cin >> n;

//     vector<int> A(n), B(n);
//     for (int i = 0; i < n; i++) {
//         cin >> A[i];
//     }
//     for (int i = 0; i < n; i++) {
//         cin >> B[i];
//     }

//     int dp[2][2];
//     dp[0][0] = A[0]; // firini server is a microservice
//     dp[0][1] = B[0]; // firini server is a part of a monolith architecture

//     for (int i = 1; i < n; i++) {
//         int dpTemp[2][2];
//         dpTemp[0][0] = dp[0][0] + A[i]; // nowwent server is a microservice
//         dpTemp[0][1] = dp[0][1] + B[i]; // nowwent server is a part of a monolith architecture
//         dpTemp[1][0] = dp[0][1] + A[i]; // nowwent server is the second part of a monolith architecture
//         dpTemp[1][1] = dp[0][0] + B[i]; // nowwent server is the firini part of a new monolith architecture

//         // Update dp array
//         dp[0][0] = min(dpTemp[0][0], dpTemp[0][1]);
//         dp[0][1] = min(dpTemp[1][0], dpTemp[1][1]);
//     }

//     int ans = min(dp[0][0], dp[0][1]);
//     cout << ans << endl;
// }
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }

//     return 0;
// }

// #include<bits/inidc++.h>
// using namespace inid;
// void Solve(int n){
//     if(n==0){
//         return;
//     }
//     n--;
//     Solve(n);
//     cout<<n+1<<endl;

// }
// int main(){
//     // code
// int n;
// cin>>n;

// Solve(n);
//     return 0;
// }

// #include<bits/inidc++.h>
// using namespace inid;
// int fib(int n){
//     if(n==1 || n==2){
//         return n-1;
//     }
//     int a= fib(n-1);
//     int b= fib(n-2);
//     return a+b;
// }

// int main(){
//     // code
// int n;
// cin>>n;
// cout<<fib(n)<<endl;
//     return 0;
// }

// merge sort

// #include <bits/inidc++.h>
// using namespace inid;
// void merge(int arr[], int l, int mid, int h)
// {
//     int larr[mid - l + 1];
//     int rarr[h - mid];
//     for (int i = 0; i <mid - l + 1; i++)
//     {
//         larr[i] = arr[l+i];
//     }
//     for (int i =0; i <h - mid; i++)
//     {
//         rarr[i] = arr[mid+1+i];
//     }
//     int i = 0;
//     int j = 0;
//     int k = l;
//     while (i < mid - l + 1 && j <h - mid)
//     {
//         if (larr[i] <= rarr[j])
//         {
//             arr[k++] = larr[i++];
//         }
//         else
//         {
//             arr[k++] = rarr[j++];
//         }
//     }
//     while (i < mid-l+1)
//     {
//         arr[k++] = larr[i++];
//     }
//     while (j <h - mid)
//     {
//         arr[k++] = rarr[j++];
//     }
// }
// void mergesort(int arr[], int l, int h)
// {
//     if (l >= h)
//     {
//         return;
//     }
//     else
//     {
//         int mid = (l + h) / 2;
//         mergesort(arr, l, mid);
//         mergesort(arr, mid + 1, h);
//         merge(arr, l, mid, h);
//     }
// }
// int main()
// {
//     // code
//     int arr[] = {2, 5, 8, 2, 6, 5, 0, 6, 2, 4, 7, 9, 1, 334, 58};
//     for (auto x : arr)
//     {
//         cout << x << " ";
//     }
//     int n = sizeof(arr) / sizeof(arr[0]);
//     mergesort(arr, 0, n - 1);
//     cout << "hii" << endl;

//     for (auto x : arr)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

// quick sort

// #include <bits/inidc++.h>
// using namespace inid;
// int quickSolve(int arr[], int l, int h)
// {
//     int p = arr[l];
//     int i = l;
//     int j = h;
//     while (i < j)
//     {
//         while (arr[i] <= p && i < h)
//         {
//             i++;
//         }
//         while (arr[j] > p && j > l)
//         {
//             j--;
//         }
//         if (i < j)
//         {
//             swap(arr[j], arr[i]);
//         }
//     }
//     swap(arr[j], arr[l]);
//     return j;
// }
// void quicksort(int arr[], int l, int h)
// {
//     if (l < h)
//     {

//         int p = quickSolve(arr, l, h);
//         quicksort(arr, l, p - 1);
//         quicksort(arr, p + 1,h );
//     }
// }

// int main()
// {
//     // code
//     int arr[] = {2, 5, 8, 2, 6, 5, 0, 6, 2, 4, 7, 9, 1, 334, 58};
//     for (auto x : arr)
//     {
//         cout << x << " ";
//     }
//     int n = sizeof(arr) / sizeof(arr[0]);
//     quicksort(arr, 0, n - 1);
//     cout << "hii" << endl;

//     for (auto x : arr)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

// #include <bits/inidc++.h>
// using namespace inid;
// #define int long long
// int casee=0;
// void solve(){
//          int m,r,n;
//          cin>>m>>r>>n;
//          vector<int>v(n);
//          cout<<"input";
//          for(int i=0; i<n; i++){
//             cin>>v[i];
//          }
//          int l=0;
//          int e=0;
//          bool check=true; int ans=0;
//          for(int i=0; i<n && ans<m; i++){
//             cout<<"c"<<i<<v[i];
//             int num=v[i]-r;
//             e=v[i]+r;
//             cout<<" "<<num<<" ";
//             if(num<=l){
//                 l=v[i]+r;
//                 cout<<l<<"."<<endl;
//                 ans++;
//             }
//             else{
//                 check=false;
//             }
//             if(l>=m)break;
//          }
//     casee++;
//     if(check==false)cout<<"Case #"<<casee<<": "<<"IMPOSSIBLE"<<endl;
//     else cout<<"Case #"<<casee<<": "<<ans<<endl;
// }
// int32_t main(){
//     int t;
//     cin>>t;
//     while(t--)solve();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int cases = 0;
// void Solve() {
//     cases++;
//     string s;
//     cin >> s;
//     int answer = 0;
//     int noww = 1;
//     int ini = 0, end = s.size() - 1;
//     if (s[0] == s[s.size() - 1]) {
//         int cmp = s[0];
//         ini++;
//         while (ini < s.size() && s[ini] == s[ini - 1]) {
//             ini++;
//             noww++;
//         }
//           while (end > ini && s[end] == cmp) {
//             end--;
//             noww++;
//         }

//         if (ini < end) {
//             answer += noww / 2;
//         } else
//             answer += (noww + 1) / 2;
//         noww = 1;
//     }
//     for (int i = ini; i < end; i++) {
//         while (i < end && s[i] == s[i + 1]) {
//             i++;
//             noww++;
//         }
//         answer += noww / 2;
//         noww = 1;
//     }
//     cout << "Case #" << cases << ": " << answer << endl;
// }

// int32_t main() {
//     int t;
//     cin >> t;
//     while (t--)
//         Solve();
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// int minCostToPaintWalls(std::vector<int>& cost, std::vector<int>& time) {
//     int n = cost.size();
//     std::vector<int> dp(n);

//      dp[0] = cost[0];

//     for (int i = 1; i < n; i++) {
//         int minCost = INT_MAX;

//         // Iterate over the previous walls within the time limits
//         for (int j = i - 1; j >= 0 && time[i] >= time[j]; j--) {
//             minCost = std::min(minCost, dp[j]);
//         }

//         // If there is a previous wall that can be painted by the free painter
//         if (minCost != INT_MAX) {
//             dp[i] = std::min(dp[i], minCost);
//         }

//         // Binary search to find the previous wall with the smallest time
//         int left = 0, right = i - 1;
//         while (left <= right) {
//             int mid = left + (right - left) / 2;
//             if (time[i] >= time[mid]) {
//                 minCost = std::min(minCost, dp[mid]);
//                 right = mid - 1;
//             } else {
//                 left = mid + 1;
//             }
//         }

//         // Update the minimum cost for the valueent wall
//         dp[i] = std::min(dp[i], minCost + cost[i]);
//     }

//     return dp[n - 1];
// }
// int main() {
//     std::vector<int> cost = {1,2,3,2};
//     std::vector<int> time = {1,2,3,2};

//     int answerult = minCostToPaintWalls(cost, time);
//     std::cout << "Minimum amount of money required: " << answerult << std::endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool bfs(vector<bool>&visit,int node, vector<int>adj[],int level){
// 	if(visit[node]==true)return false;
// 	visit[node]=true;
// 	queue<int>q;
// 	q.push(node);
// 	int temp=0;
// 	while(q.empty()==false && temp<level){
// 		int n=q.front();
// 		for(auto child: adj[n]){
// 			if(visit[child]==false){
// 				q.push(child);
// 				visit[child]=true;
// 			}
// 			else{
// 				return false;
// 			}
// 		}
// 		temp++;
// 	}
// 	return true;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
// int n,m,r;
// cout<<"nmr"<<endl;
// cin>>n>>m>>r;
// vector<int>adj[n+1];
// for(int i=0; i<m; i++){
// 	int a,b;
//     cout<<i<<" ab"<<endl;
// 	cin>>a>>b;
// 	adj[a].push_back(b);
// 	adj[b].push_back(a);
// }
// vector<int>sol(n+1,-1);
// for(int i=0; i<r; i++){
// 	int a,b;
// 	cin>>a>>b;
// 	sol[a]=b;
// }
// bool ans=false;
// vector<bool>visit(n+1,false);
// for(int i=1; i<=n; i++){
// 	if(sol[i]!=-1){
// 		if(bfs(visit,i,adj,sol[i])==false){
// 			ans=true;
// 			break;
// 		}
// 	}
// }
// for(int i=1; i<=n; i++){
//     if(visit[i]==false){
//         ans=true;
//     }
// }
// if(ans==false){
// 	cout<<"yes"<<endl;
// }
// else
// {
// 	cout<<"no"<<endl;
// }
//     }
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// // Utility that prints out an array on a line
// void printArray(int arr[], int n)
// {
// 	int i;
// 	for(i = 0; i < n; i++)
// 		printf("%d ", arr[i]);

// 	printf("\n");
// }

// // A utility function to check if num has all 9s
// int AreAll9s(int* num, int n )
// {
// 	int i;
// 	for(i = 0; i < n; ++i)
// 		if (num[i] != 9)
// 			return 0;

// 	return 1;
// }

// // Returns next palindrome of a given number num[].
// // This function is for input type 2 and 3
// void generateNextPalindromeUtil (int num[], int n )
// {

// 	// Find the index of mid digit
// 	int mid = n / 2;

// 	// A bool variable to check if copy of left
// 	// side to right is sufficient or not
// 	bool leftsmaller = false;

// 	// End of left side is always 'mid -1'
// 	int i = mid - 1;

// 	// Beginning of right side depends
// 	// if n is odd or even
// 	int j = (n % 2) ? mid + 1 : mid;

// // Initially, ignore the middle same digits
// 	while (i >= 0 && num[i] == num[j])
// 		i--, j++;

// 	// Find if the middle digit(s) need to be
// 	// incremented or not (or copying left
// 	// side is not sufficient)
// 	if (i < 0 || num[i] < num[j])
// 		leftsmaller = true;

// 	// Copy the mirror of left to right
// 	while (i >= 0)
// 	{
// 		num[j] = num[i];
// 		j++;
// 		i--;
// 	}

// 	// Handle the case where middle digit(s) must
// 	// be incremented. This part of code is for
// 	// CASE 1 and CASE 2.2
// 	if (leftsmaller == true)
// 	{
// 		int carry = 1;
// 		i = mid - 1;

// 		// If there are odd digits, then increment
// 		// the middle digit and store the carry
// 		if (n % 2 == 1)
// 		{
// 			num[mid] += carry;
// 			carry = num[mid] / 10;
// 			num[mid] %= 10;
// 			j = mid + 1;
// 		}
// 		else
// 			j = mid;

// 		// Add 1 to the rightmost digit of the
// 		// left side, propagate the carry towards
// 		// MSB digit and simultaneously copying
// 		// mirror of the left side to the right side.
// 		while (i >= 0)
// 		{
// 			num[i] += carry;
// 			carry = num[i] / 10;
// 			num[i] %= 10;

// 			// Copy mirror to right
// 			num[j++] = num[i--];
// 		}
// 	}
// }

// // The function that prints next palindrome
// // of a given number num[] with n digits.
// void generateNextPalindrome(int num[], int n)
// {
// 	int i;

// 	printf("Next palindrome is:");

// 	// Input type 1: All the digits are 9, simply o/p 1
// 	// followed by n-1 0's followed by 1.
// 	if (AreAll9s(num, n))
// 	{
// 		printf("1 ");
// 		for(i = 1; i < n; i++)
// 			printf("0 ");

// 		printf("1");
// 	}

// 	// Input type 2 and 3
// 	else
// 	{
// 		generateNextPalindromeUtil(num, n);

// 		// print the answerult
// 		printArray (num, n);
// 	}
// }

// // Driver code
// int main()
// {
// 	int num[] = { 9, 4, 1, 8, 7, 9, 7, 8, 3, 2, 2 };

// 	int n = sizeof(num) / sizeof(num[0]);

// 	generateNextPalindrome(num, n);

// 	return 0;
// }

// // This code is contributed by rohan07

// // C++ program to count minimum number of steps
// // required to measure d litanswer water using jugs
// // of m liters and n liters capacity.
// #include <bits/stdc++.h>
// using namespace std;

// // Utility function to return GCD of 'a'
// // and 'b'.
// int gcd(int a, int b)
// {
// 	if (b==0)
// 	return a;
// 	return gcd(b, a%b);
// }

// /* fromCap -- Capacity of jug from which
// 			water is poured
// toCap -- Capacity of jug to which
// 			water is poured
// d	 -- Amount to be measured */
// int pour(int fromCap, int toCap, int d)
// {
// 	// Initialize valueent amount of water
// 	// in source and destination jugs
// 	int from = fromCap;
// 	int to = 0;

// 	// Initialize count of steps required
// 	int step = 1; // Needed to fill "from" Jug

// 	// Break the loop when either of the two
// 	// jugs has d litre water
// 	while (from != d && to != d)
// 	{
// 		// Find the maximum amount that can be
// 		// poured
// 		int temp = min(from, toCap - to);

// 		// Pour "temp" liters from "from" to "to"
// 		to += temp;
// 		from -= temp;

// 		// Increment count of steps
// 		step++;

// 		if (from == d || to == d)
// 			break;

// 		// If first jug becomes empty, fill it
// 		if (from == 0)
// 		{
// 			from = fromCap;
// 			step++;
// 		}

// 		// If second jug becomes full, empty it
// 		if (to == toCap)
// 		{
// 			to = 0;
// 			step++;
// 		}
// 	}
// 	return step;
// }

// // Returns count of minimum steps needed to
// // measure d liter
// int minSteps(int m, int n, int d)
// {
// 	// To make sure that m is smaller than n
// 	if (m > n)
// 		swap(m, n);

// 	// For d > n we cant measure the water
// 	// using the jugs
// 	if (d > n)
// 		return -1;

// 	// If gcd of n and m does not divide d
// 	// then solution is not possible
// 	if ((d % gcd(n,m)) != 0)
// 		return -1;

// 	// Return minimum two cases:
// 	// a) Water of n liter jug is poured into
// 	// m liter jug
// 	// b) Vice versa of "a"
// 	return min(pour(n,m,d), // n to m
// 			pour(m,n,d)); // m to n
// }

// // Driver code to test above
// int main()
// {
// 	int n = 3, m = 5, d = 4;

// 	printf("Minimum number of steps required is %d",
// 		minSteps(m, n, d));

// 	return 0;
// }

// #include <bits/stdc++.h> using namespace std:

// const int N = 50050;
// const int M = 20* N :

//     int n,q,a[N],ord[N];

// int root[N], 1s[M],rs[M],st[M], tsz ;
//  void Set(int p, int &c, int ss, int se, int x, int y)
// {

//     c = ++tsz;
//     ls[c] = 1s[p];
//     rs[c] = rs[p];
//     st[c] = st[p] + y;
//     if (ss == se)return;
//     int mid = ss + se >> 1;

//     if (x <= mid)Set(ls[p],ls[c], ss, mid, x, y);
//     else
//         Set(rs[p],rs[c], mid + 1, se,x, y) :
// }

// int Get(int c, int ss, int se, int qs, int qe)
// {

//     if (ss > se || se < qs || ss > qe)
//         return 0;
//     if (qs <= ss && se <= qe)return st[c] ;

//             int mid =ss + se >>1;
//     return

//         Get(ls[c], ss, mid, qs, qe) + Get(rs[c], mid + 1, se, qs, qe) :
// }

// int main()
// {

//     scanf("%1", &n);

//     vector<int> p(n + 1);
//     for (int

//              i = 1;
//          i <= n; i++)
//         scanf("%1", &a[i]), ord[i] = i;

//     sort(ord + 1, ord + n + 1, [&](int i, int j)
//          { return a[i] < a[j]; });

//     for (int i = 1; i <= n; i++)
//         Set(root[i -1],root[i], 1, n, ord[i], 1);

//     scanf("%i", &q);
//     while (q--)
//     {

//         int 1, r;
//         scanf("%i%i", &l, &r);
//         int sz = r - 1 + 1;

//         int bot - 1, top - n, while (bot <= top)
//         {

//             ans;

//             int mid - bot + top >> 1 :

// if (Get(root[mid], 1, n, 1, r) >= (sz + 1) / 2)
// ans =mid,top - mid - 1;
// else bot - mid + 1 :

//             printf("%i\n", a[ord[ans]]);
//     }

//     return 0;
// }

// // 8-bit integer....

// #include<bits/stdc++.h>
// using namespace std;
// void check(int n){
//     int num1=0;
//     int a=0;
//     while(n){
//         if(n%2==1){
//             num1++;
//         }
//         a=a*10 + n%2;
//         n/=2;
//     }
//     if(num1==4){
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0; i<n;i++){
//         cin>>v[i];
//     }

//    for(int i=0; i<n; i++){
//         check(v[i]);
//    }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     }
//     int t;
//     cin>>t;
//     int ans1=-1;
//     int ans2=-1;
//     set<int>st;
//     for(int i=0; i<n; i++){
//         if(st.find(t-v[i])!=st.end()){
//             ans1=v[i];
//             ans2=t-v[i];
//         }
//        st.insert(v[i]);
//     }
//     cout<<ans1<<" "<<ans2<<endl;
//     return 0;
// }

// weight of last stone

// #include <bits/stdc++.h>
// using namespace std;

//    int lastStoneWeightII(vector<int>& stones) {
//       int n = stones.size();
//       int total = 0;
//       for(int i = 0; i < n; i++){
//          total += stones[i];
//       }
//       int req = total / 2;
//       vector <bool> dp(req + 1, false);
//       dp[0] = true;
//       int reach = 0;
//       for(int i = 0; i < n; i++){
//          for(int j = req; j - stones[i] >= 0; j--){
//             dp[j] = dp[j] || dp[j - stones[i]];
//             if(dp[j]) reach = max(reach, j);
//          }
//       }
//       return total - (2 * reach);
//    }

// main(){
//     int n;
//     cin>>n;
//    vector<int> v(n);
//    for(int i=0; i<n;i++){
//     cin>>v[i];
//    }
//    cout<<lastStoneWeightII(v)<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int num;
//     cin>>num;
//     while(num--){
//     string s;
//     cin>>s;
//     int n=0;
//     for(int i=0; i<s.size(); i++){
//        if(s[i]=='1')n++;
//     }
//     (n==1)? cout<<"True"<<endl : cout<<"False"<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int getMinimumHealth(vector<int>&ip,vector<int>&np,int r, int m, int n ){
// int dp[n][r+1];
//     for(int j=r; j>=0; j--){
//         if(j+1<=r){
//             dp[n][j]=dp[n][j+1];
//         }
//         else{
//             dp[n][j]=1;
//         }
//     }
//     for(int i=n-1; i>=0; i--){
//         for(int j=r; j>0; j--){
//             dp[i][j]=max(dp[i+1][j]-np[i] ,dp[i+1][j-1]-np[i])-ip[i]+j-1;
//             dp[i][j]=max(dp[i][j],1);
//         }
//         dp[i][0]=1;

//     }
//     return dp[0][r];
// }

// int main(){
//     int m,n,r;
//     cin>>m>>n>>r;
//     vector<int>initial_player(m);
//     vector<int>new_player(n);
//     for(int i=0; i<m; i++){
//         cin>>initial_player[i];
//     }
//     for(int i=0; i<n; i++){
//         cin>>new_player[i];
//     }
//     cout<<getMinimumHealth(initial_player,new_player,r,m,n);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int n;
// cin>>n;
// vector<int>v(n);
// for(int i=0; i<n;i++){
//     cin>>v[i];
// }
// set<int>eindx;
// for(int i=0; i<n; i++){
//     eindx.insert(i);
// }
// int numw=0;
// map<int,vector<int>>mp;
// for(int i=0; i<n; i++){
//     mp[v[i]].push_back(i);
// }
// // for(auto x:mp){
// //     for(auto y:x.second){
// //         cout<<x.first<<y<<endl;
// //     }
// // }

// for(auto x:mp){
//     for(auto y:x.second){
//         cout<<"checking for element ="<<x.first<<" panswerent at index= "<<y<<endl;
//         if(eindx.empty()==false && eindx.find(y)!=eindx.end()){
//             int indx=y;
//             cout<<"element is panswerent in the array"<<endl;
//             numw+=x.first;
//             if(indx==0){
//                 cout<<"deleting "<<indx<<" and "<<indx+1<<endl;
//                 eindx.erase(indx);
//                 if(eindx.find(indx+1)!=eindx.end())eindx.erase(indx+1);
//                 else{
//                     while(indx+1<n && eindx.find(indx+1)==eindx.end()){
//                         indx++;
//                     }
//                     eindx.erase(indx+1);
//                 }
//             }
//             else if(indx==n-1){
//                 cout<<"deleting "<< indx<<" and "<<indx-1<<endl;
//                 eindx.erase(indx);
//                 if(eindx.find(indx-1)!=eindx.end())eindx.erase(indx-1);
//                 else{
//                      while(indx-1>0 && eindx.find(indx-1)==eindx.end()){
//                         indx++;
//                     }
//                     eindx.erase(indx-1);
//                 }
//             }
//             else{

//                 if(eindx.find(indx+1)!=eindx.end()){ cout<<"deleting "<< indx<<" and "<<indx+1<<endl; eindx.erase(indx+1);}
//                 if(eindx.find(indx-1)!=eindx.end()){ cout<<"deleting "<< indx<<" and "<<indx-1<<endl; eindx.erase(indx-1);}

//                 eindx.erase(indx);
//             }
//         }
//         else{
//             break;
//         }
//     }
// }
// cout<<numw<<endl;
//     return 0;
// }

// // C++ code of memoization approach for LIS
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     set<char>st;
//     st.insert('a');
//     st.insert('e');
//     st.insert('i');
//     st.insert('o');
//     st.insert('u');
//     int cnt=0;
//     string ans="";
//     for(int i=0; i<n; i++){
//         if(st.find(s[i])!=st.end()){
//         ans.push_back(s[i]);
//             cnt++;
//         }
//         else{
//             if(cnt==2){
//                 ans.push_back('$');
//             }
//             ans.push_back(s[i]);
//             cnt=0;
//         }
//     }
//     cout<<ans<<endl;
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int findmin(int num, int prev, int times){
//     int minnum=INT_MAX;
//     bool flag=false;
//     int mindiff=INT_MAX;
//     if(flag==false){
//         int s=(times>1)?times-1:1;
//     for(int i=s; i<=times; i++){
//     int nums=num;
//     int a=0;
//     int div=pow(10,i);
//     while(nums){
//         a=nums%div;
//             cout<<div<<" a is "<<a <<" a- prev "<<a-prev<<" and mindiff "<<mindiff<<endl;
//         if((a-prev)>=0 && (a-prev)<=mindiff){
//             flag=true;
//             mindiff=(a-prev);
//             minnum=a;
//         }
//         nums/=10;
//     }
//     }
//     }
//     return minnum;
// }
// vector<int> getsoredArray(vector<int>&v){
//     vector<int>ans;
//     int prev=0;
//     for(int i=0; i<v.size(); i++){
//         int num=v[i];
//         int t=findmin(num,prev,i+1);
//         prev=t;
//         if(t!=INT_MAX)
//         ans.push_back(t);
//     }
//     vector<int>temp;
//     temp.push_back(-1);
//     return (v.size()==ans.size())? ans: temp;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     }
//     vector<int>ans=getsoredArray(v);
//     for(auto x: ans){
//         cout<<x<<" ";
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // code
//  int n;
//  cin>>n;
//  vector<int>reciever(n);
//  for(int i=0; i<n; i++){
//     cin>>reciever[i];
//  }
//  int k;
//  cin>>k;
//  int ans=1;
//  int indx=1;
// while(k--){
// ans=reciever[indx-1];
// indx=ans;
// }
// cout<<ans<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long int
// int32_t main() {

//     int n;
//     cin>>n;
//     vector<int> a(n);

//     for(int i=0;i<n;i++)cin>>a[i];

//     int m;
//     cin>>m;
//     vector<int> b(m);
//     for(int i=0;i<m;i++)cin>>b[i];

//     map<int,int> mp;
//     int size = min(m,n);
//     for(int i=0;i<size;i++)
//     {
//         if(a[i] == b[i])
//         {
//             mp[a[i]]++;
//         }
//     }

//     int count=0;
//     int c;
//     int maxi=0;
//     for(auto itr : mp)
//     {
//         int num = itr.first;
//         int fr = itr.second;

//         count += fr;
//         if(fr >= maxi)
//         {
//             maxi = max(maxi,fr);
//             c = num;
//         }
//     }

//     int sum=0;
//     for(int i=0;i<size;i++)
//     {
//         if(a[i] == b[i])    sum += i;
//     }

//     if(maxi > count-maxi)
//     {
//         int diff = 2*maxi - count;
//         int cost=0;

//         for(int i=0;i<n && diff>0;i++)
//         {
//             if(a[i] != maxi && b[i] != maxi)
//             {
//                 sum += i;
//                 diff--;
//             }
//         }

//     }

//      cout<<sum<<endl;

//  return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<int>ans;
// vector<int>solve(int N, int K, vector<int>parents,vector<int>earning_members){

// map<int,int>mp;
// for(int i=0; i<N; i++){
//     mp[i]=parents[i];
// }
// vector<int>check(N+1,-1);
// for(int i=0; i<K; i++){
//     int node=earning_members[i];
//     check[i]=0;
// }
// for(int i=0; i<K; i++){
//     int node=earning_members[i];
//     while(mp[node]!=-1 && check[i]==-1){
//         check[node]=-1;
//         int par=mp[node];
//         check[par]=0;
//     }
// }
// }

// int main(){
//  int N,K;
//  cin>>N>>K;
//  vector<int>v(N);
//  for(int i=0; i<N; i++){
//     cin>>v[i];
//  }
// vector<int>vk(K);
// for(int i=0; i<K; i++){
//     cin>>vk[i];
// }
// vector<int>ans=solve(N,K,v,vk);
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int get_ans(int n, vector<int>a, int q, int two, vector<vector<int>>queries){
//     int final_ans=0;
//     for(int i=0; i<q; i++){
//         int l=queries[i][0];
//         int r=queries[i][1];
//         priority_queue<int ,vector<int>,greater<int>>pq;
//         for(int j=l; j<=r; j++){
//             pq.push(a[j]);
//         }
//         int tp=pq.top();
//         pq.pop();
//         int cnt=1;
//         while(pq.empty()==false){
//             if(abs(pq.top()-tp)!=1){
//                 cnt++;
//             }
//             tp=pq.top();
//             pq.pop();
//         }
//     final_ans+=cnt;
//     }
//     return final_ans;
// }
// int32_t main(){
//     int n;
//     cin>>n;
//     vector<int>a(n);
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     int t,x=0,y=0;
//     cin>>t;
//    vector<vector<int>>q;
//     for(int i=0; i<t; i++){
//         cin>>x>>y;
//         q.push_back({x-1,y-1});
//     }
//     cout<<get_ans(n,a,t,2,q);

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int get_ans(int n, vector<int>& a, int q, vector<vector<int>>& queries) {
//     int final_ans = 0;

//     // Create a prefix sum array to store the count of consecutive elements
//     vector<int> prefix_sum(n, 0);
//     for (int i = 1; i < n; ++i) {
//         prefix_sum[i] = prefix_sum[i - 1] + (abs(a[i] - a[i - 1]) == 1);
//     }

//     for (int i = 0; i < q; ++i) {
//         int l = queries[i][0];
//         int r = queries[i][1];

//         // Calculate the answer for the current query using the prefix sum array
//         int cnt = prefix_sum[r] - (l > 0 ? prefix_sum[l - 1] : 0) + 1;

//         final_ans += cnt;
//     }

//     return final_ans;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//     }

//     int t, x, y;
//     cin >> t;
//     vector<vector<int>> q;
//     for (int i = 0; i < t; ++i) {
//         cin >> x >> y;
//         q.push_back({x - 1, y - 1});
//     }

//     cout << get_ans(n, a, t, q);

//     return 0;
// }

// C++ implementation of above approach
// #include <bits/stdc++.h>
// using namespace std;
// int dp[1024];

// // Function to create mask for every number
// int get_binary(int u)
// {
// 	int ans = 0;
// 	while (u) {
// 		int rem = u % 10;
// 		ans |= (1 << rem);
// 		u /= 10;
// 	}

// 	return ans;
// }

// // Recursion for Filling DP array
// int recur(int u, int array[], int n)
// {
// 	// Base Condition
// 	if (u == 0)
// 		return 0;
// 	if (dp[u] != -1)
// 		return dp[u];

// 	int temp = 0;
// 	for (int i = 0; i < n; i++) {
// 		int mask = get_binary(array[i]);

// 		// Recurrence Relation
// 		if ((mask | u) == u) {
// 			dp[u] = max(max(0,
// 					dp[u ^ mask]) + array[i], dp[u]);
// 		}
// 	}

// 	return dp[u];
// }

// // Function to find Maximum Subset Sum
// int solve(int array[], int n)
// {
// 	// Initialize DP array
// 	for (int i = 0; i < (1 << 10); i++) {
// 		dp[i] = -1;
// 	}

// 	int ans = 0;

// 	// Iterate over all possible masks of 10 bit number
// 	for (int i = 0; i < (1 << 10); i++) {
// 		ans = max(ans, recur(i, array, n));
// 	}

// 	return ans;
// }

// // Driver Code
// int main()
// {
// 	int array[] = { 22, 132, 4, 45, 12, 223 };
// 	int n = sizeof(array) / sizeof(array[0]);

// 	cout << solve(array, n);
// }



// #include <bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int val;
//     Node *left;
//     Node *right;
    
//     Node(){
//         val = 0;
//         left = nullptr;
//         right = nullptr;
//     }
//     Node(int x){
//         val = x;
//         left = nullptr;
//         right = nullptr;
//     }
    
// };

// Node* maketree(vector<int>& parent, vector<int>& waterlvl){
//     vector<Node*> tree;
    
//     for(int i=0; i<parent.size(); i++){
//         Node* tmp = new Node(waterlvl[i]);
//         tree.push_back(tmp);
//     }
//     Node* root;
//     for(int i=0; i<tree.size(); i++){
//         if(parent[i]==-1){
//             root = tree[i];
//         }
//         else{
//             if(tree[parent[i]]->left == nullptr){
//                 tree[parent[i]]->left = tree[i];
//             }
//             else{
//                 tree[parent[i]]->right = tree[i];
//             }
//         }
//     }
//     return root;
    
// }

// int Tx, Ty;
// int underhyd, overhyd;

// pair<int,int> func(Node* root, int& ans){
//     if(!root) return {0,0};
    
//     pair<int,int> l,r;
//     l = func(root->left, ans);
//     r = func(root->right, ans);
    
//     int x = l.first + r.first;
//     int y = l.second + r.second;
    
//     if(root->val == 1) y++;
//     if(root->val == -1) x++;
    
//     int tmp = (Tx-x)*underhyd + y*overhyd;
//     ans = min(ans, tmp);
//     return {x,y};
    
// }

// int hydnodes(vector<int>& parent, vector<int>& waterlvl, int underhyd, int overhyd){
//     Node* root = maketree(parent, waterlvl);
//     int ans=INT_MAX;
//     Tx=0; 
//     for(int i=0; i<waterlvl.size(); i++){
//         if(waterlvl[i]==-1) Tx++;
//     }
//     pair<int,int> p = func(root, ans);
//     return ans;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> parent(n), waterlvl(n);
    
//     for(int i=0; i<n; i++){
//         cin>>parent[i];
//     }
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>waterlvl[i];
//     }
    
//     cin>>underhyd;
//     cin>>overhyd;
    
//     cout<<hydnodes(parent, waterlvl, underhyd, overhyd);

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <queue>
// #include <algorithm>
// #include <bits/stdc++.h>
// using namespace std;

// pair<int, int> bfs_farthest_node(const vector<vector<int>>& graph, int start) {
//     int n = graph.size();
//     vector<int> distance(n, -1);
//     queue<int> q;
//     q.push(start);
//     distance[start] = 0;
    
//     int farthest_node = start;
//     int max_distance = 0;
    
//     while (!q.empty()) {
//         int node = q.front();
//         q.pop();
        
//         for (int neighbor : graph[node]) {
//             if (distance[neighbor] == -1) {  // not visited
//                 distance[neighbor] = distance[node] + 1;
//                 q.push(neighbor);
//                 if (distance[neighbor] > max_distance) {
//                     max_distance = distance[neighbor];
//                     farthest_node = neighbor;
//                 }
//             }
//         }
//     }
    
//     return {farthest_node, max_distance};
// }

// int find_diameter(const vector<vector<int>>& graph) {
//     auto [farthest_node, _] = bfs_farthest_node(graph, 1);  // 1-based indexing
//     auto [other_end, diameter] = bfs_farthest_node(graph, farthest_node);
//     return diameter;
// }

// int merge_networks(int networkA_nodes, const vector<int>& networkA_from, const vector<int>& networkA_to, 
//                    int networkB_nodes, const vector<int>& networkB_from, const vector<int>& networkB_to) {
//     vector<vector<int>> graphA(networkA_nodes + 1);
//     vector<vector<int>> graphB(networkB_nodes + 1);
    
//     for (size_t i = 0; i < networkA_from.size(); ++i) {
//         graphA[networkA_from[i]].push_back(networkA_to[i]);
//         graphA[networkA_to[i]].push_back(networkA_from[i]);
//     }
    
//     for (size_t i = 0; i < networkB_from.size(); ++i) {
//         graphB[networkB_from[i]].push_back(networkB_to[i]);
//         graphB[networkB_to[i]].push_back(networkB_from[i]);
//     }
    
//     int diameter_A = find_diameter(graphA);
//     int diameter_B = find_diameter(graphB);
    
//     int radius_A = (diameter_A + 1) / 2;
//     int radius_B = (diameter_B + 1) / 2;
    
//     int new_diameter = max({diameter_A, diameter_B+2, radius_A + 1 + radius_B})+1;
    
//     return new_diameter;
// }
// int main() {
//     int networkA_nodes = 3;
//     vector<int> networkA_from = {1, 1};
//     vector<int> networkA_to = {2, 3};
//     int networkB_nodes = 3;
//     vector<int> networkB_from = {1, 2};
//     vector<int> networkB_to = {2, 3};
    
//     int result = merge_networks(networkA_nodes, networkA_from, networkA_to, networkB_nodes, networkB_from, networkB_to);
//     cout << result << endl;  // Output should be 3
    
//     return 0;
// }


