#include<iostream>
#include<string>

#include "LinkedList.cpp"
#include "DoublyLinkedList.cpp"
using namespace std;

int main() {
	LinkedList<int> list;
	list.addNodeEnd(5);
	list.deleteFirstNode();
	cout<<list.length();

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