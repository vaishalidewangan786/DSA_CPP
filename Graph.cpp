// adjency list implementation of Graph

/*

#include<bits/stdc++.h> 
using namespace std;   
void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
}   
void printGraph(vector<int> adj[], int V) 
{ 
    for (int i = 0; i < V; i++) 
    { 
        for (int x : adj[i]) 
           cout << x <<" "; 
        cout<<"\n"; 
    } 
} 
int main() 
{ 
    int V = 4; 
    vector<int> adj[V]; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 2); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3);    
    printGraph(adj, V); 
    return 0; 
} 
*/


/*
#include<bits/stdc++.h> 
using namespace std;   
void addEdge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int>adj[], int v){
    for(int i=0; i<v; i++){
        cout<<i<<"-> ";
        for(auto x: adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}

// BFS traversal when vertex is given

void BFS(vector<int>adj[],int n, int s){
        bool visited[n];
        for(int i=0; i<n; i++){
            visited[i]=false;
        }
        queue<int>q;
        visited[s]=true;
        q.push(s);
        while(q.empty()==false){
            int u=q.front();
            q.pop();
            cout<<u<<" ";
            for(int v:adj[u]){
                if(visited[v]==false){
                    visited[v]=true;
                    cout<<"pushing "<<v<<endl;  
                    q.push(v);
                }
            }
        }
}
int main() 
{ 
    int V = 5; 
    vector<int> adj[V]; 
   	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,2,4);  
    printGraph(adj, V); 
    cout<<"BFS traversal if given vertex is "<< 0<<endl;
    BFS(adj,V,0);
    return 0; 
} 
*/
//BFS for disjoint graph
// #include<bits/stdc++.h> 
// using namespace std;   
// void addEdge(vector<int>adj[], int u, int v){
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }
// void printGraph(vector<int>adj[], int v){
//     for(int i=0; i<v; i++){
//         cout<<i<<"-> ";
//         for(auto x: adj[i]){
//             cout<<x<<" ";
//         }
//          cout<<endl;
//     }
   
// }
// void BFS(vector<int>adj[],int s, bool visited[]){
//         queue<int>q;
//         visited[s]=true;
//         q.push(s);
//         while(q.empty()==false){
//             int u=q.front();
//             q.pop();
//             cout<<u<<" ";
//             for(int v:adj[u]){
//                 if(visited[v]==false){
//                     visited[v]=true;  
//                     q.push(v);
//                 }
//             }
//         } 
// }

// int BFSdis(vector<int>adj[], int n){
//     int cnt=0;
//     bool visited[n];
//     for(int i=0; i<n; i++){
//             visited[i]=false;
//     }
//     for(int i=0; i<n; i++){
//             if(visited[i]==false){
//                 cnt++;
//                 BFS(adj,i,visited);
//             }
//                cout<<endl;
//         }
//      return cnt;
// }
// int main() 
// { 
//   	int V=7;
// 	vector<int> adj[V];
// 	addEdge(adj,0,1); 
// 	addEdge(adj,0,2); 
// 	addEdge(adj,2,3); 
// 	addEdge(adj,1,3); 
// 	addEdge(adj,4,5);
// 	addEdge(adj,5,6);
// 	addEdge(adj,4,6);
//     printGraph(adj,V);
//     cout<<"BFS traversal if given vertex is "<<endl;
//     cout<<BFSdis(adj,V);
//     return 0; 
// } 


// DFS 
/*
#include<bits/stdc++.h> 
using namespace std;   
void addEdge(vector<int>adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int>adj[], int v){
    for(int i=0; i<v; i++){
        cout<<i<<"-> ";
        for(auto x: adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void DFSrec(vector<int>adj[], int s, bool visited[]){
visited[s]=true;
cout<<s<<" ";
for(auto u:adj[s]){
    if(visited[u]==false){
        DFSrec(adj,u,visited);
    }
}
}
void DFS(vector<int>adj[],int n,int s){
        bool visited[n];
        for(int i=0; i<n; i++){
            visited[i]=false;
        }
        for(int i=0; i<n; i++){
            if(visited[i]==false){
                DFSrec(adj,i,visited);
            }
        }
}
int main() 
{ 
    int V = 5; 
    vector<int> adj[V]; 
   	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,2,4);  
    printGraph(adj, V); 
    cout<<"DFS traversal if given vertex is "<< 0<<endl;
    DFS(adj,V,0);
    return 0; 
} 
*/

