/* This space is left intentionally to improve readability */

/* This .cpp file contains the definition of Doubly Linked List
   We have made this class generic by using 'template' keyword
   having 'X' as a placeholder for the datatype */

#include <iostream>

using namespace std;


template <class X>
class DoublyLinkedList {

private:
	X info;
	DoublyLinkedList* tail;
	DoublyLinkedList* next;
	DoublyLinkedList* prev;

public:

	DoublyLinkedList() {
		this->info = 0;
		this->next = NULL;
		this->prev = NULL;
		this->tail = NULL;
	}

	DoublyLinkedList(X val) {
		this->info = val;
		this->next = NULL;
		this->prev = NULL;
		this->tail= NULL;
	}

	// Member functions.
	bool isEmpty (DoublyLinkedList* head) {
		return head == NULL;
	}

	void addNode(X val, DoublyLinkedList* &head) {

		DoublyLinkedList* ptr;
		DoublyLinkedList* newNode = new DoublyLinkedList(val);
		
		if (isEmpty(head)) {
			head = newNode;
		}
		else {
			ptr = head;
			while (ptr->next != NULL) {
				ptr = ptr->next;
			}
			ptr->next = newNode;
			newNode->prev = ptr;
			tail = newNode;
		}
	}

	void displayList(DoublyLinkedList* head) {

		DoublyLinkedList* ptr;
		if (isEmpty(head)) {
			cout << "The list is empty there is nothing to show." << endl;
		}
		else {
			ptr = head;
			while (ptr) {

				cout << ptr->info << endl;
				ptr = ptr->next;
			}
		}
		//Reverse
		DoublyLinkedList* rptr;
		cout << "Printing the linked list in reverse order." << endl;
		if (tail == NULL) {
			cout << "The list is empty there is nothing to show" << endl;
		}
		else {
			rptr = this->tail;
			while (rptr) {
				cout << rptr->info<< endl;
				rptr = rptr->prev;
			}
		}
	}

	void deleteNode(X val, DoublyLinkedList* &head) {
		DoublyLinkedList* ptr , *delNode;

		if (isEmpty(head)) {
			cout << "The list is empty." << endl;
		}
		else if (head->info==val) {
			ptr = head;
			head = head->next;
			delete ptr;
		}
		else if (head->info != val) {
			ptr = head;
			while (ptr->next->info != val) {
				ptr = ptr->next;
			}
			
			delNode = ptr->next;
			ptr->next->next->prev = ptr;
			ptr->next = ptr->next->next;
			delete delNode;
		}
	}
};