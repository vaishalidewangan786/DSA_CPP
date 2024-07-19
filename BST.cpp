// Binary Search Tree..


// Search in BST..  


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
bool flag=false;
void search(node* root, int s){
if(root==NULL){
    return ;
}
if(root->data==s){
    flag =true;
}
else if(root->data<s){
    search(root->right,s);
}
else{
    search(root->left,s);
}
}
   
int main(){
node* root= new node(10);
root->left=new node(8);
root->right= new node(15);
root->left->left=new node(5);
root->left->right=new node(9);
root->right->left=new node(13);

int s;
cin>>s;

search(root,s);
if(flag){
    cout<<s<<" found"<<endl;
}
else{
    cout<<"Not found"<<endl;
}
return 0;
}





// insert Node in BST..

// recursive solution

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
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


node* insert(node* root,int s){
    if(root==NULL){
        return new node(s);
    }
    else if(root->data>s){
        root->left=insert(root->left,s);
    }
    else if(root->data<s){
        root->right=insert(root->right,s);
    }
    return root;
} 
int main(){
node* root= new node(10);
root->left=new node(8);
root->right= new node(15);
root->left->left=new node(5);
root->left->right=new node(9);
root->right->left=new node(13);

int s;
cin>>s;

node* t=insert(root,s);

inorder(root);
return 0;
}


// Iterative solution
// iterative solution takes o(H) time complexity and o(1) space..

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
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* insert(node* root,int s){
    node* temp= new node(s);
    node* parent=NULL;
    node* curr=root;
    while (curr!=NULL)
    {
     parent=curr;
     if(curr->data> s){
        curr=curr->left;
     }
     else if(curr->data<s){
        curr=curr->right;
     }
     else{
        return root;
     }
    }
    if(parent==NULL){
        return temp;
    }
    else if(parent->data>s){
        parent->left=temp;
    }
    else if(parent->data<s){
        parent->right=temp;
    }
    return root;
} 
int main(){
node* root= new node(10);
root->left=new node(8);
root->right= new node(15);
root->left->left=new node(5);
root->left->right=new node(9);
root->right->left=new node(13);

int s;
cin>>s;

node* t=insert(root,s);

inorder(root);
return 0;
}


*/


// deletion in BST..

// if we are deleting the leaf node then we can simply delete if.. but if deleting node has 
// left or right node then we make the existing node as current node 
// but both the root are present in deleting node then we have two option 
// we can eighter replace root node with closest min value or closest high value..
// but we always replace with closest higher value.. which is next inorder successor..

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
bool flag=false;
node* getsuccessor(node* curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
node* deletenode(node* root, int s){
if(root==NULL)
{
    return root;
}
if(root->data >s){
    root->left=deletenode(root->left,s);
}
else if(root->data<s){
    root->right=deletenode(root->right,s);
}
else{
    if(root->left==NULL){
         node* temp= root->right;
         delete(root);
         return temp;
    }
    else if(root->right==NULL){
        node* temp = root->left;
        delete(root);
        return temp;
    }
    else{
            node* succ= getsuccessor(root);
            root->data=succ->data;
            root->right=deletenode(root->right,succ->data);
    }
}
  return root;
}
   void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
node* root= new node(10);
root->left=new node(8);
root->right= new node(15);
root->left->left=new node(5);
root->left->right=new node(9);
root->right->left=new node(13);

int s;
cin>>s;
inorder(root);
node* t=deletenode(root,s);
cout<<endl;
inorder(root);
return 0;
}
*/

// floor root -- largest closest value
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

node* search(node*root,int s){
    node* res=NULL;
    while(root!=NULL){
        if(root->data==s){
            return root;
        }
        else if(root->data>s){
     
            root=root->left;

        }
        else{
                   res=root;
            root=root->right;
        }
    }
    return res;
}
     void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
node* root= new node(10);
root->left=new node(8);
root->right= new node(15);
root->left->left=new node(5);
root->left->right=new node(9);
root->right->left=new node(13);
inorder(root);
int s;
cin>>s;

node* t=search(root,s);
cout<<t->data<<endl;
return 0;
}
*/

// find kth smallest element in bst
// brute force
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
int cnt=0; 
void findkthsmallele(node* root, int k){
    if(root==NULL){
   return;
    }

else{
    findkthsmallele(root->left,k);
    cnt++;
    if(cnt==k){
        cout<<root->data<<endl;
    }
    findkthsmallele(root->right,k);

}


}

     void inorder(node* root){

    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
node* root= new node(10);
root->left=new node(8);
root->right= new node(15);
root->left->left=new node(5);
root->left->right=new node(9);
root->right->left=new node(13);
inorder(root);
int k;
cin>>k;
findkthsmallele(root,k);
return 0;
}
*/


// efficient 
/*
#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right;
  int lCount;
  Node(int k){
      key=k;
      left=right=NULL;
      lCount=0;
  }
};

Node* insert(Node* root, int x)
{
    if (root == NULL)
        return new Node(x);

    if (x < root->key) {
        root->left = insert(root->left, x);
        root->lCount++;
    }
 
    else if (x > root->key)
        root->right = insert(root->right, x);
    return root;
}

Node* kthSmallest(Node* root, int k)
{
    if (root == NULL)
        return NULL;
 
    int count = root->lCount + 1;
    if (count == k)
        return root;
 
    if (count > k)
        return kthSmallest(root->left, k);
 
    return kthSmallest(root->right, k - count);
}

int main() {
	
	Node* root = NULL;
    int keys[] = { 20, 8, 22, 4, 12, 10, 14 };
 
    for (int x : keys)
        root = insert(root, x);
 
    int k = 4;
    Node* res = kthSmallest(root, k);
    if (res == NULL)
        cout << "There are less than k nodes in the BST";
    else
        cout << "K-th Smallest Element is " << res->key;
    return 0;
	
}
*/



