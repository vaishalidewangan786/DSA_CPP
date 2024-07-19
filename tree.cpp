// Tree.. non linear data stucture...
//  to represent hirarchy stucture..
// Binary tree : a node can have 0,1 or 2 child..
/*...................................1......................................*/
// simple implementation of binary tree..


/*
#include<bits/stdc++.h> 
using namespace std;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
int main(){
node* root= new node(10);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(40);
    return 0;
}
*/

/*...................................2......................................*/

// Traversal in binary tree...

/*
#include<bits/stdc++.h> 
using namespace std;
struct node{
int data;
struct node* left;
struct node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
void inorder(node *root){
    if(root!=NULL){
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
    }
}
void preorder(node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root){
     if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main(){
node *root= new node(10);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(40);

cout<<"inorder : ";
inorder(root);
cout<<endl;

cout<<"preorder : ";
preorder(root);
cout<<endl;

cout<<"postorder : ";
postorder(root);
cout<<endl;
    return 0;
}
*/

/*...................................3......................................*/

// height of the tree
/*
#include<bits/stdc++.h> 
using namespace std;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}

};
int height(node* root){
    if(root==NULL){
        return 0;
    }
    
        return max(height(root->left),height(root->right))+1;
    
}
int main(){
node* root= new node(10);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(40);
cout<<height(root);
    return 0;
}

*/

/*..................................4........................................*/


// print element of level k :  k=0 means print root element;
/*
#include<bits/stdc++.h> 
using namespace std;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}

};

void printk(node *root, int k){
    if(root!=NULL){
        if(k==0){
            cout<<root->data<<" ";
            return;
        }
        printk(root->left,k-1);
        printk(root->right,k-1);
    }
}

int main(){
node* root= new node(10);
root->left=new node(20);
root->right= new node(30);
root->left->right=new node(760);
root->left->left=new node(40);
root->left->left->left=new node(50);
printk(root,2);
cout<<endl; 
printk(root ,1);
    return 0;
}
*/

/*...................................5......................................*/

//brute force level order
/*
#include<bits/stdc++.h> 
using namespace std;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
void printk(node *root, int k){
    if(root!=NULL){
        if(k==0){
            cout<<root->data<<" ";
        }
        printk(root->left,k-1);
        printk(root->right,k-1);
    }
}
int main(){
node* root= new node(10);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(40);
int k;
cin>>k;
int a=0;
while(a<=k){
printk(root,a);
a++;
}
    return 0;
}
*/

/*...................................6......................................*/

// efficience solution using queue

/*
#include<bits/stdc++.h> 
using namespace std;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
void printk(node *root){
    if(root==NULL){
     return ;
    }
      queue<node*>q;
      q.push(root);
      while(q.empty()==false){
        node *curr= q.front();
        q.pop();
         cout<<curr->data<<" ";
         if(curr->left!=NULL){
            q.push(curr->left);
         }
         if(curr->right!=NULL){
            q.push(curr->right);
         }
      }
}
int main(){
node* root= new node(10);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(40);
printk(root);
    return 0;
}
*/

/*...................................7......................................*/

// diffenent level of nodes in different line;
// Methode 1 by using single loop 
/*

#include<bits/stdc++.h> 
using namespace std;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
void printk(node *root){
    if(root==NULL){
     return ;
    }
      queue<node*>q;
      q.push(root); q.push(NULL);
      while(q.size()>1){
        node *curr= q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }
         cout<<curr->data<<" ";
         if(curr->left!=NULL){
            q.push(curr->left);
         }
         if(curr->right!=NULL){
            q.push(curr->right);
         }
      }
}
int main(){
node* root= new node(10);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(40);
printk(root);
    return 0;
}
*/

// methode 2, two loop method..
/*
 #include<bits/stdc++.h> 
using namespace std;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
void printk(node *root){
    if(root==NULL){
     return ;
    }
      queue<node*>q;
      q.push(root);
      while(q.empty()==false){
            int c=q.size();
            for(int i=0; i<c; i++){
            node *curr= q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
          }
           cout<<endl;
        }
        
}
int main(){
node* root= new node(10);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(40);
printk(root);
    return 0;
}
*/

