/*
* Create By: Geo Hernandez
* Date Pushed To GitHub: 12/23/22
*/

#define NOMINMAX
#include "LinkedList.h"

void Menue() {
	std::cout << "1-) Insert To Linked List" << std::endl;
	std::cout << "2-) Delete From Linked List" << std::endl;
	std::cout << "3-) Insert At Location In Linked List" << std::endl;
	std::cout << "4-) Display Linked List" << std::endl;
	std::cout << "5-) Exit Program" << std::endl;
	std::cout << "\nEnter Choice: ";
}
void main() {

	int choice;
	int choiceToInsert;
	char  insertNodeAt, insertAfterNode;
	char  deleteNode;
	char  insertNode;
	LinkedList L;
	L.showConsoleCursor(false);

	do {
		Menue();
		while (!(std::cin >> choice))
		{
			L.setColor(4);
			std::cout << "\nChoice Must Be A Number: \n";
			L.setColor(15);
			std::cout << "\nEnter Choice Again: ";
			std::cin.clear();
			std::cin.ignore(10000000000000, '\n');
		}
		if (choice == 1) {
			if (L.IsEmpty()) {
				system("cls");
				L.setColor(4);
				std::cout << "==== The List Is Empty ====\n\n";
				L.setColor(15);
				std::cout << "\nInsert Node To Create List: ";
				std::cin >> insertNode;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				L.InsertNode(insertNode);
				std::cout << "\n";
				L.DisplayList();
			}
			else {
				system("cls");
				L.DisplayList();
				std::cout << "\nInsert Node: ";
				std::cin >> insertNode;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				L.InsertNode(insertNode);
				std::cout << "\n";
				L.DisplayList();
			}
		}
		else if (choice == 2) {
			if (L.IsEmpty()) {
				system("cls");
				L.setColor(4);
				std::cout << "==== The List Is Empty ====\n\n";
				L.setColor(15);
			}
			else {
				system("cls");
				L.DisplayList();
				std::cout << "Delete Node: ";
				std::cin >> deleteNode;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				L.DeleteNode(deleteNode);
				std::cout << "\n";
				L.DisplayList();
			}
		}
		else if (choice == 3) {
			if (L.IsEmpty()) {
				system("cls");
				L.setColor(4);
				std::cout << "==== The List Is Empty ====\n\n";
				L.setColor(15);
			}
			else {
				system("cls");
				L.DisplayList();
				std::cout << "\n1-) Insert At Front" << std::endl;
				std::cout << "2-) Insert After A Node From List" << std::endl;
				std::cout << "3-) Insert At End" << std::endl;
				std::cout << "\nEnter Choice: ";
				while (!(std::cin >> choiceToInsert))
				{
					L.setColor(4);
					std::cout << "\n\nMust Be A Number: \n";
					L.setColor(15);
					std::cout << "\nEnter Choice Again: ";
					std::cin.clear();
					std::cin.ignore(10000000000000, '\n');
				}
				if (choiceToInsert == 1) {
					std::cout << "\nInsert Node At Front: ";
					std::cin >> insertNodeAt;
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					L.InsertFront(insertNodeAt);
					std::cout << "\n";
				}
				else if (choiceToInsert == 2) {
					std::cout << "\nNode To Insert: ";
					std::cin >> insertNodeAt;
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "\nAfter What Node: ";
					std::cin >> insertAfterNode;
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					L.InsertAfterNode(insertAfterNode, insertNodeAt);
					std::cout << "\n";
				}
				else if (choiceToInsert == 3) {
					std::cout << "\nInsert Node At End: ";
					std::cin >> insertNodeAt;
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					L.InsertNode(insertNodeAt);
					std::cout << "\n";
				}
				L.DisplayList();
			}
		}
		else if (choice == 4) {
			if (L.IsEmpty()) {
				system("cls");
				L.setColor(4);
				std::cout << "==== The List Is Empty ====\n\n";
				L.setColor(15);
			}
			else {
				system("cls");
				std::cout << "\n";
				L.DisplayList();
			}
		}
		else if (choice == 5) {
			system("cls");
			L.gotoxy(50, 14);
			L.setColor(240);
			std::cout << "==== GOOD BYE ====";
			break;
		}
	} while (choice != 5);

	while (1);
}