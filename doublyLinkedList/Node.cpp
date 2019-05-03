#ifndef NODE_CPP
#define NODE_CPP

#include "Node.h"


Node::Node()
{
	prev = NULL;
	value = ' ';
	next = NULL;
}

Node::Node(char c)
{
	prev = NULL;
	value = c;
	next = NULL;
}

Node::~Node()
{
	//destructor
}

#endif