// Check BST- correct and efficient..


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
// bool isBST(node* root, int mn, int mx){
//     if(root==NULL){
//         return true;
//     }
//     return (root->data>mn && root->data<mx && isBST(root->right,root->data,mx) && isBST(root->left,mn,root->data));
// }

//      void inorder(node* root){

//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// int main(){
// node* root= new node(10);
// root->left=new node(8);
// root->right= new node(15);
// root->left->left=new node(5);
// root->left->right=new node(66);
// root->right->left=new node(13);
// inorder(root);
// cout<<endl;
// cout<<isBST(root,INT_MIN, INT_MAX)<<endl;
// return 0;
// }

// most efficient solution :- travers inorderd and check elements are in increasing order..

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
int n=INT_MIN;
bool isBST(node* root){
    if(root==NULL){
        return true;
    }
    isBST(root->left);
    if(root->data>n){
        n=root->data;
    }
    else if(root->data<n){
        return false;
    }
    isBST(root->right);
    return true;
}
int main(){
node* root= new node(10);
root->left=new node(8);
root->right= new node(15);
root->left->left=new node(5);
root->left->right=new node(9);
root->right->left=new node(13);
// inorder(root);
cout<<endl;
cout<<isBST(root)<<endl;
return 0;
}

*/

// Fix BST with two node swapped..
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
     void inorder(node* root){

    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
node* pre =NULL; node*f=NULL; node*s=NULL;
void fix(node* root){
    if(root==NULL){
        return ;
    }
    fix(root->left);
  if(pre!=NULL && root->data<pre->data){
     if(f==NULL)
        f=pre;
     
     s=root;
  }
  pre=root;
  fix(root->right);
 
}

int main(){
node* root= new node(18);
root->left=new node(60);
root->right= new node(70);
root->left->left=new node(4);
root->right->left=new node(8);
root->right->right=new node(80);
inorder( root);
fix(root);
swap(f->data,s->data);
cout<<endl;
inorder( root);
return 0;
}
*/

// pair sum with given BST;


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
// vector<int> v;

// void inorder(node* root){
//     if(root==NULL){
//         return;
//     }
//     inorder(root->left);
//    v.push_back(root->data);
//     inorder(root->right);
// }

// int main(){
// node* root= new node(10);
// root->left=new node(8);
// root->right= new node(15);
// root->left->left=new node(5);
// root->left->right=new node(66);
// root->right->left=new node(13);
// int n;
// cin>>n;
// inorder(root);

// int s=0; bool flag=false;
// int e=v.size();
// while(s<e){
//     if(v[s]+v[e]==n){
//         flag=true;
//         cout<<"YES"<<endl;
//     }
//     else if(v[s]+v[e]>n){
//         e--;
//     }
//     else{
//         s++;
//     }
// }
// if(flag==false){
//     cout<<"NO"<<endl;
// }


// return 0;
// }




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
// recursive
/*
bool  search(node* root, int s){
    if(root==NULL)return false;
    if(root->data==s){
        return true;
    }
    else if(root->data<s){
       return search(root->right,s);
    }
    else {
        return search(root->left,s);
    } 
}
*/

//iterative
// bool search(node* root,int s){
//     if(root==NULL)return false;
//     while(root!=NULL){
//         if(root->data==s)return true;
//         else if(root->data>s) root=root->left;
//         else root=root->right;
//     }
//     return false;
// }

void inorder(node*root){
    stack<node*>st;
    node*curr=root;
    while(curr!=NULL || st.empty()==false){
    while(curr!=NULL){
        st.push(curr);
        curr=curr->left;
    }
    curr=st.top(); st.pop();
    cout<<curr->data<<" ";
    curr=curr->right;
    }
}
//recursive insert
// node* insert(node* root, int s){
//     if(root==NULL){return new node(s);}
//     else if(root->data<s){
//         root->right=insert(root->right,s);
//     }
//     else{
//         root->left=insert(root->left,s);
//     }
//     return root;
// }

//iterative;

// node* insert(node* root, int s){
//     node* newnode= new node(s);
//     node* parent=NULL; node* curr=root;
//     while(curr!=NULL){
//         parent=curr;
//         if(s>curr->data){
//             curr=curr->right;
//         }
//         else if(curr->data>s){
//             curr=curr->left;
//         }
//         else{
//             return root;
//         }
//     }
//     if(parent==NULL)return newnode;
//     if(parent->data>s){
//         parent->left=newnode;
//     }
//     else{
//         parent->right=newnode;
//     }
//     return root;
// }


int main(){
node* root= new node(10);
root->left=new node(8);
root->right= new node(15);
root->left->left=new node(5);
root->left->right=new node(9);
root->right->left=new node(13);

// int s;
// cin>>s;
// (search(root,s))?cout<<"found"<<endl : cout<<"not found"<<endl;
inorder(root);
//insert
// int s;
// cin>>s;
// root=insert(root,s);
// inorder(root);


// deletion 

return 0;
}

