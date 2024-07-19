
// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n, vector<int>&dp)
// {
//     if(n==0 || n==1)
//      return n;
//     if(dp[n]!=-1) {
//         return dp[n];
//     }
//     else
//       dp[n]=fib(n-1,dp)+fib(n-2,dp); 
//       return dp[n];
// }

// int main() {	
// 	int n = 1;	
//     cin>>n;
//     vector<int> dp;
//     for(int i=0; i<=n; i++){
//         dp.push_back(-1);
//     }
// 	cout<<fib(n,dp);
// }


// bottom up approach
// #include<bits/stdc++.h>
// using namespace std;

// int main() {	
// 	int n = 1;	
//     cin>>n;
//     vector<int> dp(n+1);
//     dp[0]=0;
//     dp[1]=1;
//     for(int i=2; i<=n; i++){
//         dp[i]=dp[i-1]+dp[i-2];
//     }
// 	cout<<dp[n];
// }



// Longest common subsequence..

/*
//without DP

#include<bits/stdc++.h>
using namespace std;

int LCS(string& s1 , string& s2, int m, int n){
    if(m==0|| n==0){
        return 0;
    }
    else{
    if(s1[m-1]==s2[n-1]){
        cout<<s1[m-1]<<" ";
        return 1+LCS(s1,s2,m-1,n-1);
    }
    else
    return max(LCS(s1,s2,m-1,n),LCS(s1,s2,m,n-1));
}
}

int main(){
string s1="AXYZ";
string s2="BAZ";
cout<<LCS(s1,s2,4,3)<<endl;
    return 0;
}

*/

/*
// with DP Top-down

#include<bits/stdc++.h>
using namespace std;

int LCS(string& s1 , string& s2, int m, int n,int memo[5][4]){
    if(memo[m][n]!=-1){
        return memo[m][n];
    }
    if(m==0|| n==0){
      memo[m][n]=0 ;
    }
    else{
    if(s1[m-1]==s2[n-1]){
       
        memo[m][n]= 1+LCS(s1,s2,m-1,n-1,memo);
    }
    else{
    memo[m][n]= max(LCS(s1,s2,m-1,n,memo),LCS(s1,s2,m,n-1,memo));
    }
    }
    return memo[m][n];

}

int main(){
string s1="AXYZ";
string s2="BAZ";
int memo[5][4];
memset(memo,-1,sizeof(memo));
cout<<LCS(s1,s2,4,3,memo)<<endl;
    return 0;
}
*/

/*
// With DP bottom-up

#include<bits/stdc++.h>
using namespace std;

int LCS(string& s1 , string& s2, int m, int n,int memo[5][4]){
    for(int i=0 ;i<m+1; i++){
        memo[i][0]=0;
    }
    for(int i=0 ;i<n+1; i++){
        memo[0][i]=0;
    }
    for(int i=1; i<m+1; i++){
        for(int j=1; j<n+1; j++){
            if(s1[i-1]==s2[j-1]){
                memo[i][j]= 1+memo[i-1][j-1];
            }
            else{
                memo[i][j]= max(memo[i][j-1],memo[i-1][j]);
            }
        }
    }
    return memo[m][n];

}

int main(){
string s1="AXYZ";
string s2="BAZ";
int memo[5][4];
memset(memo,-1,sizeof(memo));
cout<<LCS(s1,s2,4,3,memo)<<endl;
    return 0;
}

*/



// variance of LCS






// coin change problem..

// #include<bits/stdc++.h>
// using namespace std;

// int numberofways(int arr[], int i, int n){
//     if(n==0){
//         return 1;
//     }
//     if(n<0){
//         return 0;
//     }
//     if(i==0){
//         return 0;
//     }
//     return numberofways(arr,i,n-arr[i-1])+numberofways(arr,i-1,n);
// }

// int main(){
// int arr[]= {1,2,3};
// int n=4;
// cout<<numberofways(arr,3,4);
//     return 0;
// }




// edit distance 

// you wil be given two string s1 and s2 and you have to make s1==s2 and you will have 
// three options you can delete an element , insert an element or replace an element

//neive recursion 
// #include<bits/stdc++.h>
// using namespace std;
// int number(string s1, string s2, int m, int n){
//     if(m==0){
//         return n;
//     }
//     if(n==0){
//         return m;
//     }
//     if(s1[m-1]==s2[n-1]){
//        return number(s1,s2,m-1,n-1);
//     }
//     else{
//      return 1 + min(number(s1,s2,m,n-1), min(number(s1,s2,m-1,n), number(s1,s2,m-1,n-1)));
//     }
// }

