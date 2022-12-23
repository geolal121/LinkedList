#pragma once
#include "Coordinates.h"

class Node : public Coordinates {

public:
	char dataToInput;
	Node* pointToNextNode;

	Node();
	Node(char  getChar);
};