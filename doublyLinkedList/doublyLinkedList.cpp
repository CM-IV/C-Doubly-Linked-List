#ifndef DOUBLYLINKEDLIST_CPP
#define DOUBLYLINKEDLIST_CPP

#include "doublylinkedlist.h"


doublyLinkedList::doublyLinkedList()
{
	head = NULL;
	tail = NULL;
}

doublyLinkedList::~doublyLinkedList()
{
	//destructor
}

void doublyLinkedList::addNewNodeToFront(Node* newNode)
{
	if (head == NULL && tail == NULL)
	{
		head = tail = newNode;
	}
	else
	{
		head->prev = newNode;
		newNode->next = head;
		head = newNode;
	}
}

void doublyLinkedList::addNewNodeToBack(Node * newNode)
{
	if (head == NULL && tail == NULL)
	{
		head = tail = newNode;
	}
	else 
	{
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
}

Node *doublyLinkedList::removeNodeFromFront()
{
	Node *tempNode;

	tempNode = head;
	head = head->next;
	return tempNode;
}

Node *doublyLinkedList::removeNodeFromBack()
{
	Node *tempNode;

	tempNode = tail;
	tail = tail->prev;
	return tempNode;
}

void doublyLinkedList::displayDoublyLinkedList()
{
	Node *tempNode;

	tempNode = head;
	while (tempNode != NULL)
	{
		cout << tempNode->value << " ";
		tempNode = tempNode->next;
	}
}

bool doublyLinkedList::isPalindrome()
{
	if (head == NULL && tail == NULL)
	{
		return true;
	}

	while (head != tail)
	{
		if (head->value != tail->value)
		{
			return false;
		}
		head = head->next;
		tail = tail->prev;
	}
	
	return true;
}

void doublyLinkedList::addNewNodeBeforeTargetNode(Node *newNode, char c)
{
	Node *tempNode;
	tempNode = head;

	while (tempNode != NULL)
	{
		if (tempNode->value == c)
		{
			break;
		}
		else 
		{
			tempNode = tempNode->next;
		}
	}
	if (tempNode == head)
	{
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
	else
	{
		if (tempNode != NULL)
		{
			newNode->prev = tempNode->prev;
			tempNode->prev->next = newNode;
			newNode->next = tempNode;
			tempNode->prev = newNode;
		}
	}
}

doublyLinkedList* doublyLinkedList::split(int i)
{
	doublyLinkedList *Dll = new doublyLinkedList;
	Node *tempNode;
	tempNode = head;

	int count = -1;
	while (tempNode != NULL && count != i)
	{
		if (count != i)
		{
			tempNode = removeNodeFromFront();
			Node *newTempNode = new Node(tempNode->value);
			Dll->addNewNodeToBack(newTempNode);
			count++;
			tempNode = tempNode->next;
		}
	}
	return Dll;
}
#endif