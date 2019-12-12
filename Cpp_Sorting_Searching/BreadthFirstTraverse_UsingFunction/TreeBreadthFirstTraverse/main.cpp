#include<iostream>
#include<string>
using namespace std;

/* A binary tree node has data,
pointer to left child
and a pointer to right child

Level Order traversal is also known as Breadth-First Traversal since it traverses
all the nodes at each level before going to the next level (depth)

Time Complexity: O(n^2) in worst case.

METHOD 1 (Use function to print a given level)

Algorithm:
There are basically two functions in this method. One is to print all nodes at a given level (printGivenLevel),
and other is to print level order traversal of the tree (printLevelorder).
printLevelorder makes use of printGivenLevel to print nodes at all levels one by one starting from root.
*/
class node
{
public:
	string data;
	node* left, * right;
};

/* Function protoypes */
void printGivenLevel(node* root, int level);
int height(node* node);
node* newNode(string data);

/* Function to print level
order traversal a tree*/
void printLevelOrder(node* root)
{
	int h = height(root);
	int i;
	for (i = 1; i <= h; i++)
		printGivenLevel(root, i);
}

/* Print nodes at a given level */
void printGivenLevel(node* root, int level)
{
	if (root == NULL)
		return;
	if (level == 1)
		cout << root->data << " ";
	else if (level > 1)
	{
		printGivenLevel(root->left, level - 1);
		printGivenLevel(root->right, level - 1);
	}
}

/* Compute the "height" of a tree -- the number of
	nodes along the longest path from the root node
	down to the farthest leaf node.*/
int height(node* node)
{
	if (node == NULL)
		return 0;
	else
	{
		/* compute the height of each subtree */
		int lheight = height(node->left);
		int rheight = height(node->right);

		/* use the larger one */
		if (lheight > rheight)
			return(lheight + 1);
		else return(rheight + 1);
	}
}

/* Helper function that allocates
a new node with the given data and
NULL left and right pointers. */
node* newNode(string data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return(Node);
}

/* Driver code*/
int main()
{
	node* root = newNode("F");
	root->left = newNode("B");
	root->right = newNode("G");

	root->right->right = newNode("I");
	root->left->left = newNode("A");
	root->left->right = newNode("D");

	root->right->right->left = newNode("H");
	root->left->right->left = newNode("C");
	root->left->right->right = newNode("E");

	cout << "Level Order traversal of binary tree is \n";
	printLevelOrder(root);

	cout << "Height of F: " << height(root) << endl;

	system("pause");
	return 0;
}