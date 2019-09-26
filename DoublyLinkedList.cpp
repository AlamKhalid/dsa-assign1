/* Yar in ma sara mera kaam ha excluding delete node at and inset node at wala function
thora net se uthaya han sorry for that i am still catching up with the course 
inshaAllah jald hi sath lag jao ga phr game on*/


#include <iostream>

using namespace std;

template <class X>
class DoublyLinkedList {

private:

	int len;

	class Node {

	public:
		X info;
		Node* next;
		Node* prev;

		Node(X val) {
			this->info = val;
			this->next = NULL;
			this->prev = NULL;
		}
	};
	Node* head, *tail;

public:
	DoublyLinkedList() {
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
		}
		else
		{
			temp->next = head;
			temp->prev = temp;
			head = temp;
		}
	}

	void addNodeEnd(X val)
	{
		Node* temp = new Node(val);
		len++;

		if (head == NULL)
		{
			head = tail = temp;
		}
		else
		{
			tail->next = temp;
			temp->prev = tail;
			tail = temp;
		}
	}

	void addNodeAt(X val, int index) // add at given index
	{
		Node* newNode, *temp;
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
				newnode = (Node *)malloc(sizeof(Node)); // i dont know what this means
				newnode->info = val;
				         
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

	void deleteFirst()
	{
		if (head == NULL) // no node exists
		{
			cout << "List is Empty!" << endl;
		}
		else
		{
			if (head == tail) // if single node exists
			{
				head = tail = NULL;
				len--;
			}
			else
			{
				Node* temp = head;
				head = head->next;
				head->prev = NULL;
				delete temp;
				len--;
			}
		}
	}

	void deleteLast()
	{
		if (head == NULL) // no node exists
		{
			cout << "List is Empty!" << endl;
		}
		else
		{
			if (head == tail) // if single node exists
			{
				head = tail = NULL;
				len--;
			}
			else
			{
				Node* temp = tail;
				tail = tail->prev;
				delete temp;
				tail->next = NULL;
				len--;
			}
		}
	}

	// ye wala thora chapa ha sorry
 void deleteNodeAt(int index = len - 1) // by index 
	{
		Node* current = head;
		int i;

		for (i = 0; i < index && current != NULL; i++)
		{
			current = current->next;
		}

		if (index == 1)
		{
			deleteFirst();
		}
		else if (current == tail)
		{
			deleteLast();
		}
		else if (current != NULL)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
			delete current;
			len--;
		}
		else
		{
			cout << "Invalid index." << endl;
		}
	}

	void displayList()
	{
		Node* ptr = head;

		if (head == NULL)
		{
			cout << "List is Empty!" << endl;
		}
		else
		{
			while (ptr != NULL)
			{
				cout << ptr->info << " ";
				ptr = ptr->next;
			}
			cout << endl;
		}
	}
};