/*...................................8......................................*/

// Size of tree...
/*
#include<bits/stdc++.h> 
using namespace std;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
// int printSize(node *root){
//     int size=0;
//     if(root==NULL){
//      return size ;
//     }
//       queue<node*>q;
//       q.push(root);
//       while(q.empty()==false){
//         node *curr= q.front();
//         q.pop();
//         size++;
//          if(curr->left!=NULL){
//             q.push(curr->left);
//          }
//          if(curr->right!=NULL){
//             q.push(curr->right);
//          }
//       }
//       return size;
// }
int getsize(node* root){
    
    if(root==NULL){
        return 0;
    }
    return getsize(root->left) + getsize(root->right) +1;
}
int main(){
node* root= new node(10);
root->left=new node(20);
root->right= new node(30);
root->left->right=new node(50);
root->left->left=new node(40);
cout<<getsize(root);
    return 0;
}
*/

/*...................................9......................................*/

// maximum value of node...

/*
#include<bits/stdc++.h> 
using namespace std;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
int getmax(node* root){
    
    if(root==NULL){
        return INT_MIN;
    }
    else
    return max(root->data,max(getmax(root->left),getmax(root->right)));
}
int main(){
node* root= new node(10);
root->left=new node(20);
root->right= new node(30);
root->left->right=new node(50);
root->left->left=new node(40);
cout<<getmax(root);
    return 0;
}
*/

/*...................................10......................................*/

// Print left view of binary tree...
// what we do its like a preorder traversal but right ko print hone se rok dete h 
/*
#include<bits/stdc++.h> 
using namespace std;
int maxlevel=0;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
void printleftview(node* root,int l){
    if (root==NULL){
        return;
    }
    else{
        if(maxlevel<l){
        cout<<root->data<<" ";
        maxlevel=l;
        }
        printleftview(root->left,l+1);
        printleftview(root->right,l+1);
    }
}
int main(){
node* root= new node(10);
root->left=new node(20);
root->right= new node(30);
root->right->right=new node(50);
root->right->right->right=new node(40);
printleftview(root,1);
    return 0;

}

*/

/*...................................11......................................*/

// Children Sum Property...

/*
#include<bits/stdc++.h> 
using namespace std;
int maxlevel=0;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};

bool childrenSum(node* root){
      if(root==NULL){
        return true;
      }
      if(root->left==NULL && root->right==NULL){ // for leaf node...

        return true;
      }
      int sum=0;
      if(root->left!=NULL){
        sum+=root->left->data;
      }
      if(root->right!=NULL){
        sum+=root->right->data;
      }
      return (root->data==sum && childrenSum(root->left) && childrenSum(root->right));

}
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(95);

cout<<childrenSum(root);
    return 0;

}

*/

// check for balanced binary tree...

// the difference of height of the left subtree and right subtree should not be greater than 1 for the every node...

// neive solution o(n^2)....
/*
#include<bits/stdc++.h> 
using namespace std;
int maxlevel=0;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
int height(node* root){
    if (root==NULL){
        return 0;
    }
        return max(height(root->left),height(root->right))+1;
    
}
bool isBalanced(node* root){
      if(root==NULL){
        return true;
      }
     int lh= height(root->left);
     int rh= height(root->right);
      
      return (abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
      
      
}
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(95);
// root->left->right->left=new node(6);
cout<<isBalanced(root);
    return 0;

}
*/

