/*
Remove leaf nodes in Tree
Remove all leaf nodes from a given generic Tree. Leaf nodes are those nodes, which don't have any children.

Note : Root will also be a leaf node if it doesn't have any child. You don't need to print the tree, just remove all leaf nodes and return the updated root.

Input format :
Line 1 : Elements in level order form separated by space (as per done in class). 

Order is - `
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element `

Output Format :
Elements are printed level wise, each level in new line (separated by space)

Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 

Sample Output 1 : (Level wise, each level in new line)
10
20
*/

// Following is the given Tree node structure.
/**************
class TreeNode {
	TreeNode<T>** children;
	int childCount;

	public:
	T data;

	TreeNode(T data);	// Constructor
	int numChildren();
	void addChild(TreeNode<T>* child);
	TreeNode<T>* getChild(int index);
	void setChild(int index, TreeNode<T>* child);
    void removeChild(int index);
 
};
***************/
#include<vector>
TreeNode<int>* removeLeafNodes(TreeNode<int>* root) {
    // Write your code here
	if(root == NULL) {
        return NULL;
    } else if (root -> numChildren() == 0) {
        return NULL;
    }
    
    for(int i = 0; i < root -> numChildren(); i++) {
        TreeNode<int> *temp = root -> getChild(i);
        if(temp -> numChildren() == 0) {
            int j = i;
			for(;j < root -> numChildren() - 1; j++) {
                root -> setChild(j, root -> getChild(j + 1));
                // Here we remove the child of root that is leaf and update the children pointer 
            }
            root -> removeChild(j);
            i--;
        }
    }
    
    for(int i = 0; i < root -> numChildren(); i++) {
        TreeNode<int> *temp = removeLeafNodes(root -> getChild(i));
        root -> setChild(i,temp);
    }
    
    return root;
}

// Time Complexity : O(n)
// Auxillary Space : O(1)
