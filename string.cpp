//string 
// #include<bits/stdc++.h>
// #include<string.h>
// using namespace std;
// int main(){
// string s1="string is too short ";
// string s2="challenge problem";
// cout<<s1+s2<<endl;
//cout<<s1.assign(s1.begin()+7,s1.end())<<endl;
// s1.append(s2);
// cout<<s1<<endl;
// cout<<s1.at(5)<<endl;
// cout<<s1[11]<<endl;
// s1.swap(s2);
// cout<<s2<<endl;
// s2.clear();
// cout<<s2.assign(" dolll_the ")<<endl;
// cout<<s1+s2<<endl;
// cout<<s1.find("too")<<endl;
// cout<<s1.rfind("too")<<endl;
// s1.replace(s1.find("too"),3,"actually");
// cout<<s1<<endl;
// }

// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;

 
// int main(){
//     long long int  n;
//     cin>>n;
//    long long int res;
//  if(n%2==0){
//      cout<<n/2<<endl;
//  }
//  else if(n%2!=0) {
//     res= ((n/2) + 1 );
//     cout<<res*(-1)<<endl;
//  }
    
//     return 0;
// }

// kaun sa char kitni bar aaya

// #include <bits/stdc++.h> 
// using namespace std; 
  
// int main() 
// { 
//     string str="geeksforgeeks";
//     int count[26]={0};
//     for(int i=0;i<str.length();i++){
//         count[str[i]-'a']++;
//     }
//     for(int i=0;i<26;i++){
//         if(count[i]>0){
//             cout<<char(i+'a')<<" "<<count[i]<<endl;
//         }
//     }
// } 


//palindrom cheker
//bruit force
/*
#include<bits/stdc++.h>
using namespace std;
bool check(string str){
    string rev=str;
    reverse(rev.begin(), rev.end());
    return(str==rev);
}
int main(){
 string str;
 cin>>str;
 cout<<check(str)<<endl;
    return 0;
}
*/

// efficient solution
/*
#include<bits/stdc++.h>
using namespace std;
int check(string str){
    int s=0;
    int l=str.length()-1;
  
        for(int i=s; s<=l ; i++)
        {
            if(str[s]==str[l]){
                s++;
                l--;
            }
            else{
                return 0;
            }
        }
    return 1;
    
}
int main(){
string str;
cin>>str;
cout<<check(str)<<endl;
    return 0;
}
*/


//To check s2 is subsequence of s1 or not...
/*
#include<bits/stdc++.h>
using namespace std;
bool check(string &s1, string &s2){
    int j=0;
    for(int i=0; i<s1.length() && j<s2.length(); i++){
        if(s1[i]==s2[j]){
            j++;
        }
    }
   return (j== (s2.length()));
}
int main(){
//     int n,m;
//  cin>>n>>m;
string s1,s2;
cin>>s1>>s2;
cout<<check(s1,s2)<<endl;
    return 0;
}
*/



// To check anagram
//neive method sort both the given string and check s1==s2;
/*
#include<bits/stdc++.h>
using namespace std;
bool check(string &s1, string &s2){
  sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    
   return (s1==s2);
}
int main(){

string s1,s2;
cin>>s1>>s2;
cout<<check(s1,s2)<<endl;
return 0;
}
*/


/*
#include<bits/stdc++.h>
using namespace std;
bool check(string s1, string s2){
    if(s1.length()!=s2.length()){
    return false;
}
int count[26]={0};
for(int i=0; i<s1.length(); i++){
    count[s1[i]-'a']++;
}
for(int i=0; i<s2.length(); i++){
    count[s2[i]-'a']--;
}
for(int j=0; j<26; j++){
    if(count[j]!=0){
        return false;
    }
}
return true;
}
int main(){
string s1,s2;
cin>>s1>>s2;
cout<<check(s1,s2)<<endl;
    return 0;
}
*/




// left most repeating charector;
// neive solution O(n^2) 
/*
#include<bits/stdc++.h>
using namespace std;
int check(string& str){
    for(int i=0; i<str.length(); i++){
      for(int j=i+1; j<str.length(); j++){
        if(str[i]==str[j]){
            return i;
        }
      }
        
    }

return -1;
}
int main(){
string str;
cin>>str;
cout<<check(str)<<endl;
    return 0;
}
*/

// efficient solution ...
/*
#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
int main(){
string str;
cin>>str;
   bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res=-1;
    for(int i=str.length()-1;i>=0;i--){
        if(visited[str[i]]==false)
        res=i;
        else
        visited[str[i]]=true;
    }
    
    cout<<res;

    return 0;
}


*/

