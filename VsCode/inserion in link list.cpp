#include<iostream>
using namespace std;
struct nodetype {
	int data;
	nodetype* next;
};
nodetype* buildlinklist(int size) {
	int num;
	nodetype* head, * last, * newnode;
	head = NULL;
	last = NULL;
	//cout << head->data;
	for (int i = 1; i <= size; i++) {
		
		 cout << "enter " << i << " number of link list\n";
		cin >> num;
		newnode = new nodetype;
		newnode->data = num;
		newnode->next = NULL;
		if (head == NULL) {
			head = newnode;
			last = newnode;
		}
		else {
			last->next = newnode;//only address of old newnode link is change from Null to new node address
			last = newnode;//only last pointer address is change from older newnode to newer newnode
			//so next time last->next also updated to previous newnode.
		}
		return head;
	}
	
	
	
}
nodetype* insert_node(nodetype* q) {
	int pos, num;
	cout << "enter the position where u want to add node\n";
	cin >> pos;
	cout << "enter the info of node\n";
	cin >> num;
	nodetype* first, * last, * newnode;
	newnode = new nodetype;
	newnode->data =num ;
	newnode->next = NULL;
	first = q;
	last = q;
	for (int i = 2; i <= pos-1; i++) {
		cout << last->data << "\n";
		last = last->next;
	}
	
		newnode->next = last->next;
		last->next = newnode;
		return first;
}
	int main() {
		nodetype* p, * q;
		int size;
		cout << "enter size of link list\n";
		cin >> size;
		p = buildlinklist( size);
		//q = insert_node(p);
		//while (q != NULL) {
			//cout << q->data<<" - ";
			//q = q->next;
		//}
	}