// shortest pathe in unwaited graph
/*
#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[],int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int>adj[], int V){
    for(int i=0; i<V; i++){
        cout<<i<<"-> ";
        for(auto u: adj[i]){
            cout<<u<<" ";
        }
        cout<<endl;
    }
}
void BFS(vector<int>adj[],int s,int V){
    bool visited[V];
    int arr[V];
    for(int i=0; i<V; i++){
        visited[i]=false;
    }
    for(int i=0; i<V; i++){
        arr[i]=INT_MAX;
    }  
    arr[0]=0; 
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while (q.empty()==false)
    {
     int v=q.front();
     q.pop();
     for(auto u: adj[v]){
        if(visited[u]==false){
            visited[u]=true;
            q.push(u);
            arr[u]=arr[v]+1;
        }
     }
    }
    cout<<endl;
    for(int i=0; i<V; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
 int V = 5; 
    vector<int> adj[V]; 
   	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,2,4);  
    printGraph(adj, V); 
    BFS(adj,0,V);
    return 0;
}
*/


// cycle detection in undirected graph using DFS adjency list

// #include<bits/stdc++.h>
// using namespace std;
// bool DFSrec(vector<int>adj[], int s, bool visit[],int parent){
//     visit[s]=true;
//     for(auto u: adj[s]){
//         if(visit[u]==false){
//             if(DFSrec(adj,u,visit,s)==true){
//                 return true;
//             }
//         }
//             else if(u!=parent){
//                 return true;
//             }   
//     }
//     return false;
// }
// bool DFS(vector<int>adj[], int n){
//     bool visit[n];
//     for(int i=0; i<n; i++){
//         visit[i]=false;
//     }
//     for(int i=0; i<n; i++){
//         if(visit[i]==false){
//            if( DFSrec(adj,i,visit,-1)==true){
//             return true;
//            }
//         }
//     }
//     return false;
// }
// void addEdge(vector<int>adj[],int u, int v){
// adj[u].push_back(v);
// adj[v].push_back(u);
// }
// void printGraph(vector<int>adj[], int n){
//    for(int i=0; i<n; i++){
//         cout<<i<<"-> ";
//         for(auto u: adj[i]){
//             cout<<u<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int V=7;
//  vector<int> adj[V]; 
//    	addEdge(adj,0,1); 
// 	addEdge(adj,0,2); 
// 	addEdge(adj,1,2); 
// 	addEdge(adj,2,3); 
// 	addEdge(adj,1,3);
// 	addEdge(adj,3,4);
// 	addEdge(adj,2,4);  
//     printGraph(adj, V); 
//     cout<<DFS(adj,V)<<endl;
//     return 0;
// }


// Detect cycle in directed graph by DFS

// #include<bits/stdc++.h>
// using namespace std;
// bool DFSrec(vector<int>adj[], int s, bool visit[],bool recstk[]){
//   visit[s]=true;
//   recstk[s]=true;
//   for(auto u: adj[s]){
//     if(visit[u]==false && DFSrec(adj, u, visit, recstk)==true){
//        return true ; 
//     }
//     else if(recstk[u]==true){
//         return true;
//     }
//   }
//   recstk[s]=false;
//   return false;
// }
// bool DFS(vector<int>adj[], int n){
//  bool visited[n];
// bool recstk[n];
// for(int i=0; i<n; i++){
//     visited[i]=false;
//     recstk[i]=false;
// }
// for(int i=0; i<n; i++){
//     if(visited[i]==false){
//         if(DFSrec(adj,i,visited,recstk)==true){
//             return true;
//         }
//     }
// }
// return false;
// }
// void addEdge(vector<int>adj[],int u, int v){
// adj[u].push_back(v);
// adj[v].push_back(u);
// }
// void printGraph(vector<int>adj[], int n){
//    for(int i=0; i<n; i++){
//         cout<<i<<"-> ";
//         for(auto u: adj[i]){
//             cout<<u<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
// int V=6;
// 	vector<int> adj[V];
// 	addEdge(adj,0,1); 
// 	addEdge(adj,2,1); 
// 	addEdge(adj,2,3); 
// 	addEdge(adj,3,4); 
// 	addEdge(adj,4,5);
// 	addEdge(adj,5,3);

