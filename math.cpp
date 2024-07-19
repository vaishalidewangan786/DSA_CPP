// GCD greatest common factor...

// #include<iostream>
// using namespace std;
// int d,x,y;
// void GCD(int A, int B){

// if(B==0){
//     d=A;
//     x=1;
//     y=0;
// }
// else{
//     GCD(B,A%B);
//     int temp =x;
//     x=y;
//     y= temp- (A/B)*y;
// }
// }
// int main()
// {
// int A,B;
// cin>>A>>B;
//  GCD(A,B);

// cout<<"GCD of "<<A<<" and "<<B<<" is :"<<d<<endl ;
// cout<<" and coff is "<<x<<" and "<<y<<" "<< endl;

//     return 0;
// }



// prime number...

// #include <iostream>
// using namespace std;
// void primenum(int n)
// {
//     int a[n] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         if (a[i] == 0)
//         {
//             for (int j = i * i; j <= n; j = j + i)
//             {
//                 a[j] = 1;
//             }
//         }
//     }
    
//     for (int k = 2; k<=n; k++)
//     {
//         if (a[k] == 0)
//         {
//             cout << k << " ";
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     primenum(n);
//     return 0;
// }



// prime factor
/*
#include <iostream>
using namespace std;
void primenum(int n)
{
    int a[n] = {0};

    for(int i=2; i<=n; i++){
       a[i]=i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == i)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                if(a[j]=j)
                a[j] = i;
            }
        }
    }
  while(n!=1)  {
  cout<<a[n]<<" ";
  n=n/a[n];

  }

}

int main()
{
    int n;
    cin >> n;
    primenum(n);
    return 0;
}

*/






//set (by defalt ordered)

// #include<iostream>
// #include<set>
// #include<iterator>
// using namespace std;

// int main(){
// set<char> s;      // declaration of set
// int arr[]={'q','s','v','h','r','y','j','s','y','s','e','o','l'};
// for(int i=0; i<13; i++){
//     s.insert(arr[i]);
// }
// cout<<"The elements in the set are: \n";
//     for(auto itr=s.begin(); itr!=s.end(); itr++)
//     {   
//         cout<<*itr<<" ";
//     }
//     // cout<<endl<<s[4]<<endl;
//     if(s.find('y')!=s.end())
//     {
//         cout<<"\n\n50 is present";
//     }
//     else
//     {
//         cout<<"\n\n50 is not present";
//     }

//     if(s.empty()){
//         cout<<"\nempty";
//     }
//     else {
//         cout<<"\not empty";
//     }
    
//     return 0;
// }

// unordered set
// #include<iostream>
// #include<unordered_set>
// #include<iterator>
// using namespace std;
// int main(){
// unordered_set <int> us;

// int arr[]= {40, 20, 60, 30, 50, 50, 10};
// for(int i=0; i<7; i++){
//     us.insert(arr[i]);
// }
// for(auto itr=us.begin() ; itr!=us.end(); itr++){
//     cout<<*itr<<" ";
// }

//     return 0;
// }


// map

// #include<iostream>
// #include<unordered_map>
// #include<iterator>
// using namespace std;
// int main(){
//     unordered_map <int, char> mp;

// mp.insert(pair<int , char>(1,'1'));
// mp.insert(pair<int , char>(1,'2'));
// mp.insert(pair<int , char>(2,'t'));
// mp.insert(pair<int , char>(3,'h'));
// mp.insert(pair<int , char>(44,'s'));
// mp.insert(pair<int , char>(5,'k'));
// mp.insert(pair<int , char>(7,'b'));
// mp.insert(pair<int , char>(6,'6'));
// for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
//         cout << itr->first 
//             << '\t' << itr->second << '\n'; 
//     } 
//     return 0;
// }

//  #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     int temp=T;
//     if(T>=1&&T<=300){
//     while(T--){
//         string name;
//         cin>>name;
//         if((name[name.length()-1]=='y') || (name[name.length()-1]=='Y')) cout<<"Case #"<<(temp-T)<<": "<<name<<" is ruled by nobody."<<endl;
//         else if((name[name.length()-1]=='a')||(name[name.length()-1]=='i')||(name[name.length()-1]=='e')||(name[name.length()-1]=='o')||(name[name.length()-1]=='u')||(name[name.length()-1]=='A')||(name[name.length()-1]=='I')||(name[name.length()-1]=='E')||(name[name.length()-1]=='O')||(name[name.length()-1]=='U')) cout<<"Case #"<<(temp-T)<<": "<<name<<" is ruled by Alice."<<endl;
//         else cout<<"Case #"<<(temp-T)<<": "<<name<<" is ruled by Bob."<<endl;        
//     }
// }
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int T;
// cin>>T;
// int temp=T;

// while(T--){
// int N;
// cin>>N;
// int arr[N];
// int cite=0;
// for(int i=0; i<N; i++){
//     cin>>arr[i];
// }
// int skip =0;
// for(int j=0; j<N; j++){
  
//     if(arr[j]>0){
//     cout<<"Case #"<<(temp-T)<<": "<<(cite+1)<<" ";
//     skip++;
//     }
//     if(skip/(cite+2)==1){
//         cite++;
//         skip=0;
//     }

// }


// }


//     return 0;
// }