// efficient approach...
// if balanced then we return height of the three else return -1;
/*
#include<bits/stdc++.h> 
using namespace std;
int maxlevel=0;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
// int height(node* root){
//     if (root==NULL){
//         return 0;
//     }
//         return max(height(root->left),height(root->right))+1;
    
// }
int isBalanced(node* root){
      if(root==NULL){
        return 0;
      }
     int lh= isBalanced(root->left);
     if(lh==-1){
        return -1;
     }
     int rh= isBalanced(root->right);
     if(rh==-1){
        return -1;
     }
      
    if (abs(lh-rh)>1){
        return -1;
    }
    else return max(lh , rh)+1;

}
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(15);
root->left->right->left=new node(6);
cout<<isBalanced(root);
    return 0;

}

*/



// Maximum width of binery tree...
/*
#include<bits/stdc++.h> 
using namespace std;
int maxlevel=0;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
 int t=0;
int maxwidth(node* root){
   if (root==NULL){
    return 0;
   }
   queue<node*> q;
   q.push(root); int width=0;
   while(q.empty()==false){ 
   int res=q.size();
   
   width=max(width,res);
//    cout<<width<<" ";
for(int i=0; i<res; i++){
    node* curr= q.front();
    q.pop();
if(curr->left!=NULL){
    q.push(curr->left);
}
if(curr->right!=NULL){
    q.push(curr->right);
}
}
 }
   return width; 
}
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(15);
root->right->left=new node(6);
cout<<maxwidth(root);
    return 0;

}
*/

// tree to doubly linkedkist...
/*
#include<bits/stdc++.h> 
using namespace std;

struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
node* treetodll(node* root,node*& prev){
//  static node* prev=NULL;
    if(root==NULL){
        return root;
    }
    node * head= treetodll(root->left,prev);
    if(prev==NULL){
        head=root;
    }
    else{
        root->left= prev;
        prev->right=root;
    }
    prev=root;
    treetodll(root->right,prev);
    return head;
}
void display(node* root){
    node* curr=root;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->right;
    }
    
}
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(15);
root->right->left=new node(6);
node* prev=NULL;
root = treetodll(root,prev);
display(root);

return 0;
}
*/



// construct binary tree from inordered and preorder...

// #include<bits/stdc++.h>
// using namespace std;
// struct node{
// int data;
// node* left;
// node* right;
// public :
// node(int x){
//     data=x;
//     left= NULL;
//     right=NULL;  
// }
// };
// int preIndex=0;
// node* cTree(int in[],int pre[],int is, int ie ){
// if(is>ie){
//     return NULL;
// }

// node* root = new node(pre[preIndex++]);int Index=0;
// for(int i=is; i<=ie; i++){
//     if(in[i]==root->data){
//         Index=i;
//         break;
//     }
// }
// root->left= cTree(in, pre,is,Index-1);
// root->right=cTree(in,pre,Index+1,ie);
// return root;
// }
// void inorder(node *root){
//     if(root!=NULL){
//      inorder(root->left);
//      cout<<root->data<<" ";
//      inorder(root->right);


//     }
// }
// int main(){
// int in[]={40,20,60,50,70,10,80,100,30};
// int pre[]={10,20,40,50,60,70,30,80,100};
// node* root =cTree(in,pre, 0,8);

// inorder(root);

//     return 0;
// }


// spiral printing of tree;
// its like a level order traversal of tree with some changes..
// method 1;

/*
#include<bits/stdc++.h> 
using namespace std;

struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
 
void spriral(node* root )
{
    if(root==NULL){
        return;
    }
    queue<node*>q;
    stack<int>s;
    bool reverse = false;
    q.push(root);
    while(q.empty()==false){
        int size=q.size();
        for(int i=0; i<size; i++){
            node* curr= q.front();
            q.pop();
            if(reverse){
                s.push(curr->data);
            }
            else{
                cout<<curr->data<<" ";
            }
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!= NULL){
                q.push(curr->right);
            }
        }
        if(reverse){
            while(s.empty()==false){
            cout<<s.top()<<" ";
            s.pop();
            }
        }
        reverse=!reverse;
    }

}
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(15);
root->right->left=new node(6);
spriral(root);
return 0;
}

*/

