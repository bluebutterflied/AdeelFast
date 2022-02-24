#include<iostream>
using namespace std;
struct node_type {
	int data;
	node_type* link;
};
node_type* head;
void add_at_front(int d) {
	node_type* first_node;
	first_node = new node_type;
	first_node->data = d;
	if (head == NULL) {
		head = first_node;
		first_node->link = NULL;
	}
	else {
		node_type* second_node;
		second_node = new node_type;
		second_node = head;
		
	}

}