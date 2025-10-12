#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

//===================================================================================================
void nthLevel(Node* root , int curr , int level){
    if(root==NULL)  return ;
    if(curr==level){
        cout<< (root->data) <<" "; //kaam
    }
    nthLevel(root->left,curr+1,level);      //call 1 =>left call
    nthLevel(root->right,curr+1,level);     //call 2 =>right call
}
//===================================================================================================


int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

    nthLevel(a,1,2);

    return 0;
}