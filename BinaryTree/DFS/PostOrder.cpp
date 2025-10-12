#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

//===================================================================================================
void postOrder(Node* root){
    if(root==NULL)  return ;
    postOrder(root->left);      //call 1 =>left call
    postOrder(root->right);     //call 2 =>right call
    cout<< (root->data) <<" "; //kaam
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

    postOrder(a);

    return 0;
}