// int main(){
// string s1="sunday";
// int m=s1.size();
// string s2="saturday";
// int n=s2.size();
// cout<<number(s1,s2,m,n);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int number(string s1, string s2, int m, int n){
//  int dp[m+1][n+1];
// for(int i=0; i<m+1; i++){
//     dp[0][i]=i;
// }
// for(int i=0; i<n+1; i++){
//     dp[i][0]=i;
// }
// for(int i=1; i<m+1; i++){
//     for(int j=1; j<n+1; j++){
//         if(s1[i-1]==s2[j-1]){
//             dp[i][j]=dp[i-1][j-1];
//         }
//         else{
//             dp[i][j]=1+ min((dp[i-1][j]),min(dp[i-1][j-1],dp[i][j-1]));
//         }
//     }
// }
//   return dp[m][n];
// }

// int main(){
// string s1="cut";
// int m=s1.size();
// string s2="cat";
// int n=s2.size();

// cout<<number(s1,s2,m,n);
//     return 0;
// }


// LIS Longest Increasing Subsequence..
/*
#include<bits/stdc++.h>
using namespace std;
int LIS(int arr[], int n){
int lisarr[n];
lisarr[0]=1;
for(int i=1; i<n; i++){
    lisarr[i]=1;
    for(int j=0; j<i; j++){
        if(arr[j]<arr[i]){
            lisarr[i]=max(lisarr[i],lisarr[j]+1);
        }
    }
}
int ans=1;
for (int i = 0; i < n; i++)
{
   ans=max(ans,lisarr[i]);
}
return ans;

}

int main(){
int arr[]={3,2,4,8,5,10};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<LIS(arr,n);
    return 0;
}
*/
// better opproach by binery search and find first greater element....

// #include<bits/stdc++.h>
// using namespace std;

// int findindx(int arr[], int k, int r, int l){
//     while(r>l){
//         int mid= l+(r-l)/2;
//         if(arr[mid]>=k){
//             r=mid;
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     return r;
// }

// int LIS(int arr[], int n){
// int lisarr[n]; int len=1;
// lisarr[0]=arr[0];
// for(int i=1; i<n; i++){
//     if(arr[i]>lisarr[len-1]){
//      lisarr[len]= arr[i];
//      len++;
//     }
//     else{
//         int indx= findindx(lisarr       ,arr[i],len-1,0);
//         lisarr[indx]=arr[i];
//     }
// }
// for(int i=0; i<len; i++){
//     cout<<lisarr[i]<<" ";
// }
// return len;
// }
// int main(){
// int arr[]={10,9,2,5,3,4};
// int n=sizeof(arr)/sizeof(arr[0]);
// cout<<LIS(arr,n);
//     return 0;
// }




// variance of LIS

//maximum cuts..




// stiver DP series : is bar to dp for ke rahungi 🔥🔥🔥
// fibonachi number
// plan recursion

// #include<bits/stdc++.h>
// using namespace std;
// int fibnum(int n){
//     if(n==1||n==2){
//         return n-1;
//     }
//     return fibnum(n-1)+fibnum(n-2); 
// }
// int main(){
//  int n;
//  cin>>n;
//  cout<<fibnum(n);
//     return 0;
// }

// by DP:- memoization

// #include<bits/stdc++.h>
// using namespace std;
// int fibnum(int n, vector<int>&dp){
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     if(n==1||n==2){
//         return n-1;
//     }
//   return dp[n]=fibnum(n-1,dp)+fibnum(n-2,dp); 
// }
// int main(){
//  int n;
//  cin>>n;
//  vector<int>dp(n+1);
//  fill(dp.begin(),dp.end(),-1);
//  cout<<fibnum(n,dp);
//     return 0;
// }

// tabulation

// #include<bits/stdc++.h>
// using namespace std;
// int fibnum(int n, vector<int>&dp){
//     dp[0];
//     dp[1]=0;
//     dp[2]=1;
//     for(int i=3; i<=n; i++){
//  dp[i]=dp[i-1]+dp[i-2];
//   }
//  return dp[n];
// }
// int main(){
//  int n;
//  cin>>n;
//  vector<int>dp(n+1);
//  cout<<fibnum(n,dp);
//     return 0;
// }

// space optimization

// #include<bits/stdc++.h>
// using namespace std;
// int fibnum(int n, vector<int>&dp){
//     int prev=1,prev2=0;
//     for(int i=2; i<=n; i++){
//  int curri=prev+prev2;
//  prev2=prev;
//   prev=curri;
//   }
//  return  prev;
// }
// int main(){
//  int n;
//  cin>>n;
//  vector<int>dp(n+1);
//  cout<<fibnum(n,dp);
//     return 0;
// }
 

     