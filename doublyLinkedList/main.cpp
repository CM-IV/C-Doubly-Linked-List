#include <iostream>
using namespace std;

#include "Node.h"
#include "doublylinkedlist.h"

int main()
{
	// test case 1 split
	// Create a doubly linked list
	doublyLinkedList Dll_1;

	// Each node contains only one character of a string
	Node n11('a');
	Node n12('b');
	Node n13('c');
	Node n14('d');
	Node n15('e');

	// a doubly linked list of characters by inserting nodes
	Dll_1.addNewNodeToBack(&n11);
	Dll_1.addNewNodeToBack(&n12);
	Dll_1.addNewNodeToBack(&n13);
	Dll_1.addNewNodeToBack(&n14);
	Dll_1.addNewNodeToBack(&n15);


	doublyLinkedList *Dll_2;
	Dll_2 = Dll_1.split(0);

	cout << "The new splited doubly linked list: ";
	Dll_2->displayDoublyLinkedList();
	cout << endl;

	cout << "The original doubly linked list: ";
	Dll_1.displayDoublyLinkedList();
	cout << endl;

	system("PAUSE");
	return 0;
}