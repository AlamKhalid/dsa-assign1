#include<iostream>
#include<string>

#include "LinkedList.cpp"
#include "DoublyLinkedList.cpp"
using namespace std;

int main() {
	LinkedList<int> list;
	

	//LinkedList<int> *head=NULL;
	list.addNodeEnd(10);
	list.addNodeEnd(1);
	list.addNodeEnd(9);
	list.addNodeEnd(8);
	list.addNodeEnd(3);
	list.addNodeEnd(6);
	list.addNode(7, 2);
	list.addNode(8, 1);
	list.displayList();
	cout << endl;
	list.deleteNode(7);
	list.displayList();
	cout << endl;
	list.deleteNodeAt(2);
	list.deleteFirstNode();
	list.displayList();
	cout << endl;
	cout << list.length();
	
	
	/*
	DoublyLinkedList<int>* dHead = NULL;
	dHead->isEmpty(dHead);
	dHead->addNode(33, dHead);
	dHead->addNode(44, dHead);
	dHead->addNode(55, dHead);
	dHead->addNode(66, dHead);
	dHead->displayList(dHead);
	cout << "deleting node." << endl;
	dHead->deleteNode(55, dHead);
	dHead->displayList(dHead); */
}