#include<iostream>
using namespace std;
struct node_type {
	int info;
	node_type* link;
};
node_type* build_list_backward(int size) {
	int num;
	node_type* first, * newnode;
	first = NULL;
	for (int i = 1; i <= size; i++) {
		cout << "enter the " << i << " number of the link list\n";
		cin >> num;
		newnode = new node_type;
		newnode->info = num;
		
		if (first == NULL) {
			first = newnode;
			newnode->link = NULL;
		}
		else {
			newnode->link = first;
			first = newnode;
		}
	}
	return first;
}
int main() {
	int size;
	node_type* p;
	cout << "enter the size of link list\n";
	cin >> size;
	p=build_list_backward(size);
	while (p != NULL) {
		cout << p->info<<" - ";
		p = p->link;
	}

}