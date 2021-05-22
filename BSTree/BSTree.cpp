#include <iostream>
using namespace std;

#include "Node.h"
#include "BSTree.h"

BSTree::BSTree() {
  root = nullptr;
}

void BSTree::insert(int d) {
}

string BSTree::get_debug_string_Helper(Node *root) {
  if(root == nullptr) {
    return "";
  }
  else {
    return get_debug_string_Helper(root->getLeft()) + to_string(root->getData()) + "-->" + get_debug_string_Helper(root->getRight());
	}
}

string BSTree::get_debug_string() {
  return get_debug_string_Helper(root);
}

void BSTree::setup() {
  Node *n = new Node(10);
  root = n;
  n = new Node(20);
  root->setLeft(n);
  n = new Node(30);
  root->setRight(n);
	n = new Node(40);
  root->getLeft()->setLeft(n);
}

void BSTree::deleteRoutine(int val) {
  deleteRoutine(root, root, val);
}

void BSTree::deleteRoutine(Node *curr, Node *prev, int val) {
/*  Case 1: Node to be deleted is the leaf - Simply remove the tree.
    Case 2: Node to be deleted has only one child - Copy the child to the node and delete the child.
    Case 3: Node to be deleted has two children - Find inorder successor of the node. Copy contents of the inorder successor to the node and delete the inorder successor. Note that inorder predecessor can also be used.
*/
  if(curr == nullptr){
        return;
    }

    if(curr->getData() < val)
    {
        deleteRoutine(curr->getRight(), curr, val);
    }
    else if(curr->getData() > val)
    {
        deleteRoutine(curr->getLeft(), curr, val);
    }
    else{ //case 1 no children
        if((curr->getLeft() == nullptr) && (curr->getRight() == nullptr))
        {
            if(prev->getLeft() == curr)
            {
                prev->setLeft(nullptr);
            }
            else
            {
                prev->setRight(nullptr);
            }
        delete curr;
        }
        else if((curr->getLeft() == nullptr) && (curr->getRight() != nullptr))
        {
            //case 2 one child on right
            prev->setRight(curr->getRight());
            delete curr;
        }
        else if((curr->getLeft() != nullptr) && (curr->getRight() == nullptr))
        {
            //case 2 one child on left
            prev->setLeft(curr->getLeft());
            delete curr;
        }
        else{
            Node *temp = root->getRight();
            Node *parent = root;
            while(temp->getLeft() != nullptr)
            {
                parent = temp;
                temp = temp->getLeft();
            }
            if(parent!= root)
            {
                parent->setLeft(temp->getRight());
            }
            else
            {
                parent->setRight(temp->getLeft());
            }
            root->setData(temp->getData());
            delete temp;
        }
  }
}

int BSTree::treeSum() {
	return treeSum(root);
}

int BSTree::treeSum(Node *curr){
	if (curr == nullptr) {
    return 0;
	}
  else {
    return (treeSum(curr->getLeft()) + curr->getData() + treeSum(curr->getRight()));
	}
}

int BSTree::search(int value) {
	return search(root, value);
}

int BSTree::search(Node *curr, int value) {
	if (curr == nullptr || curr->getData() == value){
	   return value;
	}
  else if(curr->getData() > value) {
	   return search(curr->getLeft(), value);
	}
  else {
	   return search(curr->getRight(), value);
	}
}

// count the number of nodes in the tree
int BSTree::countNodes() {
  return countNodes(root);
}

int BSTree::countNodes(Node *curr) {
  if (curr == nullptr) {
    return 0;
  }

  return (countNodes(curr->getLeft()) + countNodes(curr->getRight()) + 1);
}

// count the number of leaves
int BSTree::countLeaves() {
  return countLeaves(root);
}

int BSTree::countLeaves(Node *curr) {
  if (curr == nullptr) {
    return 0;
  }
  else if (curr->getLeft() == nullptr && curr->getRight() == nullptr) {
    return 1;
  }

  return (countLeaves(curr->getLeft()) + countLeaves(curr->getRight()));
}

// the sum of the nodes at a given level
int BSTree::sumNodeAtLevel(int lvl) {
  return sumNodeAtLevel(root, lvl, 0);
}

int BSTree::sumNodeAtLevel(Node *curr, int lvl, int currlvl) {
  if (curr == nullptr) {
    return 0;
  }
  else if (currlvl == lvl) {
    return curr->getData();
  }

  return ((sumNodeAtLevel(curr->getLeft(), currlvl+1, lvl)) + (sumNodeAtLevel(curr->getRight(), currlvl+1, lvl)));
}

// The height/depth of the tree
int BSTree::heightTree() {
  return heightTree(root);
}

int BSTree::heightTree(Node *curr) {
  if(curr == nullptr) {
    return 0;
  }

  if(heightTree(curr->getLeft()) > heightTree(curr->getRight())) {
    return (heightTree(curr->getLeft()) + 1);
  }
  else {
    return (heightTree(curr->getRight()) + 1);
  }
}
