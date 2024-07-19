

//____________________________________________________________________________________________________

/* 1.  n*m box me 1 position se last position me jana movement only in right and bottom;*/
// plane recursion..

// #include<iostream>
// using namespace std;
// int result(int n,int m){
//     if(n==1|| m==1){
//         return 1;
//     }
//     else 
//     return result (n-1,m) + result(n,m-1);
// }
// int main(){
// int n,m;
// cin>>n>>m;
// cout<<result(n,m)<<endl;

// return 0;
// }

// memoization...

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int result(int n,int m,vector<vector<int>>& dp){
//     if(n==1|| m==1){
//         return 1;
//     }
//     if(dp[n][m]!=-1){
//         return dp[n][m];
//     }  
//     dp[n][m]= result(n-1,m,dp) + result(n,m-1,dp);
//     return dp[n][m];
// }
// int main(){
// int n,m;
// cin>>n>>m;
// vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
// cout<<result(n,m,dp)<<endl;

// return 0;
// }

//tabulation...


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int result(int n,int m){
//     vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
//    for(int i=0; i<=n; i++){
//     dp[1][i]=1;
//    } 
//     for(int i=0; i<=m; i++){
//     dp[i][1]=1;
//    } 
//    for(int i=2; i<=n; i++){
//     for(int j=2; j<=m; j++){
//         dp[i][j]=dp[i-1][j]+ dp[i][j-1];
//     }
//    }
//    return dp[n][m];
// }
// int main(){
// int n,m;
// cin>>n>>m;

// cout<<result(n,m)<<endl;

// return 0;
// }

//__________________________________________________________________________________________________


/*josepjus problem*/

// #include<bits/stdc++.h>
// using namespace std;
// void josephus(vector<int>&person, int k,int index){   
//     if(person.size()==1){
//         cout<< person[0]<<endl;
//         return;
//     }
//     cout<<"old index "<<index<<" ";
//     index = ((index+k)%person.size());// index + k q kr rhe taki aage badh sake .. %person.size () jb index> size ho 
// // to vaps se(0th index se ) start krne ke liye....
//     person.erase(person.begin()+index);
//     cout<<"new index "<<index<<endl;
//     josephus(person,k,index);
// }
// int main(){
// int n,k;
// cin>>n>>k;
// k=k-1;// counting khud se start hoti h is liye 
// int index=0;
// vector<int> person;
// for(int i=1; i<=n; i++){
//     person.push_back(i);
// }
// josephus(person,k,index);
// return 0;
// }


//__________________________________________________________________________________________________

// tower of hanoi problem 
/*
#include <iostream>
using namespace std;
void TOH(int n, int A, int B, int C, int& ans){
    if(n>0){
        ans++;
        TOH(n-1,A,C,B,ans);
        cout<<"from "<<A<<" to "<<C<<" using "<<B<<endl;
        TOH(n-1,B,A,C,ans);
    }  
}
int main(){
    int n;
    cin >>n;
    int ans=0;
    TOH(n,1,2,3,ans);
    cout<<ans<<endl;
    return 0;
}
*/
//_____________________________________________________________________________________________________

// to check the array sorted or not

/* last k do element check kr lo or size chota krte joa aise krte krte agr size 1 ya 0 tk pahuch jata mane sorted h*/

// #include<iostream>
// using namespace std;
// bool check(int arr[],int n){
   
//    if(n==1||n==0){
//        return true;
//    }
//   if(arr[n-1]<arr[n-2]){
//       return false;
//   }
//   return check(arr,n-1);

// }
// int main(){
// int arr[]={5,6,7,9,11,60,72,88,166};

// int size= sizeof(arr)/sizeof(arr[0]);
// cout<<check(arr,size-1)<<endl;
//     return 0;
// }

//____________________________________________________________________________________________________

/* linear search using recursion*/

// #include<bits/stdc++.h>
// using namespace std;
// bool check(int arr[],int size, int index,int t){
//     if(t==arr[index]){
//         return true;
//     }
//    if(index==size){
//        return false;
//    }
//     return check (arr, size, (index +1), t);
    

// }
// int main(){
// int arr[]={5,6,7,9,11,60,72,88,166};

//  int size= sizeof(arr)/sizeof(arr[0]);
//  int t;
//  cin>>t;
//  cout<<check(arr,size-1,0,t)<<endl;
//     return 0;
// }

//____________________________________________________________________________________________________________

//rope cutting ....

// #include<bits/stdc++.h>
// using namespace std;
// int cut(int n, int a, int b, int c ){

//     if(n==0){
//         return 0;
//     }
//     if(n<0){
//         return -1;
//     }
//     int res= max(cut(n-a,a,b,c),max(cut(n-b,a,b,c),cut(n-c,a,b,c)));
//     if(res==-1){
//         return -1;
//     }
//     else return res+1;
// }
// int main(){
// cout<<cut(5,5,2,1);
//     return 0;
// }

//_______________________________________________________________________________________________________

// josephus

/*
#include <iostream>
using namespace std;


int jos(int n,int k) 
{ 
    if(n==1){
        return 0;
    }
    else return (jos(n-1,k)+k)%n;
}
	
int main() {
	
	int n ; 
    int k;
    cin>>n>>k;
    cout<<jos(n,k); 
	
	return 0;
}
*/

// permutation....

// #include <iostream>
// using namespace std;
// void permutation(string &s,int i) 
// { 
//     if(i==s.size()-1){
//         cout<<s<<" ";
//         return;
//     }
//     for(int j=i; j<s.size(); j++){
//         swap(s[i],s[j]);
//         permutation(s,i+1);
//          swap(s[i],s[j]);
//     }
// }
	
// int main() {
	
// 	string s="abc";
//     permutation(s,0);
    
	
// 	return 0;
// }


// rat in a maze..

// #include<bits/stdc++.h>
// using namespace std;
// void solve() {
//    deque<int> dq;
//    for(int i = 1; i <= 5; i++) {
//        if(i % 2 == 0) {
//            dq.push_back(i);
//        }
//        else {
//            dq.push_front(i);
//        }
//    }
//    for(auto x: dq) {
//        cout << x << " ";
//    }
//    cout << endl;
// }
// int main(){
// solve();


//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int solve(int arr[], int n, int i){
// if(i==n){
//     return 0;
// }
// return arr[i]+solve(arr,n,i+1);
// }
// int main(){
// int arr[]={2,4,5,7,9,7,5} ;
// int n= sizeof(arr)/sizeof(arr[0]);

// cout<<solve(arr,n,0)<<endl;


//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int num(int n,int a, int b){
    // cout<<n<<endl;
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
int c=num(n-b,a,b);
int d=num(n-a,a,b);
return 1+min(c,d);
}
int main(){
    int n=12;
    int a=2; int b=3;
    cout<<num(n,a,b)<<endl;
}