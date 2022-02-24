#include<iostream>
using namespace std;
struct nodetype {
	int data;
	nodetype* link;
};
nodetype* buildlistforward(int size) {
	nodetype* first, * last, * newnode;

	int  num;
	
	first = NULL;
	last = NULL;
	for (int i = 0; i < size; i++) {
		newnode = new nodetype;//new memory of node is generated and it address is stored in newnode
		cout << "enter the " << i + 1 << "number of linklist\n";
		cin >> num;
		newnode->data = num;
		newnode->link = NULL;

		if (first == NULL) {
			first = newnode;
			last = newnode;
		}
		else {
			
			last->link = newnode;
			last = newnode;
		}
	}
	return first;
}
int main() {
	nodetype* p, * q;
	int size;

	cout << "enter the size of link list\n";
	cin >> size;
	p = buildlistforward(size);
	q = p;
	for (int i = 0; i < size; i++){
		cout << q->data << " - ";
		q = q->link;
	}
}

