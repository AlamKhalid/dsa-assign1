/* This space is left intentionally to improve readability */

/* This .cpp file contains the definition of Singly Linked List 
   We have made this class generic by using 'template' keyword
   having 'X' as a placeholder for the datatype */

#include<iostream>

using namespace std;

template <class X>
class LinkedList {

private:
	X info;
	LinkedList* next;
	static LinkedList* head;
	static LinkedList* tail;

public:
	static int length;

	// Construction defition starts here
	LinkedList() {}

	LinkedList(X val) {
		this->info = val;
		this->next = NULL;
		length++;
	}

	// Member function's definition starts here

	bool isEmpty() {
		return head==NULL;
	}

	void addNodeEnd(X val) {
		
		LinkedList* newNode = new LinkedList(val);
		LinkedList* ptr;
		
		if (head == NULL) {
			head = newNode;
			tail = head;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
	}

	void deleteNode(X val) {

		LinkedList* ptr, *delNode;

		if (isEmpty()) {
			cout << "Delete operation cannot be done. List is empty."<<endl;
		}
		else if(head->info == val) {
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
					ptr->next = ptr->next->next;
					delete delNode;
		}
	}

	void displayList() {

		LinkedList* ptr = head;

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

// Static variables declaration of above here

template <class X> int LinkedList<X>::length = 0;
template <class X> LinkedList<X>* LinkedList<X>::head = NULL;
template <class X> LinkedList<X>* LinkedList<X>::tail = NULL;