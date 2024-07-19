// #include <bits/stdc++.h>
// #include <chrono>
// using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// /*............................................................................*/ 
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
// /* find_by_order(x) give iterator of the index x 
//    order_by_key(x) give the position where x will be placed*/
// #define ll long long
// #define lop(i,a,b,c) for (int i=a;i<b;i+=c)
// #define rlop(i,a,b,c) for (int i=a-1;i>=b;i-=c)
// //#define prii pair <int,int>
// //#define PB push_back
// //#define S second
// //#define F first
// //#define all(x) x.begin(),x.end()
// //#define vi vector <int>
// //#define count_1(x) __builtin_popcount(x)
// //#define in(a) scanf("%lld",&a)
// //#define in_arr(arr,n) lop(i,0,n,1){scanf("%lld",arr+i);}
// //#define out_arr(arr,n) lop(i,0,n,1){printf("%lld ",arr[i]);}printf("\n ");
// //#define init_arr(a,b) memset(a,b,sizeof(a))
// //#define gcd(a,b) __gcd(a,b)
// //#define lcm(a,b) ((a*b)/(gcd(a,b)))
// const int MAX=3e5+10;
// const int mod=1e9+7;
// /*......................................................................*/
// void fast(){
//     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// }
// /*......................................................................*/
// /*void init_code() {
//     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("Input.txt", "r", stdin);
//     freopen("Output.txt", "w", stdout);
//     freopen("Error.txt", "w", stderr);
// #endif
// }*/
// /*......................................................................*/

// void leftRotate(vector<int> v,int l, int h){
//         while(l<h){
//             swap(v[l],v[h]);
//             l++;
//             h--;
//         }
// }

// int cases=0;
// /*......................................................................*/
// void solve(){
//     // my code
//     cases++;
//     int n,k;
//     cin>>n>>k;
//     vector<int> a(n);
//     vector<int> b(n);
//     for(int i=0;i<n;i++)cin>>a[i];
//     for(int i=0;i<n;i++)cin>>b[i];
//     int start=0,start2=0;
//     for(int i=0;i<n;i++){
//         if(b[i]==a[start]){
//             start2=i;
//             break;
//         }
//     }
//     bool flag=true;
//     while(start<n){
//         if(a[start]!=b[start2]){
//             flag=false;
//             break;
//         }
//         start++;
//         start2=(start2+1)%n;
//     }
//     if(flag==false){
//         cout<<"Case #"<<cases<<": "<<"NO"<<endl;
//         return;
//     }
//     else{
//         if(k!=1 && start==start2){
//             cout<<"Case #"<<cases<<": "<<"YES"<<endl;
//             return;
//         }
//         if(k==1 && start==start2){
//             cout<<"Case #"<<cases<<": "<<"NO"<<endl;
//             return;
//         }
//         if(n==2 && start==start2 && k%2==0){
//             cout<<"Case #"<<cases<<": "<<"YES"<<endl;
//             return;
//         }
//         if(n==2 && start==start2 && k%2!=0){
//             cout<<"Case #"<<cases<<": "<<"NO"<<endl;
//             return;
//         }
//         if(n==2 && start!=start2 && k%2==1){
//             cout<<"Case #"<<cases<<": "<<"YES"<<endl;
//             return;
//         }
//         if(n==2 && start!=start2 && k%2!=1){
//             cout<<"Case #"<<cases<<": "<<"NO"<<endl;
//             return;
//         }
//         if(k>0){
//             cout<<"Case #"<<cases<<": "<<"YES"<<endl;
//             return;
//         }
//         if(k==0 && start!=start2){
//             cout<<"Case #"<<cases<<": "<<"NO"<<endl;
//             return;
//         }
//             cout<<"Case #"<<cases<<": "<<"YES"<<endl;
//     }


// }
// /*......................................................................*/


// /*......................................................................*/
// int32_t main(){
//     fast();
//     //init_code();
//     int t;t=1;
//     cin>>t;
//     for (int ie=1;ie<=t;ie++){
        
