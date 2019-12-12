// C program for different tree traversals 
#include <iostream> 
#include <String> 
using namespace std;

/* 
Tree Depth traversals using RECURSION.

A binary tree node has data, pointer to left child
and a pointer to right child 

There are generally two types of traversal:
− breadth first
− depth first. (in this exemple).
•There are three variants for depth first traverse
a tree. They're called preorder, inorder, and
postorder.

Preorder traversal is used to create a copy of the tree
Postorder traversal is used to delete the tree.

*/
struct Node
{
	string data;
	struct Node* left, * right;
	Node(string data)
	{
		this->data = data;
		left = right = NULL;
	}
};

/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */
void printPostorder(struct Node* node)
{
	if (node == NULL)
		return;

	// first recur on left subtree 
	printPostorder(node->left);

	// then recur on right subtree 
	printPostorder(node->right);

	// now deal with the node 
	cout << node->data << " ";
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct Node* node)
{
	if (node == NULL)
		return;

	/* first recur on left child */
	printInorder(node->left);

	/* then print the data of node */
	cout << node->data << " ";

	/* now recur on right child */
	printInorder(node->right);
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct Node* node)
{
	if (node == NULL)
		return;

	/* first print data of node */
	cout << node->data << " ";

	/* then recur on left sutree */
	printPreorder(node->left);

	/* now recur on right subtree */
	printPreorder(node->right);
}

/* Driver program to test above functions*/
int main()
{
	struct Node* root = new Node("A");

	root->left = new Node("B");
	root->right = new Node("C");
	root->left->right = new Node("D");
	root->right->right = new Node("F");
	root->right->left = new Node("E");
	root->right->left->left = new Node("G");
	root->right->right->right = new Node("I");
	root->right->right->left = new Node("H");

	cout << "\nPreorder traversal of binary tree is \n";
	printPreorder(root);

	cout << "\nInorder traversal of binary tree is \n";
	printInorder(root);

	cout << "\nPostorder traversal of binary tree is \n";
	printPostorder(root);



	system("pause");
	return 0;
}