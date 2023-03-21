/*
Check cousins

Given the binary Tree and two nodes say ‘p’ and ‘q’. Determine whether the two nodes are cousins of each other or not. Two nodes are said to be 
cousins of each other if they are at same level of the Binary Tree and have different parents.
Do it in O(n).

Input format :
Line 1 : Nodes in level order form (separated by space). If any node does not have left or right child, take -1 in its place
Line 2 : integer value of p 
Line 3 : Integer value of q

Output format :
true or false

Constraints :
1 <= N <= 10^5

Sample Input :
5 6 10 2 3 4 -1 -1 -1 -1 9 -1 -1 -1 -1
2
4

Sample Output :
true
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
bool areSiblings(BinaryTreeNode<int> *root, int p, int q) {
    if(root == NULL) {
        return false;
    }
    
    if(root -> left and root -> right) {
        int left = root -> left -> data;
        int right = root -> right -> data;
        
        if((left == p and right == q) or (left == q or right == p)) {
            return true;
        }   
    } else {
        return false;
    } 
     return areSiblings(root -> left, p, q) or areSiblings(root -> right, p, q);
}

int getLevel(BinaryTreeNode<int> *root, int data, int count) {
    if(root == NULL) {
        return 0;
    } else if(root -> data == data) {
        return count;
    }
    
    int left = getLevel(root -> left, data, count + 1);
    if(left) {
        return left;
    } else {
        return getLevel(root -> right, data, count + 1);
    }
}
bool isCousin(BinaryTreeNode<int> *root, int p, int q) {
    // Write your code here
	if((getLevel(root, p, 1) == getLevel(root, q, 1)) and !areSiblings(root, p, q)) {
        return true;
    } else {
        return false;
    }
}

// Time Complexity : O(n)
// Auxillary Space : O(n)
