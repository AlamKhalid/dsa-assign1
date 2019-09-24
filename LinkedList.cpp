/* This space is left intentionally to improve readability */

/* This .cpp file contains the definition of Singly Linked List 
   We have made this class generic by using 'template' keyword
   having 'X' as a placeholder for the datatype */

#include<iostream>

using namespace std;

template <class X>
class LinkedList {

private:

	int len;

	class Node {

	public:
		X info;
		Node* next;

		Node(X val = 0, Node* ptr = NULL) {
			this->info = val;
			next = ptr;
		}
	};

	Node* head;
	Node* tail;

public:

	// Construction defition starts here
	LinkedList() {
		head = tail = NULL;
		len = 0;
	}

	// Member function's definition starts here

	bool isEmpty() {
		return head==NULL;
	}

	int length() {
		return this->len;
	}

	void addNodeEnd(X val) {
		
		Node* newNode = new Node(val);
		Node* ptr;

		len++;
		
		if (head == NULL) {
			head = tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
	}

	void addNode(X val, int index = 0) {		// By default, it inserts the data at the start

		if (index >= 0 && index <= len) {

			Node* current=head, *prev = NULL;

			for (int i = 0; i < index; i++) {
				prev = current;
				current = current->next;
			}

			Node* newNode = new Node(val, current);
			if (!prev) {
				head = newNode;
			}
			else {
				prev->next = newNode;
			}
			len++;
		}
		else {
			cout << "Invalid index. Please try again." << endl;
		}
	}

	void deleteNode(X val) {		// Delete by value

		Node* ptr, *delNode;

		if (isEmpty()) {
			cout << "Delete operation cannot be done. List is empty."<<endl;
		}
		else if(head->info == val) {
			ptr = head;
			head = head->next;
			delete ptr;
			len--;
		}
		else {
			ptr = head;
			int i = 0;
			while (ptr->next->info != val && i < len - 1) {		// some masla
					ptr = ptr->next;
					i++;
			}
			if (i != len - 1) {		
				delNode = ptr->next;
				ptr->next = ptr->next->next;
				delete delNode;
				len--;
			}
			else {
				cout << "Value does not exist." << endl;
			}
		}
	}

	void deleteNodeAt(int index = len - 1) {			// Delete at index
		
		if (index >= 0 && index < len) {
			Node* current = head, * prev=NULL;

			for (int i = 0; i < index; i++) {
				prev = current;
				current = current->next;
			}
			prev->next = current->next;
			if (!current->next) {			// Adjusting tail
				tail = prev;
			}
			delete current;
			len--;
		}
		else {
			cout << "Invalid index." << endl;
		}
	}

	void deleteFirstNode() {

		Node* ptr;
		if (!isEmpty()) {
			ptr = head;
			head = head->next;
			if (!head) {			// If there is only 1 node in the list
				tail = head;
			}
			delete ptr;
			len--;
		}
		else {
			cout << "List is empty." << endl;
		}
	}

	void displayList() {

		Node* ptr = head;

		if (!isEmpty()) {
			while (ptr) {
				cout << ptr->info << " ";
				ptr = ptr->next;
			}
			cout << endl;
		}
		else {
			cout << "The list is empty." << endl;
		}
	}
};