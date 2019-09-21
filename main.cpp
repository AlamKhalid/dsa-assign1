#include<iostream>
#include<string>

#include "LinkedList.cpp"
#include "DoublyLinkedList.cpp"
using namespace std;

int main() {
	LinkedList<int> *head=NULL;
	DLinkedList<int>* dHead = NULL;
	head->addNode(5, head);
	head->addNode(6, head);
	head->addNode(7, head);
	head->displayList(head);
	head->deleteNode(7, head);
	head->displayList(head);
	dHead->isEmpty(dHead);
	
}