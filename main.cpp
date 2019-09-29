#include<iostream>
#include<string>
#include "SinglyCircularLinkedList.cpp"
#include "SinglyLinkedList.cpp"
#include "DoublyLinkedList.cpp"
using namespace std;

int main() {

	SinglyLinkedList<int> list;

	list.displayList();
	list.addNode(5);
	list.addNode(66);
	list.addNode(88);
	list.displayList();
	list.deleteFirstNode();
	list.displayList();
	list.deleteNode(66);
	list.displayList();
	list.addNode(7);
	list.addNode(99);
	list.addNodeEnd(55);
	list.addNode(22);
	list.displayList();
	list.deleteNode(7);
	list.deleteNodeAt(4);
	list.displayList();
	cout << list.isEmpty() << endl;
	cout << list.length() << endl;
	list.searchFor(22);

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