// Method -2 two stack method...
/*
#include<bits/stdc++.h> 
using namespace std;

struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
 
void spriral(node* root )
{
    if(root==NULL){
        return;
    }
    stack<node*>s1;
    stack<node*>s2;
    
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
       
        while(!s1.empty()){
           node* temp= s1.top();
           s1.pop();
           cout<<temp->data<<" ";
           
            if(temp->right){
            s2.push(temp->right);
           }
           if(temp->left){
            s2.push(temp->left);
           }
        
        }
        while(!s2.empty()){
            node * curr= s2.top();
               s2.pop();    
            cout<<curr->data<<" ";
        
              if(curr->left){
            s1.push(curr->left);
           }
           if(curr->right){
            s1.push(curr->right);
           }
        
        }
    }
}
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(15);
root->right->left=new node(6);
spriral(root);
return 0;
}


*/

// diameter of binary tree... 
// longest pathe between two leaf node..
// method -1 o(n^2);
/*
#include<bits/stdc++.h> 
using namespace std;

struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
int height(node* root){
    if(root==NULL)return 0;
    return max(height(root->left),height(root->right))+1;
}
int diameter(node* root){
    if(root==NULL){
        return 0;
    }
    int d=1+ height(root->left)+height(root->right);
    int d1= diameter(root->left);
    int d2= diameter(root->right);
    return max(d,max(d1,d2));
}

   
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(15);
root->right->left=new node(6);
cout<<diameter(root);
return 0;
}
*/


// Methode - 2... o(n)  we store result while computing height...
/*
#include<bits/stdc++.h> 
using namespace std;
int res=0, h=0;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
int height(node* root){
    if(root==NULL)return 0;
    int lh= height(root->left);
    int rh= height(root->right);
    res=max(res,lh+rh+1);
    return max(lh,rh)+1;
}
int diameter(node* root){
   h= height(root);
   return res;
}

   
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(15);
root->right->left=new node(6);
cout<<diameter(root);
return 0;
}

*/


 // LCA latest common ancestor
// methode -1..
/*

 #include<bits/stdc++.h> 
using namespace std;
int res=0, h=0;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
bool path(node* root, vector<node*>  &p, int n)
{
if(root==NULL){
    return false;
}
p.push_back(root);
if(root->data==n ){
    return true;
}
if(path(root->left, p,n)|| path(root->right,p,n)){
    return true;
}
p.pop_back();
return false;
}

node* LCA(node* root, int n1, int n2){
    vector<node*> path1,path2;
if(path(root,path1,n1)==false || path(root,path2, n2)==false){
return NULL;
}
for(int i=0 ; i<path1.size()-1 && i<path2.size()-1; i++){
if(path1[i+1]!=path2[i+1]){
    return  path1[i];
}
}
return NULL;

}
   
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(15);
root->right->left=new node(6);
cout<<LCA(root,5,15)->data;
return 0;
}
*/

// method - 2...
/*
#include<bits/stdc++.h> 
using namespace std;
int res=0, h=0;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
node* LCA(node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1|| root->data==n2){// if any one of them  is equal of the data of the root..
        return root;
    }
    node* lca1= LCA(root->left,n1,n2);
    node* lca2= LCA(root->right,n1,n2);
    if(lca1!=NULL && lca2!=NULL){ // one of them present in one subtree and onther present on anthor subtree..
        return root;
    }
    if(lca1!=NULL){ // one subtree contain both of them..
        return lca1;
    }
    else{
        return lca2;
    }

}
   
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(15);
root->right->left=new node(6);
cout<<LCA(root,5,6)->data;
return 0;
}
*/




// Burn a binery tree from left..

