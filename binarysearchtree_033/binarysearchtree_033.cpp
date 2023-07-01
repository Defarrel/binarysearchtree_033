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
};