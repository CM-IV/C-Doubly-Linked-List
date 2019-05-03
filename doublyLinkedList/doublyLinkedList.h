#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include <iostream>
#include "Node.h"



class doublyLinkedList
{
	public:
		doublyLinkedList();
		~doublyLinkedList();
		void addNewNodeToFront(Node* newNode);
		void addNewNodeToBack(Node* newNode);
		Node* removeNodeFromFront();
		Node* removeNodeFromBack();
		void addNewNodeBeforeTargetNode(Node* newNode, char c);
		void displayDoublyLinkedList();
		bool isPalindrome();
		doublyLinkedList* split(int i);

	private:
		Node *head;//pass these pointers into Dll  class
		Node *tail;
};
#endif