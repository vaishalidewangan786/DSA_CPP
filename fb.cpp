
// second hands
#include <bits/stdc++.h>
using namespace std;
int cas=0;

void solution(){
	
	cas++;
	int n, a;
	cin>>n>>a;
   map<int,int> mp;
	vector<int> arr(n);
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}

	if(n>2*a){
		cout<<"Case #"<<cas<<": NO"<<endl;
		return;
	}
		for(auto it=mp.begin();it!=mp.end();it++){
			int val=it->second;
			if(val>=3){
				cout<<"Case #"<<cas<<": NO"<<endl;
				return;
			}
		}
		cout<<"Case #"<<cas<<": YES"<<endl;
		char a='a',A='A';
		cout<<(a>A)<<endl;
	}

int32_t main(){
	
	int t;
	cin>>t;
 while(t--){
    solution();
 }
	return 0;
}