// left most non repeating elements...
/*
#include<bits/stdc++.h>
using namespace std;
const int CHAR =256;
int main(){
string str;
cin>>str;
int chararr[CHAR];
memset(chararr,-1,sizeof(chararr));
int res=INT_MAX;
for(int i=0; i<str.size(); i++)
{
    if(chararr[str[i]]==-1){
        chararr[str[i]]=i; 
    }
    else if(chararr[str[i]]>=0){
        chararr[str[i]]=-2;
    }
}
for(int i=0; i<CHAR; i++){
    if(chararr[i]>=0){
    res=min(res,chararr[i]);
    }
}
cout<<res<<endl;
    return 0;
}
*/


// Reverse words in strind 
/*
#include<bits/stdc++.h>
using namespace std;
void reverse(string & str ,int start,int end){
    while(start<=end){
        swap(str[start],str[end]);
        start++;
        end--;

    }
}
void wordreverse(string & str, int s, int n){
    int start=0; int end;
    for(int i=s; i<n; i++){
        if(str[i]==' '){
            reverse(str,start,i-1);
            start=i+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}
int main(){
string str;
getline(cin,str);
wordreverse(str,0,str.size());
for(int i=0; i<str.size(); i++){
    cout<<str[i];
}
cout<<endl;
return 0;
}
*/

// pattern searching ....

// neive approach...
// check evry elements approach 
/*
#include<bits/stdc++.h>
using namespace std;
void check(string &s, string &p){
    int m=s.size();
    int n=p.size();
    for(int i=0; i<=m-n; i++){
        int k=0;
        for(int j=0; j<n; j++){
            if(p[j]!=s[i+j]){
                break;
            }
            else{
                k++;
            }
        }
        if(k==n){
            cout<<i<<" ";
        }
    }
}

int main(){
string s,p;
cin>>s>>p;
check(s,p);
    return 0; 
}

*/

// improvement in neive approach.. but here we assume that al the elements presence in pattern are different..
/*
#include<bits/stdc++.h>
using namespace std;
void check(string &s, string &p){
    int m=s.size();
    int n=p.size();
    for(int i=0; i<=m-n;){
        int k=0;
        for(int j=0; j<n; j++){
            if(p[j]!=s[i+j]){
                break;
            }
            else{
                k++;
            }
        }
        if  (k==n ){
             cout<<i<<" ";
        }
        if(k==0){
            cout<<i++<<" ";
        }
        else{
            i=i+k;
        }
    }
}

int main(){
string s,p;
cin>>s>>p;
check(s,p);
    return 0; 
}
*/

// check if string are rotation...
// check whether the second string can be obtained by rotating eigther clock wise or anti clock wise string one;
/*
#include<bits/stdc++.h>
using namespace std;
bool check(string &s, string &p){
    int m=s.size();
    int n=p.size();
   if(m!=n){
    return false;
   }
   else{
    return ((s+s).find(p)!=string:: npos);
   }
    }


int main(){
string s,p;
cin>>s>>p;
cout<<check(s,p);
    return 0; 
}
*/


//anagram  search
// kuchh gadbad hai code me
/*
#include <bits/stdc++.h>
using namespace std;
void check(string &s, string &p){
    int m=s.size();
    int n=p.size();bool flag = true;
    if(m<n){ 
       cout<<-1<<" "; 
    }
    
    else {
        vector <int >vs (26,0), vp (26,0);
        for(int i=0; i<n ; i++){
            vs[s[i]]++;
            vp[p[i]]++;
            if(vs==vp){
            cout<<0<<" ";
            }
            for(int j=n; j<m; j++){
                vs[s[j]]++;
                vs[s[j-m]]--;
                if(vs==vp){
              flag=false;
                cout<<j<<" ";
            }
            }
            
        }
    }
 if(flag==true)cout<<-1<<" "; 
}

int main(){
string s,p;
cin>>s>>p;
check(s,p);
    return 0; 
}
*/


//lexicograhy rank of a string;
/*
#include <bits/stdc++.h>
using namespace std;
int fact(int m){
if(m==0 || m==1){
    return 1;
}
return m*fact(m-1);
}
void check(string &s){
 long long res=1;
    int m=s.size();
     vector<int> v (256,0);
    int fac=fact(m);
    // kaun kaun se element present hai...
    for(int i=0 ; i<m ; i++){
        v[s[i]]++;
    }
   //current element ke phle aane vale kitte letters present hai..
    for(int i=1; i<256; i++){
        v[i]+=v[i-1];
    }
    for(int i=0; i<m; i++){
        fac=fac/(m-i);
        res+= v[s[i]-1]*fac;
        for(int j=s[i]; j<256; j++){
            v[j]--;
        }
    }
cout<<res<<endl;
}

int main(){
string s;
cin>>s;
check(s);
    return 0; 
}

*/

