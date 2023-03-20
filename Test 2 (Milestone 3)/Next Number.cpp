/*
Given a large number represented in the form of a linked list. Write code to increment the number by 1 in-place(i.e. without using extra space).
Note: You don't need to print the elements, just update the elements and return the head of updated LL.
Input Constraints:
1 <= Length of Linked List <=10^6.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Output Format :
Line 1: Updated linked list elements 
Sample Input 1 :
3 9 2 5 -1
Sample Output 1 :
3 9 2 6
Sample Input 2 :
9 9 9 -1
Sample Output 1 :
1 0 0 0 
*/

/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/

Node* helper(Node *head) {
    
    //base case -> increment the last number by one
    if(head -> next == NULL){
        head -> data++;
        return head;
    }
    
    head -> next = helper(head -> next);
    
    if(head -> next -> data > 9) {
        head -> next -> data = 0;
        head -> data += 1;
    }
    
    return head;
}

Node* NextLargeNumber(Node *head) {
    // recursion will incerement the number accordingly
    head = helper(head);
    
    //if the first element is > 9 then we  set its value to 0 and add a new node with value 1 to it 
    if(head -> data > 9) {
        Node *newNode = new Node(1);
        head -> data = 0;
        newNode -> next = head;
        head = newNode;
    }
    return head;
}