// 	if(DFS(adj,V))
// 	    cout<<"Cycle found";
// 	else
// 	    cout<<"No cycle found";
//     return 0;
// }


// Topological sort 
// #include<bits/stdc++.h>
// using namespace std;
// void TopologySort(vector<int>adj[],int V ){
// vector<int> indegree(V, 0);
// for(int i=0; i<V; i++){
//     for(auto x: adj[i]){
//         indegree[x]++;
//     }
// }
// queue<int>q;
// for(int i=0; i<V; i++){
// if(indegree[i]==0){
//     q.push(i);
// }
// }
// while(q.empty()==false){
//     int u=q.front();
//     q.pop();
//     cout<<u<<endl;
//     for(int i: adj[u]){
//         if(--indegree[i]==0){
//             q.push(i);
//         }
//     }
// }
// }
// void addEdge(vector<int>adj[],int u, int v){
//     adj[u].push_back(v);
// }

// int main(){
//     // code
// int V=5;
// vector<int>adj[V];
// 	addEdge(adj,0, 2); 
//     addEdge(adj,0, 3); 
//     addEdge(adj,1, 3); 
//     addEdge(adj,1, 4); 
//     addEdge(adj,2, 3);  
//     TopologySort(adj,V);
//     return 0;
// }


// cycle detection in graph by topological sort

// #include<bits/stdc++.h>
// using namespace std;
// void TopologySort(vector<int>adj[],int V ){
//     int count=0;
// vector<int> indegree(V, 0);
// for(int i=0; i<V; i++){
//     for(auto x: adj[i]){
//         indegree[x]++;
//     }
// }
// queue<int>q;
// for(int i=0; i<V; i++){
// if(indegree[i]==0){
//     q.push(i);
// }
// }
// while(q.empty()==false){
//     int u=q.front();
//     q.pop();
//     // cout<<u<<endl;
//     count++;
//     for(int i: adj[u]){
//         if(--indegree[i]==0){
//             q.push(i);
//         }
//     }
// }
// if(count!=V){
//     cout<<"cycle present"<<endl;
// }
// else{
//     cout<<"cycle not present"<<endl;
// }
// }
// void addEdge(vector<int>adj[],int u, int v){
//     adj[u].push_back(v);
// }

// int main(){
// int V=6;
// 	vector<int> adj[V];
// 	addEdge(adj,0,1); 
// 	addEdge(adj,2,1); 
// 	addEdge(adj,2,3); 
// 	addEdge(adj,3,4); 
// 	addEdge(adj,4,5);
// 	addEdge(adj,5,3);  
//     TopologySort(adj,V);
//     return 0;
// }



// DFS Topological
// #include<bits/stdc++.h> 
// using namespace std; 
// void DFS(vector<int> adj[], int u,stack<int> &st, bool visited[]) 
// { 	
//     visited[u]=true;
//     for(int v:adj[u]){
//         if(visited[v]==false)
//             DFS(adj,v,st,visited);
//     }
//     st.push(u);
// }
// void topologicalSort(vector<int> adj[], int V) 
// { 
//     bool visited[V]; 
// 	for(int i = 0;i<V; i++) 
// 		visited[i] = false;
// 	stack<int> st;
    
//     for(int u=0;u<V;u++){
//         if(visited[u]==false){
//             DFS(adj,u,st,visited);
//         }
//     }
    
//     while(st.empty()==false){
//         int u=st.top();
//         st.pop();
//         cout<<u<<" ";
//     }
   
// }

// void addEdge(vector<int> adj[], int u, int v){
//     adj[u].push_back(v);
// }

