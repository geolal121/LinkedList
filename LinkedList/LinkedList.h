#pragma once
#include "Node.h"

class LinkedList : public Node {

public:
	Node* head;
	Node* newnode;
	Node* temp;
	Node* previous;

	LinkedList();
	void InsertNode(char  data);
	void DeleteNode(char  data);
	void InsertFront(char  data);
	void InsertAfterNode(char  data1, char  data2);
	void InsertEnd(char  data);
	void DisplayList();
	bool IsEmpty();
};