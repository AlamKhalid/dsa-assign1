/* This space is left intentionally to improve readability */

/* This .cpp file contains the definition of main
We have made this class generic by using 'template' keyword
having 'X' as a placeholder for the datatype */

#include<iostream>
#include<string>
#include "SinglyCircularLinkedList.cpp"
#include "SinglyLinkedList.cpp"
#include "DoublyLinkedList.cpp"
#include "DoublyCircularLinkedList.cpp"
using namespace std;

int main() {

	DoublyCircularLinkedList<int> list;

	list.displayList();
	list.addNodeStart(5);
	list.addNodeStart(66);
	list.addNodeStart(88);
	list.displayList();
	list.deleteFirst();
	list.displayList();
	list.deleteNode(66);
	list.displayList();
	list.addNode(7,1);
	list.addNode(9,2);
	list.displayList();
	list.addNodeEnd(55);
	list.addNode(22,2);
	list.displayList();
	list.deleteNode(7);
	list.displayList();
	list.deleteNodeAt(3);
	list.displayList();
	cout << list.isEmpty() << endl;
	cout << list.length() << endl;
	

}

	/*list.displayList();
	list.deleteFirstNode();
	list.displayList();
	list.deleteNode(66);
	list.displayList();
	list.addNode(7);
	list.addNode(99);
	list.displayList();
	list.addNodeEnd(55);
	list.addNode(22);
	list.displayList();
	list.deleteNode(7);
	list.deleteNodeAt(4);
	list.displayList();
	cout << list.isEmpty() << endl;
	cout << list.length() << endl;
	list.searchFor(22);*/


