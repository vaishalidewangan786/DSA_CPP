#include<bits/stdc++.h>
using namespace std;
class TrieNode{
    public:

TrieNode* children[26];
bool terminal;
TrieNode(){
   
    for(int i=0; i<26; i++){
        children[i]=NULL;
    }
    terminal=false;
}
};

class Trie{
public:
TrieNode* root;
Trie(){
root=new TrieNode();
}
bool searchUtil(TrieNode* root, string word){
    if(word.size()==0){
        return root->terminal;
    }
    int index= word[0]-'a';
    TrieNode* child;
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        return false;
    }
    return searchUtil(child,word.substr(1));
}

bool searchWord(string word){
    return searchUtil(root,word);
}
void insertUtil(TrieNode* root, string word){
    if(word.size()==0){
        root->terminal=true;
    }
    int index= word[0]-'a';
    TrieNode* child;
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        child=new TrieNode(word[0]);
        root->children[index]=child;
    }
    insertUtil(child,word.substr(1));
}
void insertWord(string word){
    insertUtil(root,word);
}

};
int main(){
    Trie *t = new Trie();
    t->insertWord("shali");
    t->insertWord("cat");
    t->insertWord("dog");
    cout<<t->searchWord("dog")<<endl;

    return 0;
}




