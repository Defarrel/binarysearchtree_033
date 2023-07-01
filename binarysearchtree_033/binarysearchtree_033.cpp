#include <iostream>
#include <string>
using namespace std;

class node {
public:
	string info;
	node* leftchild;
	node* rightchild;

	//construktor for the node class
	node(string i, node* l, node* r) {
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class binarytree {
public: 
	node* root;

	binarytree() {
		root = NULL; //initializing root to null
	}

	void insert(string element) {
		node* newNode = new node(element, NULL, NULL); //Allocate memory for the new node
		newNode->info = element; // Assign value to the data filed of the new node 
		newNode->leftchild = NULL; // Make the left child of the new  node 
		newNode->rightchild = NULL; // Make the right child of the new node

		node* parent = NULL;
		node* currentNode = NULL;
		search(element, parent, currentNode); // Locate the node which will be the parent of the node to be inserted

		if (parent == NULL) { //if the parent is NULL (Tress is empty)
			root = newNode; //Mark the new node as ROOT
			return;
		}
		if (element < parent->info) { // If the vqalue in the data field of the new node is less than that of the parent 
			parent->leftchild = newNode; // Make the left child of the parent point to the new node
		}
		else if (element > parent->info) { // If the value in the data field of the new node is greater than that of the parent
			parent->rightchild = newNode;
		}
	}
	void search(string element, node*& parent, node*& currentNode)
	{
		//This function searches the currentNode of the sprecified Node as well as the current Node of its parent
		currentNode = root;
		parent = NULL;
		while ((currentNode != NULL) && (currentNode->info != element))
		{
			parent = currentNode;
			if (element < currentNode->info)
				currentNode = currentNode->leftchild;
			else
				currentNode = currentNode->rightchild;
		}
	}
	void inorder(node* ptr)
	{
		if (root = NULL)
		{
			cout << "Tress is empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			inorder(ptr->leftchild);
			cout << ptr->info << " ";
			inorder(ptr->rightchild);
		}
	}
	void preorder(node* ptr)
	{
		if (root = NULL)
		{
			cout << "Tree is empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			cout << ptr->info << " ";
			preorder(ptr->leftchild);
			preorder(ptr->rightchild);
		}
	}
	void postorder(node* ptr)
	{
		if (root == NULL)
		{
			cout << "tree is empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			postorder(ptr->leftchild);
			postorder(ptr->rightchild);
			cout << ptr->info << " ";
		}
	}
};

int main() {
	binarytree obj;
	while (true) {
		cout << "\nMenu" << endl;
		cout << "1. Implement insert operation" << endl;
		cout << "2. Perform inorder traversal" << endl;
		cout << "3. Perform preorder traversal" << endl;
		cout << "4. Perform postorder traversal" << endl;
		cout << "5. Exit" << endl;
		cout << "\nEnter your choice (1-5) : ";

		char ch;
		cin >> ch;
		cout << endl;
	}
}