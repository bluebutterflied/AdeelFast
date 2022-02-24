#include<iostream>
using namespace std;
struct nodetype {
	int data;
	nodetype* link;
};
class linklist {
private:
	nodetype* first, * last, * newnode;
public:
	nodetype* build_link_list(int);
	nodetype* delete_link_list_node();
	void display();
};
nodetype* linklist::build_link_list(int size) {
	int num;
	first = NULL;
	for (int i = 1; i <= size; i++) {
		cout << "enter the "<<i<< " number of link list\n";
		cin >> num;
		newnode = new nodetype;
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
nodetype* linklist::delete_link_list_node() {
	int pos;
	
	nodetype* p, * q;
	q = first;
	cout << "enter the position of node u want to delete\n";
	cin >> pos;
	for (int i = 2; i < pos; i++) {
		q = q->link;
	}
	p = q->link;
	q->link = p->link;
	delete p;
	return first;
}
void linklist::display() {
	nodetype* a;
	a = first;
	cout << "your link list is\n";
	while (a != NULL) {
		cout << a->data << " - ";
		a = a->link;
	}
}
int main() {
	linklist l1;
	int size;
	int num;

	cout << "press 1 to create link list\n";
	cin >> num;
	
	if (num == 1) {

		cout << "enter the size of link list u want to create\n";
		cin >> size;
		l1.build_link_list(size);
	}
	cout << "press 2 to delete a node form link list\n";
	cin >> num;
	if (num == 2) {

		l1.delete_link_list_node();
	}
	cout << "press 3 to display link list\n";
	cin >> num;
	if (num == 3) {
		l1.display();
	}

}