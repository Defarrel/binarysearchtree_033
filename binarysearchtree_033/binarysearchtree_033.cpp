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
};