/* This space is left intentionally to improve readability */

/* This .cpp file contains the definition of main */

#include<iostream>
#include<string>

#include "SinglyCircularLinkedList.cpp"
#include "SinglyLinkedList.cpp"
#include "DoublyLinkedList.cpp"
#include "DoublyCircularLinkedList.cpp"

using namespace std;


int main()
{

 loop:cout << "\t\t\t\t\t------------------------------" << endl;
	cout << "\t\t\t\t\tData Structures and Algorithms" << endl;
	cout << "\t\t\t\t\t------------------------------" << endl;

	int choice;
	int dataType;
	int list;

	cout << "1- Single Linked List.\n2- Double Linked List.\n3- Single Circular Linked List.\n4- Double Circular Linked List." << endl;
	cout << "Type in the type of the list: ";
	cin >> list;

	if (list > 4 || list < 1)
	{
		cout << "\nInvalid index. Press Enter to try again." << endl;
		system("PAUSE");
		system("CLS");
		goto loop;
	}

loop1:cout << "1- Int.\n2- Float.\n3- Char.\n4- Double." << endl;
	cout << "Type in the data type: ";
	cin >> dataType;

	if (dataType > 4 || dataType < 1)
	{
		cout << "\nInvalid index. Press Enter to try again." << endl;
		system("PAUSE");
		goto loop1;
	}

	system("CLS");

	if (list == 1)
	{
		if (dataType == 1)
		{
			SinglyLinkedList<int> object0;
			int value;
			int index;
			cout << "Singly Linked list -> int......\n" << endl;
			cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
			cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
			cin >> choice;
			while (choice != 8)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object0.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object0.addNode(value, index);
					system("CLS");
				}
				else  if (choice == 3)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object0.deleteNode(value);
					system("CLS");
				}
				else if (choice == 4)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object0.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 5)
				{
					object0.deleteFirst();
					system("CLS");
				}
				else if (choice == 6)
				{
					object0.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object0.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Singly Linked list -> int......\n" << endl;
				cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
				cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
				cin >> choice;
			}
		}
		else if (dataType == 2)
		{
			SinglyLinkedList<float> object1;
			float value;
			int index;
			cout << "Singly Linked list -> float......\n" << endl;
			cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
			cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
			cin >> choice;
			while (choice != 8)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object1.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object1.addNode(value, index);
					system("CLS");
				}
				else  if (choice == 3)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object1.deleteNode(value);
					system("CLS");
				}
				else if (choice == 4)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object1.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 5)
				{
					object1.deleteFirst();
					system("CLS");
				}
				else if (choice == 6)
				{
					object1.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object1.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Singly Linked list -> float......\n" << endl;
				cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
				cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
				cin >> choice;
			}
		}
		else if (dataType == 3)
		{
			SinglyLinkedList<char> object2;
			char value;
			int index;
			cout << "Singly Linked list -> char......\n" << endl;
			cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
			cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
			cin >> choice;
			while (choice != 8)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object2.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object2.addNode(value, index);
					system("CLS");
				}
				else  if (choice == 3)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object2.deleteNode(value);
					system("CLS");
				}
				else if (choice == 4)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object2.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 5)
				{
					object2.deleteFirst();
					system("CLS");
				}
				else if (choice == 6)
				{
					object2.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object2.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Singly Linked list -> char......\n" << endl;
				cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
				cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
				cin >> choice;
			}
		}
		else if (dataType == 4)
		{
			SinglyLinkedList<double> object3;
			double value;
			int index;
			cout << "Singly Linked list -> double......\n" << endl;
			cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
			cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
			cin >> choice;
			while (choice != 8)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object3.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object3.addNode(value, index);
					system("CLS");
				}
				else  if (choice == 3)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object3.deleteNode(value);
					system("CLS");
				}
				else if (choice == 4)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object3.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 5)
				{
					object3.deleteFirst();
					system("CLS");
				}
				else if (choice == 6)
				{
					object3.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object3.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Singly Linked list -> double......\n" << endl;
				cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
				cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
				cin >> choice;
			}
		}
	}
	else if (list == 2)
	{
		if (dataType == 1)
		{
			DoublyLinkedList<int> object4;
			int value;
			int index;
			cout << "Doubly Linked list -> int......\n" << endl;
			cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
			cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
			cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
			cin >> choice;
			while (choice != 10)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object4.addNodeStart(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object4.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 3)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object4.addNode(value, index);
					system("CLS");
				}
				else if (choice == 4)
				{
					object4.deleteFirst();
					system("CLS");
				}
				else if (choice == 5)
				{
					object4.deleteLast();
					system("CLS");
				}
				else  if (choice == 6)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object4.deleteNode(value);
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object4.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 8)
				{
					object4.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 9)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object4.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Doubly Linked list -> int......\n" << endl;
				cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
				cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
				cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
				cin >> choice;
			}
		}
		else if (dataType == 2)
		{
			DoublyLinkedList<float> object5;
			float value;
			int index;
			cout << "Doubly Linked list -> float......\n" << endl;
			cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
			cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
			cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
			cin >> choice;
			while (choice != 10)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object5.addNodeStart(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object5.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 3)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object5.addNode(value, index);
					system("CLS");
				}
				else if (choice == 4)
				{
					object5.deleteFirst();
					system("CLS");
				}
				else if (choice == 5)
				{
					object5.deleteLast();
					system("CLS");
				}
				else  if (choice == 6)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object5.deleteNode(value);
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object5.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 8)
				{
					object5.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 9)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object5.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Doubly Linked list -> float......\n" << endl;
				cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
				cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
				cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
				cin >> choice;
			}
		}
		else if (dataType == 3)
		{
			DoublyLinkedList<char> object6;
			char value;
			int index;
			cout << "Doubly Linked list -> char......\n" << endl;
			cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
			cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
			cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
			cin >> choice;
			while (choice != 10)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object6.addNodeStart(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object6.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 3)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object6.addNode(value, index);
					system("CLS");
				}
				else if (choice == 4)
				{
					object6.deleteFirst();
					system("CLS");
				}
				else if (choice == 5)
				{
					object6.deleteLast();
					system("CLS");
				}
				else  if (choice == 6)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object6.deleteNode(value);
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object6.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 8)
				{
					object6.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 9)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object6.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Doubly Linked list -> char......\n" << endl;
				cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
				cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
				cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
				cin >> choice;
			}
		}
		else if (dataType == 4)
		{
			DoublyLinkedList<double> object7;
			double value;
			int index;
			cout << "Doubly Linked list -> double......\n" << endl;
			cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
			cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
			cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
			cin >> choice;
			while (choice != 10)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object7.addNodeStart(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object7.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 3)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object7.addNode(value, index);
					system("CLS");
				}
				else if (choice == 4)
				{
					object7.deleteFirst();
					system("CLS");
				}
				else if (choice == 5)
				{
					object7.deleteLast();
					system("CLS");
				}
				else  if (choice == 6)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object7.deleteNode(value);
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object7.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 8)
				{
					object7.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 9)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object7.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Doubly Linked list -> double......\n" << endl;
				cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
				cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
				cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
				cin >> choice;
			}
		}
	}
	else if (list == 3)
	{
		if (dataType == 1)
		{
			SinglyCircularLinkedList<int> object8;
			int value;
			int index;
			cout << "Singly Circular Linked list -> int......\n" << endl;
			cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
			cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
			cin >> choice;
			while (choice != 8)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object8.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object8.addNode(value, index);
					system("CLS");
				}
				else  if (choice == 3)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object8.deleteNode(value);
					system("CLS");
				}
				else if (choice == 4)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object8.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 5)
				{
					object8.deleteFirst();
					system("CLS");
				}
				else if (choice == 6)
				{
					object8.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object8.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Singly Circular Linked list -> int......\n" << endl;
				cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
				cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
				cin >> choice;
			}
		}
		else if (dataType == 2)
		{
			SinglyCircularLinkedList<float> object9;
			float value;
			int index;
			cout << "Singly Circular Linked list -> float......\n" << endl;
			cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
			cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
			cin >> choice;
			while (choice != 8)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object9.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object9.addNode(value, index);
					system("CLS");
				}
				else  if (choice == 3)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object9.deleteNode(value);
					system("CLS");
				}
				else if (choice == 4)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object9.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 5)
				{
					object9.deleteFirst();
					system("CLS");
				}
				else if (choice == 6)
				{
					object9.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object9.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Singly Circular Linked list -> float......\n" << endl;
				cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
				cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
				cin >> choice;
			}
		}
		else if (dataType == 3)
		{
			SinglyCircularLinkedList<char> object10;
			char value;
			int index;
			cout << "Singly Circular Linked list -> char......\n" << endl;
			cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
			cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
			cin >> choice;
			while (choice != 8)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object10.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object10.addNode(value, index);
					system("CLS");
				}
				else  if (choice == 3)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object10.deleteNode(value);
					system("CLS");
				}
				else if (choice == 4)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object10.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 5)
				{
					object10.deleteFirst();
					system("CLS");
				}
				else if (choice == 6)
				{
					object10.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object10.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Singly Circular Linked list -> char......\n" << endl;
				cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
				cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
				cin >> choice;
			}
		}
		else if (dataType == 4)
		{
			SinglyCircularLinkedList<double> object11;
			double value;
			int index;
			cout << "Singly Circular Linked list -> double......\n" << endl;
			cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
			cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
			cin >> choice;
			while (choice != 8)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object11.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object11.addNode(value, index);
					system("CLS");
				}
				else  if (choice == 3)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object11.deleteNode(value);
					system("CLS");
				}
				else if (choice == 4)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object11.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 5)
				{
					object11.deleteFirst();
					system("CLS");
				}
				else if (choice == 6)
				{
					object11.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object11.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Singly Circular Linked list -> double......\n" << endl;
				cout << "1- Add node at end.\n2- Add node at Index.\n3- Delete node by value.\n4- Delete node by index." << endl;
				cout << "5- Delete first Node.\n6- Display list.\n7- Search for value.\n8- Exit." << endl;
				cin >> choice;
			}
		}
	}
	else if (list == 4)
	{
		if (dataType == 1)
		{
			DoublyCircularLinkedList<int> object12;
			int value;
			int index;
			cout << "Doubly Circular Linked list -> int......\n" << endl;
			cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
			cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
			cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
			cin >> choice;
			while (choice != 10)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object12.addNodeStart(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object12.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 3)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object12.addNode(value, index);
					system("CLS");
				}
				else if (choice == 4)
				{
					object12.deleteFirst();
					system("CLS");
				}
				else if (choice == 5)
				{
					object12.deleteLast();
					system("CLS");
				}
				else  if (choice == 6)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object12.deleteNode(value);
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object12.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 8)
				{
					object12.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 9)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object12.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Doubly Circular Linked list -> int......\n" << endl;
				cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
				cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
				cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
				cin >> choice;
			}
		}
		else if (dataType == 2)
		{
			DoublyCircularLinkedList<float> object13;
			float value;
			int index;
			cout << "Doubly Circular Linked list -> float......\n" << endl;
			cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
			cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
			cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
			cin >> choice;
			while (choice != 10)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object13.addNodeStart(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object13.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 3)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object13.addNode(value, index);
					system("CLS");
				}
				else if (choice == 4)
				{
					object13.deleteFirst();
					system("CLS");
				}
				else if (choice == 5)
				{
					object13.deleteLast();
					system("CLS");
				}
				else  if (choice == 6)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object13.deleteNode(value);
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object13.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 8)
				{
					object13.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 9)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object13.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Doubly Circular Linked list -> float......\n" << endl;
				cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
				cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
				cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
				cin >> choice;
			}
		}
		else if (dataType == 3)
		{
			DoublyCircularLinkedList<char> object14;
			char value;
			int index;
			cout << "Doubly Circular Linked list -> char......\n" << endl;
			cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
			cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
			cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
			cin >> choice;
			while (choice != 10)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object14.addNodeStart(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object14.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 3)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object14.addNode(value, index);
					system("CLS");
				}
				else if (choice == 4)
				{
					object14.deleteFirst();
					system("CLS");
				}
				else if (choice == 5)
				{
					object14.deleteLast();
					system("CLS");
				}
				else  if (choice == 6)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object14.deleteNode(value);
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object14.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 8)
				{
					object14.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 9)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object14.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Doubly Circular Linked list -> char......\n" << endl;
				cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
				cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
				cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
				cin >> choice;
			}
		}
		else if (dataType == 4)
		{
			DoublyCircularLinkedList<double> object15;
			double value;
			int index;
			cout << "Doubly Circular Linked list -> double......\n" << endl;
			cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
			cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
			cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
			cin >> choice;
			while (choice != 10)
			{
				if (choice == 1)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object15.addNodeStart(value);
					system("CLS");
				}
				else if (choice == 2)
				{
					cout << "Enter the value to insert in node.";
					cin >> value;
					object15.addNodeEnd(value);
					system("CLS");
				}
				else if (choice == 3)
				{
					cout << "Enter the index where you want to inset node.";
					cin >> index;
					cout << "Enter the value to insert in node.";
					cin >> value;
					object15.addNode(value, index);
					system("CLS");
				}
				else if (choice == 4)
				{
					object15.deleteFirst();
					system("CLS");
				}
				else if (choice == 5)
				{
					object15.deleteLast();
					system("CLS");
				}
				else  if (choice == 6)
				{
					cout << "Enter the value to delete from list.";
					cin >> value;
					object15.deleteNode(value);
					system("CLS");
				}
				else if (choice == 7)
				{
					cout << "Enter the index of node you want to delete from list.";
					cin >> index;
					object15.deleteNodeAt(index);
					system("CLS");
				}
				else if (choice == 8)
				{
					object15.displayList();
					system("PAUSE");
					system("CLS");
				}
				else if (choice == 9)
				{
					cout << "Enter the value you want to search from list.";
					cin >> value;
					object15.searchFor(value);
					system("PAUSE");
					system("CLS");
				}
				cout << "Doubly Circular Linked list -> double......\n" << endl;
				cout << "1- Add node at start.\n2- Add node at end.\n3- Add node at index." << endl;
				cout << "4- Delete first node.\n5- Delete last node.\n6- Delete node by value.\n7- Delete node by index." << endl;
				cout << "8- Display list.\n9- Search for value.\n10- Exit." << endl;
				cin >> choice;
			}
		}
	} 
}