// int main() 
// { 
// 	int V=5;
// 	vector<int> adj[V];
// 	addEdge(adj,0, 1); 
//     addEdge(adj,1, 3); 
//     addEdge(adj,2, 3); 
//     addEdge(adj,3, 4); 
//     addEdge(adj,2, 4);  
  
//     cout << "Following is a Topological Sort of\n"; 
//     topologicalSort(adj,V);

// 	return 0; 
// } 




// prim's algorithm // minimum lenth of wire to connect n computer

// #include<bits/stdc++.h>
// #define V 4
// using namespace std;
// void prims(int graph[][4]){
// int res=0;
// int key[4];
// fill(key, key+4,INT_MAX);
// key[0]=0;
// bool mset[4];
// for(int i=0; i<4; i++){
//     int u=-1;
//     for(int j=0; j<4; j++){
//         if(mset[j]==false&&(u==-1 || key[u]>key[j])){
//             u=j;
//         }
//     }
//     mset[u]=true;
//     res+=key[u];
//     for(int v=0; v<4; v++){
//         if(graph[u][v]!=0 && mset[v]==false){
//             key[v]=min(key[v],graph[u][v]);
//         }
//     } 


// }
// cout<<res<<endl;
// }
// int main(){
//     // code
// int graph[V][V]={ { 0, 5, 8, 0}, 
// 					{ 5, 0, 10, 15 }, 
// 					{ 8, 10, 0, 20 }, 
// 					{ 0, 15, 20, 0 },};
//     prims(graph);
//     return 0;
// }

// sortest pathe of all vertext from given vertext...

// #include<bits/stdc++.h>
// #define V 4
// using namespace std;
// vector<int> djikstra(int graph[][4],int src){
// vector<int>key(4,INT_MAX);
// key[src]=0;
// vector<bool> mset(4,false);
// for(int i=0; i<4-1; i++){
//     int u=-1;
//     for(int j=0; j<4; j++){
//         if(mset[j]==false&&(u==-1 || key[u]>key[j])){
//             u=j;
//         }
//     }
//     mset[u]=true;
//     for(int v=0; v<4; v++){
//         if(graph[u][v]!=0 && mset[v]==false){
//             key[v]=min(key[v], key[u]+graph[u][v]);
//         }
//     } 
// }
// return key;
// }
// int main(){
//     // code
// int graph[V][V] = { { 0, 50, 100, 0}, 
// 						{ 50, 0, 30, 200 }, 
// 						{ 100, 30, 0, 20 }, 
// 						{ 0, 200, 20, 0 },}; 

// 	for(int x: djikstra(graph,0)){
// 	    cout<<x<<" ";
// 	} 
//     return 0;
// }




//kosaraju algorigthm

// #include<bits/stdc++.h>
// using namespace std;

// void dfs(int node,vector<bool>&vis,stack<int>&st, vector<int>adj[]){
//     vis[node]=true;
//     for(auto x: adj[node]){
//         if(vis[x]==false){
//             dfs(x,vis,st,adj);
//         }
//     }
//     st.push(node);
// }
// void dfs2(int node,vector<bool>&vis,vector<int>tadj[]){
//      vis[node]=true;
//     for(auto x: tadj[node]){
//         if(vis[x]==false){
//             dfs2(x,vis,tadj);
//         }
//     }
// }
    
// void addEdge(vector<int> adj[], int u, int v){
//     adj[u].push_back(v);
// }
// int kosaraju(vector<int>adj[], int V){
//     //topology sort
//     stack<int>st;
//     vector<bool>vis(V,false);
//     for(int i=0; i<V; i++){
//         if(vis[i]==false){
//             dfs(i,vis,st,adj);
//         }
//     }
//     // inverst
//     vector<int>tadj[V];
//     for(int i=0; i<V; i++){
//         vis[i]=false;
//         for(auto x:adj[i]){
//             tadj[x].push_back(i);
//         }
//     }
//     int ans=0;
//     while(st.empty()==false){
//         int t=st.top();st.pop();
//         if(vis[t]==false){
//         dfs2(t,vis,tadj);
//         ans++;
//         }
//     }
//     return ans;
// }
// int main()  
// { 
// 	int V=5;
// 	vector<int> adj[V];
// 	addEdge(adj,0, 1); 
//     addEdge(adj,1,0);
//     addEdge(adj,1, 3); 
//     addEdge(adj,2, 3); 
//     addEdge(adj,3, 4); 
//     addEdge(adj,2, 4);  
//   cout<<kosaraju(adj,V);
// 	return 0; 
// } 