//         auto t_1=chrono::high_resolution_clock::now();
//         solve();
//         auto t_2=chrono::high_resolution_clock::now();
//         //printf("Case #%d: ",ie);
//         //cout <<". Elapsed (ms): " << chrono::duration_cast<chrono::milliseconds>(t_2 - t_1).count() << endl;
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int maximizeSquaroHoleArea(int n, int m, vector<int>&h, vector<int>&v){
//     set<int>hl;
//     set<int>vl;
//     int del=0;
//     int ans=1;
//     for(int i=0;i<n; i++){
//         hl.insert(h[i]);
//     }
//     for(int i=0;i<m; i++){
//         vl.insert(v[i]);
//     }
//     for(auto x:hl){
//         if(vl.find(x)!=vl.end()){
//            if(del==x-1){
//             int temp=sqrt(ans);
//             cout<<temp<<endl;
//             int ans2=pow(temp+1,2);
//             cout<<ans2<<endl;
//             ans= max(ans, ans2);
//            }
//            else{
//                 del=x;
//                 ans= max(4,ans);
//            }
//         }
//     }
//     return ans;
// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//    vector<int>hBars(n);
// vector<int>vBars(m);
// for(int i=0; i<n; i++){
//     cin>>hBars[i];
// }
// for(int i=0; i<m; i++){
//     cin>>vBars[i];
// }
//  cout<<maximizeSquaroHoleArea(n,m,hBars,vBars)<<endl;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int n,v,x;
//         cin>>n>>v>>x;
//         if(v==0){
//             cout<<x<<endl;
//         }
//         int ans=x;
//         ans+= v*x;
//         if((3*v)<=n){
//             ans+=3*v*x;
//         }
//         else{
//             ans+=n*x;
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// int count_occurrences(vector<int>& arr) {
//     int n = arr.size();
//     int count = 0;
//     vector<int> suffix_greater(n, 0);
//     suffix_greater[n - 1] = 0;

//     for (int i = n - 2; i >= 0; --i) {
//         suffix_greater[i] = suffix_greater[i + 1] + (arr[i + 1] > arr[i] ? 1 : 0);
//     }

//     for (int i = 0; i < n - 2; ++i) {
//         int smaller_count = 0;
//         for (int j = i + 1; j < n; ++j) {
//             if (arr[j] < arr[i]) {
//                 smaller_count++;
//                 count += suffix_greater[j];
//             }
//         }
//     }

//     return count;
// }
// int32_t main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n; 
//         cin>>n;
//         map<int,int>mp;
//             int x,y;
//         for(int i=0; i<n; i++){
//             cin>>x>>y;
//             if(mp.find(x)!=mp.end()){
//                 int t=mp[x];
//                 if(t<y){
//                     mp[x]=y;
//                 }
//             }
//             else{
//                 mp[x]=y;
//             }
//         }
//         vector<int>arr;
//         for(auto x: mp){
//             arr.push_back(x.second);
//         }
//         cout<<count_occurrences(arr)<<endl;
//     }

//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// int32_t main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n; 
//         int ans=0;
//         int curr=0;
//         int a,x;
//         cin>>n;
//         stack<int>st;
//         for(int i=0; i<n; i++){
//             cin>>a;
//             if(a==1){ 
//                 cin>>x;
//                 st.push(x);
//                 curr=curr+x;
//                 ans=((ans>curr)?ans:curr);
//             }
//             else if(a==2){
//                 int tp=st.top();
//                 st.pop();
//                 curr-=tp;
//                 ans=((ans>curr)?ans:curr);
//             }
//         }
//             cout<<ans<<endl;
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// const int MAX=3e5+10;
// const int MOD=1e9+7;

// int countOfSubarray(vector<int>& arr, int N){
// int ans=0;
// unordered_map<int,int>mp;
// if(N==1){
//     if(arr[0]!=1){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }
// else{
//     int li=0;
//     mp[0]=0;
//     for(int i=1; i<N; i++){
//         if(arr[i-1]==1 && arr[i]==1){
//             mp[li]=i;
//         }
//         else{
//             if(arr[i]==1){
//                 li=i;
//                 mp[li]=i;
//             }
//         }
//     }
// }
// for(auto x:mp){
//     int diff= (x.second-x.first)+1;
//     if(diff%2==0){
//         int temp=diff;
//         diff=(diff/2);
//         ans+= (diff*(temp+1));
//     }
//     else{
//         int temp= (diff+1)/2;
//         ans+=(temp*diff);
//     }

// }
// return ans;
// }
// void solve(){
// 	int n,q;
//     int a;
// 	cin>>n>>q;
// 	vector<int> v(n);
// 	for(int i=0;i<n;i++)cin>>v[i];
	
// 	for(int i=0;i<q;i++){
//         cin>>a;
// 		cout<<countOfSubarray(v,a)<<endl;
// 	}
// }
// int32_t main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		solve();
// 	}	
// 	return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// bool cond1=false;
// void reverse(string& s){
//     int n=s.size()-1;
//     int i=0;
//     while(n>=i){
//         swap(s[i],s[n]);
//         i++;
//         n--;
//     }
// }
// int prefix(string s){
//     stack<int> st;
//     string val="";
//   	int len=s.size();
//     for(int i=len-1; i>=0; i--){
//         if(s[i]==' '){
//           	int vlen=val.size();
//             if(vlen!=0){
//                 reverse(val);
//                 int p=stoi(val);
//                 st.push(p);
//                 val="";
//             }
//         }
//         else if(s[i]>='0' && s[i]<='9'){
//             val.push_back(s[i]);
//         }
//         else{
//             int op1=st.top();
//             st.pop();
//             int op2= st.top();
//             st.pop();
//             switch(s[i]){
//                 case '+' : st.push(op1+op2);
//                 break;
//                 case '-' : st.push(op1-op2);
//                 break;
//                 case '*' : st.push(op1*op2);
//                 break;
//                 case '%' : st.push(op1%op2);
//                 break;
//                 case '^' : st.push(pow(op1,op2));
//                 break;
//             }
//         }
//     }
// 	if(st.size()>1)cond1=true;
//     return st.top();
// }
// int main(){
//     string s;
//     getline(cin,s);
//     map<string,char>mp;
//     mp["zero"]= '0';
//     mp["one"] = '1';
//     mp["two"] = '2';
//     mp["three"] = '3';
//     mp["four"] = '4';
//     mp["five"] = '5';
//     mp["six"] = '6';
//     mp["seven"] = '7';
//     mp["eight"] = '8';
//     mp["nine"] = '9';
//     mp["mul"]='*';
//     mp["add"]='+';
//     mp["sub"]='-';
//     mp["rem"]='%';
//     mp["pow"]='^';

// 	string str="";
// 	string temp="";
// 	bool cond=false;
//   	int len=s.size();
// 	for(int i=0; i<len; i++){
// 		if(s[i]=='c'){
// 			if(mp.find(temp)!=mp.end()){
// 				char ch=mp[temp];
// 				str+=ch;
// 			}
// 			else{
// 				// cout<<"expression evaluation stopped invalid words present";
// 		        cond=true;
// 			}
// 			temp="";
			
// 		}
// 		else if(s[i]==' '){
// 			if(mp.find(temp)!=mp.end()){
// 				char ch=mp[temp];
// 				str+=ch;
// 				str.push_back(' ');
// 			}
// 			else{
// 				// cout<<"expression evaluation stopped invalid words present";
// 		        cond=true;
// 			}
// 			temp="";
// 		}
// 		else{
// 			temp.push_back(s[i]);
// 		}
		
// 	}
// 	if(temp.size()>0){
// 		if(mp.find(temp)!=mp.end()){
// 		char ch=mp[temp];
// 		str+=ch;
// 		}
// 		else{
// 			cond=true;
// 		}
// 		temp="";
// 	}
// 	int ans=0;
// 	if(cond==true){
// 		cout<<"expression evaluation stopped invalid words present";
// 	}
// 	else
// 	{int ans=prefix(str);
// 	if(cond1==true ){
// 		cout<<"expression is not complete or invalid";
// 	}
// 	else if(cond1==false) 
//   	{
// 		cond1=false; cout<<ans;
// 	}
// 	}
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n,a,b,c;
// 	cin>>n;

// 	vector<vector<int>>v(n,vector<int>(3));
// 	for(int i=0; i<n; i++){
// 		cin>>v[i][0]>>v[i][1]>>v[i][2];
// 	}
// 	for(int i=0; i<n; i++){
// 		cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2];
// 	}
// 	int m;
// 	cin>>m;
// 	vector<vector<int>>srz(n,vector<int>(m));
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<m; j++){
// 			cin>>srz[i][j];
// 		}
// 	}
// 	int day;
// 	cin>>day;
// 	map<pair<int,int>,int>mp1,mp2;
// 	int ans=0;
// 	for(int i=0; i<n; i++){
// 		int bought=v[i][1];
// 		int sold=v[i][2];
// 		if(bought<=day && sold<=day){
// 			ans+=(srz[i][sold]-srz[i][bought])*v[i][0];
// 		}
// 		else if(bought<=day && sold>day){
// 			ans+=(srz[i][sold]-srz[i][day])*v[i][0];
// 		}
// 	}
// 	cout<<ans<<endl;


// 	return 0;
// }





// BNY MELLON

// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// int n=2*10^5;
// vector<int> least_prime(n+1, 0);
// void leastPrimeFactor()
// {
//     least_prime[1] = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         if (least_prime[i] == 0)
//         {
//             least_prime[i] = i;
//             for (int j = i*i; j <= n; j += i)
//                 if (least_prime[j] == 0)
//                    least_prime[j] = i;
//         }
//     }
// }
// int32_t main(){
// leastPrimeFactor();
//     int m,q;
//     cin>>m>>q;
// vector<int>v(m);
// for(int i=0; i<m; i++){
//     cin>>v[i];
// }
// int a,b,c;
// for(int i=0; i<q; i++){
// cin>>a>>b>>c;
//     if(a==1){
//         for(int i=b-1; i<=c-1; i++){
//             v[i]=v[i]/least_prime[v[i]];
//         }
//     }
//     if(a==2){
//         int temp=0;
//         for(int i=b-1; i<=c-1; i++){
//             temp+=v[i];
//         }
//         cout<<temp<<endl;
//     }
//     if(a==3){
//         v[b-1]=c;
//     }
// }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// vector<int>solve(int n, int k, vector<int>parent,vector<int>earning){
//     vector<int>mark(n+1);
//     vector<int>res;
//     for(int i=0; i<k; i++){
//         int node=earning[i];
//         bool flag=true;
//         while(node!=-1){
//             int temp=node;
//             node=parent[node];
//             if(node==-1 && )
//         }
//     }
// }
// int main(){
//    int n,k;
//    cin>>n>>k;
//    vector<int>parent(n);
//    for(int i=0; i<n; i++){
//         cin>>parent[i];
//    }
//    vector<int>earning(k);
//    for(int i=0; i<k; i++){
//     cin>>earning[i];
//    }
//    vector<int>ans=solve(n,k,parent,earning);

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    signed int a=-10;
    unsigned int b=-10;
    (a==b)?cout<<"yes":cout<<"NO"<<endl;

    return 0;
}