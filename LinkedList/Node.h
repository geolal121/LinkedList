#pragma once
#include "Coordinates.h"

class Node : public Coordinates {

public:
	std::string dataToInput;
	Node* pointToNextNode;

	Node();
	Node(std::string  getChar);
};