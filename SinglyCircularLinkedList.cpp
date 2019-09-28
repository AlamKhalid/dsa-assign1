/* This space is left intentionally to improve readability */

/* This .cpp file contains the definition of Singly Circular Linked List
   We have made this class generic by using 'template' keyword
   having 'X' as a placeholder for the datatype */

#include<iostream>

using namespace std;

template <class X>
class SinglyCircularLinkedList {

private:

	class Node {

	public:
		X info;
		Node* next;

		Node(X val = 0, Node * ptr = NULL) {
			this->info = val;
			this->next = ptr;
		}
	};

	int len;

	Node* head;
	Node* tail;

public:

	// Construction defition starts here
	SinglyCircularLinkedList() {
		head = tail = NULL;
		len = 0;
	}

	// Member function's definition starts here

	bool isEmpty() {
		return head == NULL;
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
			tail->next = head;
		}
		else {
			tail->next = newNode;
			tail = newNode;
			tail->next = head;
		}
	}

	void addNode(X val, int index = 0) {		// By default, it inserts the data at the start

		if (index == len)		// in case user enters the end index
			addNodeEnd(val);

		else if (index >= 0 && index < len) {

			Node* current = head, * prev = NULL;

			for (int i = 0; i < index; i++) {
				prev = current;
				current = current->next;
			}

			Node* newNode = new Node(val, current);
			if (head == NULL) {
				head = tail = newNode;
				tail->next = head;
			}
			else if (!prev) {
				head = newNode;
				tail->next = head;
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

		Node* ptr, * delNode;

		if (isEmpty()) {
			cout << "Delete operation cannot be done. List is empty." << endl;
		}
		else if (head->info == val) {
			ptr = head;
			head = head->next;
			tail->next = head;
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

		if (index == 0)
			deleteFirstNode();

		else if (index >= 0 && index < len) {
			Node* current = head, * prev = NULL;

			for (int i = 0; i < index; i++) {
				prev = current;
				current = current->next;
			}
			prev->next = current->next;
			if (current == tail) {			// Adjusting tail
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
			if (len == 1) {			// If there is only 1 node in the list
				delete ptr;
				head = tail = NULL;
			}
			else {
				head = head->next;
				tail->next = head;
				delete ptr;
			}
			len--;
		}
		else {
			cout << "List is empty." << endl;
		}
	}

	void displayList() {

		Node* ptr = head;

		if (!isEmpty()) {
			do {
				cout << ptr->info << " ";
				ptr = ptr->next;
			} while (ptr != head);
			cout << endl;
		}
		else {
			cout << "The list is empty." << endl;
		}
	}

	void searchFor(X val) {

		if (!isEmpty()) {
			Node* ptr = head;
			int index = 0;
			int flag = 0;

			do {
				if (ptr->info == val) {
					if (!flag) {
						cout << "Found at following indicies:\n";
					}
					cout << "Index: " << index << endl;
					flag = 1;
				}
				ptr = ptr->next;
				index++;
			} while (ptr != head);

			if (!flag) {
				cout << "No node with such value exists" << endl;
			}
		}
		else {
			cout << "List is empty." << endl;
		}
	}
};
