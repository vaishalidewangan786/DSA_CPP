// Template of vaishali
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
/*............................................................................*/ 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
/* find_by_order(x) give iterator of the index x 
   order_by_key(x) give the position where x will be placed*/
#define ll long long
#define lop(i,a,b,c) for (int i=a;i<b;i+=c)
#define rlop(i,a,b,c) for (int i=a-1;i>=b;i-=c)
//#define prii pair <int,int>
//#define PB push_back
//#define S second
//#define F first
//#define all(x) x.begin(),x.end()
//#define vi vector <int>
//#define count_1(x) __builtin_popcount(x)
//#define in(a) scanf("%lld",&a)
//#define in_arr(arr,n) lop(i,0,n,1){scanf("%lld",arr+i);}
//#define out_arr(arr,n) lop(i,0,n,1){printf("%lld ",arr[i]);}printf("\n ");
//#define init_arr(a,b) memset(a,b,sizeof(a))
//#define gcd(a,b) __gcd(a,b)
//#define lcm(a,b) ((a*b)/(gcd(a,b)))
const int MAX=3e5+10;
const int mod=1e9+7;
/*......................................................................*/
void fast(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
}
/*......................................................................*/
/*void init_code() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
}*/
/*......................................................................*/


/*......................................................................*/
void solve(){
    // my code
    int n,x,y;
    cin>>n>>x>>y;
    vector<pair<int,int>> m;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        m.push_back({temp,temp^x});
    }
     
    while(y--){ 
    sort(m.begin(),m.end());
        swap(m.begin()->first,m.begin()->second);
    }
    for(auto itr=m.begin();itr!=m.end();itr++){
        cout<<itr->first<<" ";
    }
    cout<<endl;
}
/*......................................................................*/


/*......................................................................*/
int32_t main(){
    fast();
    //init_code();
    int t;t=1;
    cin>>t;
    for (int ie=1;ie<=t;ie++){
        
        auto t_1=chrono::high_resolution_clock::now();
        solve();
        auto t_2=chrono::high_resolution_clock::now();
        //printf("Case #%d: ",ie);
        //cout <<". Elapsed (ms): " << chrono::duration_cast<chrono::milliseconds>(t_2 - t_1).count() << endl;
    }
    return 0;
}