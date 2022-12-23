#pragma once
#include "Node.h"

class LinkedList : public Node {

public:
	Node* head;
	Node* newnode;
	Node* temp;
	Node* previous;

	LinkedList();
	void InsertNode(std::string  data);
	void DeleteNode(std::string  data);
	void InsertFront(std::string  data);
	void InsertAfterNode(std::string  data1, std::string  data2);
	void InsertEnd(std::string  data);
	void DisplayList();
	bool IsEmpty();
};