#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

//===================================================================================================
int levels(Node* root) {
    if(root == NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void lOrder(Node* root, vector<vector<int>>& ans, int level) {
    if(root == NULL) return;
    ans[level].push_back(root->data);
    lOrder(root->left, ans, level + 1);
    lOrder(root->right, ans, level + 1);
}

vector<vector<int>> levelOrder(Node* root) {
    int n = levels(root);
    vector<vector<int>> ans(n);
    lOrder(root, ans, 0);
    return ans;
}


//===================================================================================================
    vector<vector<int>> levelOrderUsingQueue(Node* root) {
        vector<vector<int>> result;
        if (!root) return result;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();             // number of nodes in current level
            vector<int> level;

            for (int i = 0; i < size; i++) {
                Node* node = q.front();
                q.pop();

                level.push_back(node->data);

                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }

            result.push_back(level);
        }

        return result;
    }


int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    vector<vector<int>> ans = levelOrder(a);

    // Print the result
    for(const auto& level : ans) {
        for(int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
