#include<iostream>
#include<string>


#include "SinglyLinkedList.cpp"
//#include "DoublyLinkedList.cpp"
using namespace std;

int main() {
	SinglyLinkedList<int> list;
	list.addNodeEnd(5);
	list.addNodeEnd(7);
	cout << list.length();
	list.deleteFirstNode();
	cout<<list.length();

	/*
	DoublyLinkedList<int> list;
	list.addNodeStart(10);
	list.addNodeEnd(5);
	list.addNodeAt(15, 2);
	cout << list.length() << endl;;
	list.displayList();
	list.deleteFirst();
	list.displayList();
	list.deleteLast();
	list.displayList();
	list.addNodeEnd(5);
	list.addNodeAt(15, 2);
	list.displayList();
	list.deleteNodeAt(2);
	list.displayList(); */
	
	
	//LinkedList<int> *head=NULL;
	/*
	head->addNode(5, head);
	head->addNode(6, head);
	head->addNode(7, head);
	head->displayList(head);
	head->deleteNode(7, head);
	head->displayList(head); */
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
