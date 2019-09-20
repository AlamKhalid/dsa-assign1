/* This space is left intentionally to improve readability */

/* This .cpp file contains the definition of Singly Linked List 
   We have made this class generic by using 'template' keyword
   having 'X' as a placeholder for the datatype */

#include<iostream>

using namespace std;

template <class X> class LinkedList {

private:
	X info;
	LinkedList* next;

public:
	// Construction defition starts here
	LinkedList() {
		info = 0;
		next = NULL;
	}

	LinkedList(X val) {
		this->info = val;
		this->next = NULL;
	}

	// Member function's definition start's here

	bool isEmpty(LinkedList* head) {
		return head==NULL;
	}

	void addNode(X val, LinkedList* &head) {
		
		LinkedList* newNode = new LinkedList(val);
		LinkedList* ptr;
		
		if (head == NULL) {
			head = newNode;
		}
		else {
			ptr = head;
			while (ptr->next) {
				ptr = ptr->next;
			}
			ptr->next = newNode;
		}
	}

	void displayList(LinkedList* head) {

		LinkedList* ptr = head;

		if (!isEmpty(head)) {
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