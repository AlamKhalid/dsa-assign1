#include<iostream>
#include<string>

#include "LinkedList.cpp"

using namespace std;

int main() {
	LinkedList<int> *head=NULL;
	head->addNode(5, head);
	head->addNode(6, head);
	head->addNode(7, head);
	head->displayList(head);
	head->deleteNode(5, head);
	head->displayList(head);
}