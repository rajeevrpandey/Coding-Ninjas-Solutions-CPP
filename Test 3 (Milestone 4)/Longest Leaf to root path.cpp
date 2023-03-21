/*
Longest Leaf to root path
Given a binary tree, return the longest path from leaf to root. Longest means, a path which contain maximum number of nodes from leaf to root.

Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Line 1 : Binary Tree 1 (separated by space)

Sample Input 1 :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1

Sample Output 1 :
9
3
6
5
*/

// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/
#include<vector>
vector<int>* longestPath(BinaryTreeNode<int>* root) {
	// Write your code here
	if(root == NULL) {
        vector<int> *temp = new vector<int>();
        return temp;
    }
    
    vector<int> *left = longestPath(root -> left);
    vector<int> *right = longestPath(root -> right);
    
    if(left -> size() > right -> size()) {
        left -> push_back(root -> data);
        return left;
    } else {
        right -> push_back(root -> data);
        return right;
    }
}

// Time Complexity : O(n)
// Auxillary Space : O(n)
