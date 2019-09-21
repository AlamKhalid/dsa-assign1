#include <iostream>

using namespace std;


template <class X> class DLinkedList {
private:
	X info;
	DLinkedList* next, prev;
public:
	DLinkedList() {
		this->info = 0;
		this->next = NULL;
		this->prev = NULL;
	}
	DLinkedList(X val) {
		this->info = val;
		this->next = NULL;
		this->prev = NULL;
	}
	// member functions.
	bool isEmpty (DLinkedList* head) {
		if (head == NULL) {
			return true;
		}
		else {
			return false;
		}
	}
	void addNode(X val, DLinkedList* &head) {
		DLinkedList* ptr;
		DLinkedList newNode = new DLinkedList(val);
		
		if (head == NULL) {
			head = newNode;
		}
		else {
			ptr = head;
			while (ptr->next != NULL) {
				ptr = ptr->next;
			}
			ptr->next = newNode;
		}
	}

};