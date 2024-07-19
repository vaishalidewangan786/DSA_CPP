// #include <iostream>

// using namespace std;
// void insertion(int arr[], int number, int index, int lastindex)
// {

//     for (int i = lastindex; i > index - 1; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
// }
// void inserted(int arr[], int *lastindex)
// {
//     cout<<"After insertion : ";
//     for (int i = 0; i <= *lastindex + 1; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[] = {2, 4, 5, 6, 12, 19, 23};
//     int lastindex = sizeof(arr) / sizeof(int) - 1;

//     int number, index;
//     cout << " enter number and index(0 to 7) in which you want to perform insertion : " << endl;

//     cin >> number >> index;
//     insertion(arr, number, index, lastindex);
//     arr[index] = number;

//     inserted(arr, &lastindex);
//     return 0;
// }
 



//  #include <iostream>
// #include <map>
// using namespace std;
// int main ()
// {
//   std::map<char,int> mymap;
//   std::map<char,int>::iterator it;

//   mymap['a']=50;
//   mymap['b']=100;
//   mymap['c']=150;
//   mymap['d']=200;

//   it = mymap.find('b');
//   cout<<++it->second<<endl;


//   // print content:
//   std::cout << "elements in mymap:" << '\n';
//   std::cout << "a => " << mymap.find('a')->second<< '\n';
//   std::cout << "c => " << mymap.find('c')->second << '\n';
//   std::cout << "d => " << mymap.find('d')->second << '\n';

//   return 0;
// }


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	  int a[n];  
	   for(int i=0; i<n; i++){
	       
	       cin>>a[i];
	     
	   }
	 map< int , int> mp;
	 map<int,int>::iterator it;
	 for(int i=0; i<n; i++ ){
	     it=mp.find(a[i]);
	     if(mp.find(a[i])!=mp.end()){
	        ++it->second;
	     }
	     else{
             pair<int,int> p(a[i],1);
	         mp.insert(p);
	     }
	 }
	 
	 int s=mp.size();
	 int d=0;
	 
	 for(auto itr=mp.begin(); itr!= mp.end(); itr++){
	     if(itr->second<2){
	         d++;
	     }
	 }
	 
	 if(d==0 || d==1){
	     cout<<d<<endl;
	 }
	 if(d%2==0){
	     cout<<d/2<<endl;
	 }
else if(d%2!=0){
    cout<<(d/2)+1<<endl;
}
	   
	}
	return 0;
}
