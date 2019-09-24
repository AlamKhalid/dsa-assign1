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

		Node(X val) {
			this->info = val;
			next = NULL;
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

	void deleteNode(X val) {

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
		else if (head->info != val) {
			ptr = head;
					while (ptr->next->info != val) {
						ptr = ptr->next;
				}
			delNode = ptr->next;
			ptr->next = ptr->next->next;
			delete delNode;
			len--;
		}
	}

	void deleteFirstNode() {

		Node* ptr;
		if (!isEmpty()) {
			ptr = head;
			head = head->next;
			if (!head) {
				tail = head;
			}
			delete ptr;
			len--;
		}
		else {
			cout << "List is empty." << endl;
		}
	}

	void deleteLastNode() {
		deleteNode(tail->info);
	}

	void displayList() {

		Node* ptr = head;

		if (!isEmpty()) {
			while (ptr) {
				cout << ptr->info << endl;
				ptr = ptr->next;
			}
		}
		else {
			cout << "The list is empty." << endl;
		}
	}
};