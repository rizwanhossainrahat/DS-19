#include<bits/stdc++.h>
using namespace std;
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int mx=0;
int maxHeight(TreeNode<int> *root)
{
    if(root==NULL) return 0;
    int l=maxHeight(root->left);
    int r=maxHeight(root->right);
    int d=l+r;
    mx=max(mx,d);
    return max(l,r)+1;
}
int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.

    mx=0;
    int h=maxHeight(root);
    return mx;

    //   int l=maxHeight(root->left);
    // int r=maxHeight(root->right);
    // int d=l+r;
    // return max(mx,d);
}

int main()
{
    
    return 0;
}