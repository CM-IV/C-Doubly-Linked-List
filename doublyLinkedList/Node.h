#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node
{
	friend class doublyLinkedList;
	public:
		Node();
		Node(char val);
		~Node();//destructor

	private:
		Node *prev;
		char value;
		Node *next;
};

#endif