// bridge and articulationl point


/*
Intuition : bridge is an edge if we cut this edge then the connected component in graph will increas.

brute force approach : check for each edge;
efficient approach : By dfs maintain two array discovery time and lowest posible time
if you are visiting a vertex first time then give both disc and low value equal to time
now while dfs traversal 
if you are visiting the parent node then don't do anything
if child is not visited then dfs call for child node while returning update low[node]=min(low[node],low[child]);
and in this case if child ki low value, node ki discovery time se bdi ho jati h to child and node bridge hai
and it means ki us node tk pahuchane ka ak matra rasta hai
if any point of time you visit an already visited node then update low[node]=min(low[node], disc[child]);

*/


// #include<bits/stdc++.h>
// using namespace std;

// void dfs(int node, int parent, int &timer, vector<int> &disc, vector<int> &low, vector<int>adj[], vector< bool> &vis)
// {
//      vis[node]=true;
//      disc[node]=low[node]=timer++;
//      for(auto child: adj[node]){
//          if(child==parent)continue;
//          if(vis[child]==false){
//              dfs(child,node,timer,disc,low,adj,vis);
//              low[node]=min(low[node],low[child]);
//              if(low[child]>disc[node]){
//                  cout<<"bridge between "<<node<<" and "<<child<<endl;
//              }
//          }
//          else{
//              low[node]=min(low[node],disc[child]);
//          }
//      }
// }

// void addEdge(vector<int> adj[], int u, int v) 
// { 
//     adj[u].push_back(v); 
//     adj[v].push_back(u); 
// }   
// void printGraph(vector<int> adj[], int V) 
// { 
//     for (int i = 0; i < V; i++) 
//     { 
//         cout<<i<<"-> ";
//         for (int x : adj[i]) 
//            cout << x <<" "; 
//         cout<<"\n"; 
//     } 
// } 
// int main() 
// { 
//      int V = 5; 
//     vector<int> adj[V]; 
//     addEdge(adj,1, 0);
//     addEdge(adj,0, 2);
//     addEdge(adj,2, 1);
//     addEdge(adj,0, 3);
//     addEdge(adj,3, 4);
//     printGraph(adj, V); 
//     vector<bool>visited(5,false);
//     vector<int>disc,low;
//     for(int i=0; i<V; i++){
//         disc.push_back(-1);
//         low.push_back(-1);
//     }
//     int time=0, parent=-1;
//     for(int i=0; i<V; i++){
//         if(visited[i]==false){
//             dfs(i,parent,time,disc,low,adj,visited);
//         }
//     }
    
//     return 0; 
// } 





















// #include<bits/stdc++.h>
// using namespace std;
// void bfs(vector<int>g[], int v, int path[],int visit[]){
//     queue<int>q;
//     q.push(v);
//     visit[v]=1;
//     while(q.empty()==false){
//         int cv=q.front();
//         q.pop();
//         cout<<cv<<" ";
//         for(auto x:g[cv]){
//             if(visit[x]==0){
//                 path[x]=path[cv]+1;
//                 visit[x]=1;
//                 q.push(x);
//             }
//         }
//     }
// }

// bool dfs(vector<int>g[], int v, int visit[], int par){
// visit[v]=1;
// cout<<v<<" ";
// for(auto x: g[v]){
//     if(visit[x]==0){
//         if(dfs(g,x,visit,v))return true;
//     }
//     else{
//         if(par!=v)return true;
//     }
// }
// return false;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int>g[n];
//     int v1,v2;
//     for(int i=0; i<m; i++){
//         cin>>v1>>v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
// //     int v;
// //     cin>>v;
//  int visit[n];
//  memset(visit, 0, sizeof(visit));
//  if(dfs(g,0,visit,-1))cout<<"present"<<endl;
// // int path[n];
// // path[0]=0;
// // for(int i=0; i<n; i++){
// //  if(visit[i]==0){
// //     bfs(g,i,path,visit);
// //  }
// // }
// // cout<<endl;
// // for(auto x: path){
// //     cout<<x<<" ";
// // }
//     return 0;
// }
// //for directed graph the undirect cycle detection wont work so wht we will do we check for the back age for that 
// //we make an array that represent whether the vertex is in callstack or not if yes then the cycle will be there









