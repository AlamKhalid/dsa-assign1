#include <iostream>

using namespace std;

template <class X>
class DoublyCircularLinkedList {

private:

	int len;

	class Node {

	public:
		X info;
		Node* next;
		Node* prev;

		Node(X val = 0, Node* next = NULL , Node* prev = NULL) {
			this->info = val;
			this->next = next;
			this->prev = prev;
		}
	};

	Node* head, *tail;

public:

	DoublyCircularLinkedList() {
		head = tail = NULL;
		len = 0;
	}

	bool isEmpty() {
		return head == NULL;
	}

	int length() {
		return this->len;
	}

	void addNodeStart(X val)
	{
		Node* temp = new Node(val);
		len++;

		if (head == NULL)
		{
			head = tail = temp;
			tail->next = head;
			tail->prev = head;
		}
		else
		{
			temp->next = head;
			temp->prev = tail;
			head = temp;
			tail->next = head;
			
		}
	}

	void addNodeEnd(X val)
	{
		Node* temp = new Node(val);
		len++;

		if (head == NULL)
		{
			head = tail = temp;
			tail->next = head;
			tail->prev = head;
		}
		else
		{
			tail->next = temp;
			temp->prev = tail;
			tail = temp;
			tail->next = head;
			head->prev = tail;
		}
	}


	void addNodeAt(X val, int index) // add at given index
	{
		Node* temp;
		int i;

		if (tail == NULL)
		{
			cout << "List is Empty!" << endl;
		}
		else
		{
			temp = head;
			i = 1;
			i = 1;
			while (i < index - 1 && temp != NULL)
			{
				temp = temp->next;
				i++;
			}
			if (index == 1)
			{
				addNodeStart(val);
			}
			else if (temp == tail)
			{
				addNodeEnd(val);
			}
			else if (temp != NULL)
			{
				Node* newnode = new Node(val); 


				newnode->next = temp->next;
				newnode->prev = temp;

				if (temp->next != NULL)
				{
					temp->next->prev = newnode;
				}
				temp->next = newnode;
			}
			else
			{
				cout << "Invalid index." << endl;
			}
		}
	}
	void addNode(X val, int index = 0) {		// By default, it inserts the data at the start

		if (index == len)
			addNodeEnd(val);

		else if (index == 0)
			addNodeStart(val);
		
		
		else if (index > 0 && index < len) {

			Node* current = head, * prev = NULL;


			for (int i = 0; i < index-1; i++) {
				prev = current;
				current = current->next;
			}

			Node* newNode = new Node(val, current, prev);

			current->prev = newNode;
			prev->next = newNode;
			len++;
		}
		else {
			cout << "Invalid index. Please try again." << endl;
		}
	}

	void deleteFirst()
	{
		if (isEmpty()) // no node exists
		{
			cout << "List is Empty!" << endl;
		}
		else
		{
			if (head == tail) // if single node exists
			{
				delete head;
				head = tail = NULL;
				len--;
			}
			else
			{
				Node* temp = head;
				head = head->next;
				head->prev = tail;
				tail->next = head;
				delete temp;
				len--;
			}
		}
	}

	void deleteLast() {

		if (isEmpty()) // no node exists
		{
			cout << "List is Empty!" << endl;
		}
		else
		{
			if (head == tail) // if single node exists
			{
				delete head;
				head = tail = NULL;
				len--;
			}
			else
			{
				Node* temp = tail;
				tail = tail->prev;
				delete temp;
				tail->next = head;
				head->prev = tail;
				len--;
			}
		}
	}

	void deleteNodeAt(int index =0)	{	// delete by index 
		
		if (index == 0)
			deleteFirst();

		else if (index == len)
			deleteLast();

		else if (index > 0 && index < len) {
			if (!isEmpty()) {
				Node* current = head, * prev = NULL;

				for (int i = 0; i < index-1; i++) {
					prev = current;
					current = current->next;
				}

				prev->next = current->next;
				current->next->prev = prev;

				delete current;
				len--;
			}
			else {
				cout << "Invalid index." << endl;
			}
		}
		else
			cout << "List is empty." << endl;
	}

	void deleteNode(X val) {		// Delete by value

		Node* ptr, * delNode;

		if (isEmpty()) {
			cout << "Delete operation cannot be done. List is empty." << endl;
		}
		else if (head->info == val) {
			deleteFirst();
		}
		else if (tail->info == val) {
			deleteLast();
		}
		else {
			ptr = head;
			int i = 0;

			while (ptr->next->info != val && i < len - 1) {
				ptr = ptr->next;
				i++;
			}
			if (i != len - 1) {
				delNode = ptr->next;
				ptr->next = ptr->next->next;
				delNode->next->prev = delNode->prev;
				delete delNode;
				len--;
			}
			else {
				cout << "Value does not exist." << endl;
			}
		}
	}

	void displayList()
	{
		Node* ptr = head;

		if (isEmpty())
		{
			cout << "List is Empty!" << endl;
		}
		else
		{
			do {
				cout << ptr->info << " ";
				ptr = ptr->next;
			} while (ptr != head);
			cout << endl;
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
			} while (ptr);

			if (!flag) {
				cout << "No node with such value exists" << endl;
			}
		}
		else {
			cout << "List is empty." << endl;
		}
	}
};