/*
 #include<bits/stdc++.h> 
using namespace std;
int res=0, h=0;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};

int burnleaf(node* root , int leaf, int &dist){
    if(root==NULL){
        return 0;
    }
    if(root->data==leaf){
        dist=0;
        return 1;
    }
    int ldist=-1;
    int rdist=-1;
    int lh= burnleaf(root->left,leaf, ldist);
    int rh= burnleaf(root->right,leaf, rdist);
    if(ldist!=-1){
        dist=ldist+1;
          res=max(res,dist+rh);
    }
   else if(rdist!=-1){
        dist=rdist+1;
        res=max(res,dist+lh);
    }
    return max(lh,rh)+1;
}
   
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(15);
root->right->left=new node(6);
int dist=-1;
cout<<burnleaf(root, 20,dist);
cout<<"time is "<<res;
return 0;
}
*/



// count nodes in complete binery tree..
// m1

/*
 #include<bits/stdc++.h> 
using namespace std;
int res=0, h=0;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};

int countnode(node* root ){
    if(root==NULL){
        return 0;
    }
    
    return countnode(root->left)+countnode(root->right)+1;
}
   
int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(15);
root->right->left=new node(6);
cout<<countnode(root);

return 0;
}
*/

// M-2 O(logn*logn);
/*
 #include<bits/stdc++.h> 
using namespace std;
int res=0, h=0;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
int countnode(node* root){
    if(root==NULL){
        return 0;
    }
    int lh=0, rh=0;
    node* curr= root;
while(curr!=NULL){
lh++;
curr=curr->left;
}
 node* currr= root;
while(currr!=NULL){
rh++;
currr=currr->right;
}
if(lh==rh){
    return pow(2,lh)-1;
}
else{
    return 1+ countnode(root->left) + countnode(root->right);
}
}

int main(){
node* root= new node(50);
root->left=new node(20);
root->right= new node(30);
root->left->left=new node(5);
root->left->right=new node(15);
// root->right->left=new node(6);
cout<<countnode(root);
return 0;
}
*/


// serialization and desialization



//  #include<bits/stdc++.h> 
// using namespace std;
// int res=0, h=0;
// struct node{
// int data;
// node* left;
// node* right;
// public :
// node(int x){
//     data=x;
//     left= NULL;
//     right=NULL;  
// }
// };
// void serialization(node* root){
//     if(root==NULL)
//     {
//         cout<<-1<<" ";
//         return;
//     }
//     cout<<root->data<<" ";
//     serialization(root->left);
//     serialization(root->right);
// }  
// int main(){
// node* root= new node(50);
// root->left=new node(20);
// root->right= new node(30);
// root->left->left=new node(5);
// root->left->right=new node(15);
// root->right->left=new node(6);
// vector<int>arr;
// serialization(root);
// return 0;
// }

// 50 20 5 -1 -1 15 -1 -1 30 6 -1 -1 -1 
// deserialization

/*

#include<bits/stdc++.h> 
using namespace std;
int res=0, h=0;
struct node{
int data;
node* left;
node* right;
public :
node(int x){
    data=x;
    left= NULL;
    right=NULL;  
}
};
const int empt=-1;
int Index=0;
node* deserialization(vector<int>&arr){  
if(Index==arr.size()){
    return NULL;
}
int val= arr[Index++];
if(val==empt){
    return NULL;
}
 node* root = new node(val);
 root->left= deserialization(arr);
 root->right= deserialization(arr);
 return root;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){

vector<int>arr{50 ,20 ,5 ,-1 ,-1 ,15 ,-1 ,-1 ,30 ,6 ,-1 ,-1 ,-1 };
node*root=deserialization(arr);
preorder(root);
return 0;
}
*/


// iterative inorder , preorder and postorder solution

// #include<bits/stdc++.h> 
// using namespace std;
// int res=0, h=0;
// struct node{
// int data;
// node* left;
// node* right;
// public :
// node(int x){
//     data=x;
//     left= NULL;
//     right=NULL;  
// }
// };

