#include "LinkedList.h"
#include "Coordinates.h"
#include "MyRectangle.h"
#include <Windows.h>
#include <conio.h>
#include <time.h>

LinkedList::LinkedList() {
	head = nullptr;
	previous = nullptr;
}
void LinkedList::InsertNode(std::string  insertNode) {
	newnode = new Node(insertNode);
	if (head == nullptr) {
		head = newnode;
		return;
	}
	temp = head;
	while (temp->pointToNextNode) {
		temp = temp->pointToNextNode;
	}
	temp->pointToNextNode = newnode;
}
void LinkedList::DeleteNode(std::string  deleteNode) {

	if (head->dataToInput == deleteNode) {
		Node* temp = head;
		head = head->pointToNextNode;
		delete temp;
		return;
	}
	Node* current = head;
	while (current->pointToNextNode && current->pointToNextNode->dataToInput != deleteNode) {
		current = current->pointToNextNode;
	}

	if (!current->pointToNextNode) {
		setColor(4);
		std::cout << "\nInput Not Foud! Try Again...\n";
		Sleep(2500);
		setColor(15);
		return;
	}
	Node* temp = current->pointToNextNode;
	current->pointToNextNode = temp->pointToNextNode;
	delete temp;
}
void LinkedList::InsertFront(std::string  insertFront) {
	Node* newnodeInsert = new Node(insertFront);
	newnodeInsert->pointToNextNode = head;
	head = newnodeInsert;
}
void LinkedList::InsertAfterNode(std::string  insertNodeAfter, std::string  insertNodeAt) {
	temp = head;
	while (temp && temp->dataToInput != insertNodeAfter) {
		temp = temp->pointToNextNode;
	}
	if (!temp) {

		setColor(4);
		std::cout << "\nInput Not Foud! Try Again...\n";
		Sleep(2500);
		setColor(15);
		return;
	}

	Node* newnodeAfter = new Node(insertNodeAt);
	newnodeAfter->pointToNextNode = temp->pointToNextNode;
	temp->pointToNextNode = newnodeAfter;
}
void LinkedList::InsertEnd(std::string insertEnd) {

	Node* newnodeEnd = new Node(insertEnd);
	newnodeEnd->pointToNextNode = nullptr;

	temp = head;
	while (temp->pointToNextNode) {
		temp = temp->pointToNextNode;
	}
	temp->pointToNextNode = newnodeEnd;
}
bool  LinkedList::IsEmpty() {
	return !head;
}
void LinkedList::DisplayList() {
	temp = head;
	system("cls");
	if (temp == nullptr) {
		setColor(4);
		std::cout << "Your Linked List Is Empty";
	}
	else {
		std::cout << "Your Linked List Is:" << std::endl;

		setColor(125);
		std::cout << "\n*START*\n";
		setColor(13);
		std::cout << "+-----+" << std::endl;
		std::cout << "|  "; setColor(11); std::cout << head->dataToInput; setColor(13); std::cout << "  |" << std::endl;
		setColor(13);
		std::cout << "+-----+" << std::endl;

		Node* current = head->pointToNextNode;
		while (current) {
			setColor(2);
			std::cout << "   |" << std::endl;
			std::cout << "   |" << std::endl;
			setColor(13);
			std::cout << "+-----+" << std::endl;
			std::cout << "|  "; setColor(11); std::cout << current->dataToInput; setColor(13); std::cout << "  |" << std::endl;
			setColor(13);
			std::cout << "+-----+" << std::endl;
			current = current->pointToNextNode;
		}
	}
	std::cout << "\n\n\n";
	setColor(15);
}