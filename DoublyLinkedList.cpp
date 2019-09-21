#include <iostream>

using namespace std;


template <class X> class DLinkedList {
private:
	X info;
	DLinkedList* tail;
	DLinkedList* next;
	DLinkedList* prev;
public:
	DLinkedList() {
		this->info = 0;
		this->next = NULL;
		this->prev = NULL;
		this->tail = NULL;
	}
	DLinkedList(X val) {
		this->info = val;
		this->next = NULL;
		this->prev = NULL;
		this->tail= NULL;
	}
	// member functions.
	bool isEmpty (DLinkedList* head) {
		if (head ==NULL) {
			return true;
		}
		else {
			return false;
		}
	}
	void addNode(X val, DLinkedList* &head) {
		DLinkedList* ptr;
		DLinkedList* newNode = new DLinkedList(val);
		
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

	void displayList(DLinkedList* head) {
		DLinkedList* ptr;
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
		DLinkedList* rptr;
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

	void deleteNode(X val,DLinkedList* &head) {
		DLinkedList* ptr , *delNode;
		if (isEmpty(head)) {
			cout << "The list is empty. There's no way to delete it." << endl;
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