// void inorder(node* root){
//     stack<node*>s;
//     node* curr=root;
//     while(curr!=NULL || s.empty()==false){
//         while(curr!=NULL){
//             s.push(curr);
//             curr=curr->left;
//         }
//         curr=s.top();s.pop();
//         cout<<curr->data<<" ";
//         curr=curr->right;
//     }
// }
// void preorder(node* root){
//     stack<node*>s;
//     node* curr=root;
//     while(curr!=NULL || s.empty()==false){
//         while(curr!=NULL){
//             cout<<curr->data<<" ";
//             s.push(curr);
//             curr=curr->left;
//         }
//         curr=s.top(); s.pop();
//         curr=curr->right;
//     }
// }
// void postorder(node* root){
//     stack<node*>s;

// }
// int main(){
// node* root= new node(50);
// root->left=new node(20);
// root->right= new node(30);
// root->left->left=new node(5);
// root->left->right=new node(15);
// root->right->left=new node(6);
// inorder(root);
// cout<<endl;
// preorder(root);
// return 0;
// }


// 27/4/2023

#include<bits/stdc++.h>
using namespace std;
class node{
    public:
int key;
node* left;
node* right;
node(int k){
    key=k;
    left=right=NULL;
}
};
int height(node* root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left), height(root->right))+1;
}
void inorder(node* root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}
int printkthnode(node* root, int k){
    if(root==NULL){
        return 0;
    }
    int h= max(printkthnode(root->left,k-1),printkthnode(root->right,k-1))+1;
    if(k==0){
        cout<<root->key<<" ";
    }
    return h;
}
void bfs(node* root){
    if(root==NULL){
        return ;
    }
    queue<node*>q;
    q.push(root);
    while(q.empty()==false){
        int s=q.size();
        for(int i=0; i<s; i++){
        node* curr= q.front();
        q.pop();
        cout<<curr->key<<" ";
            if(curr->left!=NULL){
                q.push(curr->left);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
}
int maxval(node* root){
    if(root==NULL)return INT_MIN;
    return max(root->key, max(maxval(root->left),maxval(root->right)));
}
void leftview1(node* root,int seen, int& max){
    if(root==NULL)return;
    if(seen>max){
        cout<<root->key<<" ";
        max=seen;
    }
    leftview1(root->left,seen+1,max);
    leftview1(root->right,seen+1,max);
    seen=true;

}
void leftview2(node* root){
    if(root==NULL)return;
    queue<node*>qu;
    qu.push(root);
    while(qu.empty()==false){
        int sizee=qu.size();
        for(int i=0; i<sizee;i++){
            node* curr= qu.front();
            qu.pop();
            if(i==0){
                cout<<curr->key<<" ";
            }
            if(curr->left!=NULL){
                qu.push(curr->left);
            }
            if(curr->right!=NULL){
                qu.push(curr->right);
            }
        }
    }
}
bool childrensum(node* root){
    if(root==NULL)return true;
    if(root->left==NULL && root->right==NULL)return true;
    int sum=0;
    if(root->left!=NULL)sum+=root->left->key;
    if(root->right!=NULL)sum+=root->right->key;
    return (root->key==sum && childrensum(root->left)&&childrensum(root->right));
}
// brute force
/*
bool isBalanced(node* root){
    if(root==NULL)return true;
    int lh= height(root->left);
    int rh= height(root->right);
    return (abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
}
*/
// efficient

int isBalanced(node* root){
    if(root==NULL)return 0;
    int lh=isBalanced(root->left); 
    if(lh==-1)return -1;
    int rh=isBalanced(root->right);
    if(rh==-1){
        return -1;
    }
    if(abs(lh-rh)>1)return -1;
    else return max(lh,rh)+1;
}
node* TreetoDLL(node* root, node* &prev){
if(root==NULL)return root;
node* head=TreetoDLL(root->left,prev);
if(prev==NULL)head=root;
else{
    root->left=prev;
    prev->right=root;
}
prev=root;
TreetoDLL(root->right,prev);
return head;
}
//m1
// void spiralPrint(node* root){
//     if(root==NULL)return;
//     queue<node*>qu;
//     stack<node*>st;
//     qu.push(root);
//     bool reverse=false;
//     while(qu.empty()==false){
//         int s=qu.size();
//         for(int i=0; i<s; i++){
//             node* curr= qu.front(); qu.pop();
//             if(reverse){
//                 st.push(curr);
//             }
//             else{
//                 cout<<curr->key<<" ";
//             }
//             if(curr->left!=NULL)qu.push(curr->left);
//             if(curr->right!=NULL)qu.push(curr->right);
//         }
//         if(reverse){
//                 while(st.empty()==false){cout<<st.top()->key<<" "; st.pop();}
//          }
//           cout<<endl;
//          reverse=!reverse;
// }
// }


//m2
// void spiralPrint(node* root){
//     if(root==NULL)return ;
//     stack<node*>s1;
//     stack<node*>s2;
//     s1.push(root);
//     while(s1.empty()==false || s2.empty()==false){
//         while(s1.size()>0){
//             cout<<s1.top()->key<<" ";
//             node* curr= s1.top(); s1.pop();
//             if(curr->left)s2.push(curr->left);
//             if(curr->right)s2.push(curr->right);
//         }
//         cout<<endl;
//         while(s2.size()>0){
//             node* curr=s2.top();s2.pop();
//             cout<<curr->key<<" ";
//             if(curr->right)s1.push(curr->right);
//             if(curr->left)s1.push(curr->left);
//         }
//         cout<<endl;
//     }
// }

// int Treedia(node* root, int&res){
//     if(root==NULL)return 0;
//     int d0=height(root->left)+height(root->right)+1;
//     int d1=Treedia(root->left,res);
//     int d2=Treedia(root->right,res);
//     res= max({d0,d1,d2});
//     return res;
// }

// int Treedia(node* root,int&res){
//     if(root==NULL)return 0;
//     int lh= Treedia(root->left,res);
//     int rh= Treedia(root->right,res);
//     res=max(res,lh+rh+1);
//     return max(lh,rh)+1;
// }

//lca
// bool path(vector<node*>&p,int n, node*root){
//     if(root==NULL)return false;
//     p.push_back(root);
//     if(root->key==n)return true;
//     if(path(p,n,root->left) || path(p,n,root->right))return true;
//     p.pop_back();
//     return false;
// }



// node * lca(node* root,int n1, int n2){
//     if(root==NULL)return NULL;
//     if(root->key==n1 || root->key==n2)return root;
//     node* lca1= lca(root->left,n1,n2);
//     node* lca2= lca(root->right,n1,n2);
//     if(lca1!=NULL && lca2!=NULL)return root;    
//     if(lca1!=NULL)return lca1;
//     else return lca2;
// }

int main()
{
node *root= new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->left=new node(6);
root->right->right= new node(7);
inorder(root);
cout<<endl;
// cout<<endl<<height(root)<<endl;
// //node at dist k
// int k;
// cin>>k;
// printkthnode(root,k);

// level order traversal
// bfs(root);

// maximum node value;
// cout<<maxval(root);

// left view of tree;
// int seen=1,max=0;
// leftview1(root,seen,max);
// leftview2(root);

// children sum property...
// cout<<childrensum(root);

// check for balanced binary tree..
// cout<<isBalanced(root);

// tree to doubly linked list...
// node* prev=NULL;
// node* head=TreetoDLL(root, prev);
// cout<<head->key<<endl;

//spiral printing
// spiralPrint(root);

//diameter of a tree
// int res=0;
// Treedia(root,res);
// cout<<res<<endl;

//lowest common ancestor
int n1=5;int n2=7;
// vector<node*>p1,p2;
// if(path(p1,n1,root)==false || path(p2,n2,root)==false)cout<<"NULL"<<endl;
// else{
//     for(int i=0; i<p1.size()-1&& i<p2.size()-1 ; i++){
//         if(p1[i+1]!=p2[i+1])cout<<p1[i]->key<<endl;
//         break;
//     }
// }
// node* lcaa=lca(root,n1,n2);
// cout<<lcaa->key<<endl;

return 0;
}