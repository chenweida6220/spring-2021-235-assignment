#pragma once

class Node {
	private:
		int data;
		Node *right;
		Node *left;
	public:
		Node();
		Node(int data);
		Node(int data, Node *l, Node *r);
		int getData();
		Node *getLeft();
		Node *getRight();
		void setData(int d);
		void setLeft(Node *l);
		void setRight(Node *r);
};