// // prim's algorithm // minimum lenth of wire to connect n computer

// #include<bits/stdc++.h>
// #define V 4
// using namespace std;
// int prims(int graph[][4]){
// int key[V];
// for(int i=0; i<V; i++)key[i]=INT_MAX;
// key[0]=0;
// bool mset[V];
// for(int i=0; i<V; i++)mset[i]=false;
// int res=0;
// for(int i=0; i<V; i++){
//     int u=-1;
//     for(int i=0; i<V; i++){
//         if(mset[i]==false&&(u==-1 || key[u]>key[i])){
//             u=i;
//         }
//     }
//     mset[u]=true;
//     cout<<key[u]<<".";
//     res+=key[u];
//     for(int i=0; i<V; i++){
//         if(mset[i]==false && graph[u][i]!=0){
//             key[i]=min(key[i],graph[u][i]);
//         }
//     }
// }

// for(auto x: key){
//     cout<<x<<" ";

// }
// return res;
// }
// int main(){
//     // code
// int graph[V][V]={ { 0, 5, 8, 0}, 
// 					{ 5, 0, 10, 15 }, 
// 					{ 8, 10, 0, 20 }, 
// 					{ 0, 15, 20, 0 },};
//                     cout<<endl;
//     int ans=prims(graph);
//     cout<<ans<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

//  int minimumMagic(int n, int m, int price[], int magical_price[])
//     {
//      int total=0;
//      for(int i=0; i<n; i++){
//          total+=price[i];
//      }
//      int diff=(total-m);
//      cout<<diff<<endl;
//      if(diff<=0)return 0;
     
//      map<int,vector<int>,greater<int>>mp;
//      for(int i=0; i<n; i++){
//          mp[price[i]-magical_price[i]].push_back(i);
//      }
//      int ans=0;
//      while(diff>0){
//          for(auto x:mp){
//              for(int i=0; i<x.second.size(); i++){
//                 int y=mp[x.first][i];
//                 cout<<x.first<<" "<<y<<"."<<endl;
//                  while(price[y]-x.first>=0 && diff>0){
//                      price[y]=price[y]-x.first;
//                      cout<<"diff"<<diff<<endl;
//                      diff-=x.first;
//                      ans++;
//                  }
//              }
//          }
//      }
//      return (diff<=0)? ans:-1;
    
//     }

// int main(){
//     int n=5;
//     int m=13;
    
//     int price[n]={3, 4, 6, 2 ,4};
//    int magic[n]={1,2,5,1,3};
//  cout<<minimumMagic(n,m,price,magic);
//     return 0;
// }








// juspay  nearest meeting cell

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> finddist(vector<int>&dist,vector<int>adj[],int node,int n,vector<bool>&visit)
// {
//     visit[node]=true;
//     dist[node]=0;
//     queue<int>q;
//     q.push(node);
//     while(q.empty()==false){
//         int par=q.front();q.pop();
//         cout<<par<<" ";
//         for(auto child: adj[par]){
//             if(visit[child]==false){
//                 dist[child]=dist[par]+1;
//                 visit[child]=true;
//                 q.push(child);
//             }
//         }
//     }
//     cout<<endl;
//     return dist;
// }
// int main(){
//    int n;
//    cin>>n;
//    vector<int>adj[n];
//     for(int i=0; i<n; i++){
//     int a;
//     cin>>a;
//     if(a!=-1)adj[i].push_back(a);
//     }
//     int n1,n2;
//     cin>>n1>>n2;
//     vector<int>dist1(n,INT_MAX);
//     vector<bool>visit1(n,false);
//     cout<<"for 2"<<endl;
//     vector<int>arr1=finddist(dist1,adj,n1,n,visit1);
//     vector<int>dist2(n,INT_MAX);
//     vector<bool>visit2(n,false);
//     cout<<"for 9"<<endl;
//     vector<int>arr2=finddist(dist2,adj,n2,n,visit2);

//     // calculating ans

   
//     int an=-1;
//     vector<int>av;
//     map<int,vector<int>>mp;
//     for(int i=0; i<n; i++){
//         // cout<<arr1[i]<<" "<<arr2[i]<<endl;
//         if(arr1[i]==INT_MAX || arr2[i]==INT_MAX)continue;
//        mp[arr1[i]+arr2[i]].push_back(i);

//     }
//     auto itr=mp.begin();
//     av=itr->second;
//     for(auto x:av){
//         cout<<x<<endl;
//     }
//     return 0;
// }



// juspay Maximum Weight Node


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>adj[n];
//     for(int i=0; i<n; i++){
//         int a;
//         cin>>a;
//         if(a!=-1)
//         adj[a].push_back(i);
//     }
//     int ans=-1;
//     map<int,int,greater<int>>mp;
//     for(int i=0; i<n; i++){
//         // cout<<i<<"-> ";
//         int sum=0;
//         for(auto x:adj[i]){
//             // cout<<x<<" ";
//             sum+=x;
//         }
//         // cout<<endl;
//         mp[sum]=i;
//     }
//     auto itr=mp.begin();
//     cout<<itr->second<<endl;
//     return 0;
// }




//juspay Largest Sum Cycle


// #include<bits/stdc++.h>
// using namespace std;
// int cnt=0;
// int dfs(int node, vector<int> &vis, vector<int> &path, vector<int> adj[], int sum) {
//     // cout<<"calling for"<<node<<endl;
//     vis[node] = 1;
//     path[node] = sum;
//     int tsum = INT_MIN;
//     cnt++;
//     for(auto it : adj[node]) {
//         if(!vis[it]) {
//             int x = dfs(it, vis, path, adj, sum + it);
//             tsum = max(tsum, x);
//         } else if(path[it] != -1) {
//             // cout<<node<<" "<<it<<" "<<path[node]<<" "<<path[it]<<endl;
//             int x = path[node] - path[it] + it;
//             tsum = max(tsum, x);
//         }
//     }
//     // cout<<"returning for "<<node<<endl;
//     path[node] = -1;
//     return tsum;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     vector<int> adj[n]; for(int i = 0; i < n; i++) if(v[i] != -1) adj[i].push_back(v[i]);
//     vector<int> vis(n, 0);
//     vector<int> path(n, -1);
//     int ans = 0; int ansc=0;
//     for(int i = 0; i < n; i++) {
//         if(!vis[i]) {
//             cnt=0;
//             int x = dfs(i, vis, path, adj, i);
//             // cout<<i<<" "<<x<<endl;
//             ansc=max(ansc,cnt);
//             ans = max(ans, x);
//         }
//     }
//     cout << ans<<" "<<ansc;
//     return 0;
// }


// forest 

#include<bits/stdc++.h>
using namespace std;
void bfs(int node,vector<int>adj[],map<int,set<int>>&mp,vector<bool>&visit){
visit[node]=true;
queue<int>q;
q.push(node);
int level=0;
  
 mp[level].insert(node);
while(q.empty()==false){
    int curnode=q.front();

    q.pop();level++;
    for(auto child:adj[curnode]){
        if(visit[child]==false){
            mp[level].insert(child);
            visit[child]=true;
            q.push(child);
        }
    }

}
}
void solve(){
    int n;
    cin>>n;
    vector<int>adj[n];
    vector<int>v;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(a!=-1){
            adj[a].push_back(i);
        }
        else{
            v.push_back(i);
        }
    }
    vector<bool>visit(n,false);
    map<int,set<int>>mp;
    for(auto i:v){
        if(visit[i]==false){
            bfs(i,adj,mp,visit);
        }
    }
    for(auto x:mp){
       cout<<x.first<<"-> ";
       for(auto u:x.second){
        cout<<u<<" ";
       }
       cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

