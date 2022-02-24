#include<iostream>
using namespace std;
struct node {
	int data;
	node* next;
};
node* head;
void add(int d) {
	node* first_num;
	first_num = new node;
	first_num->data = d;
	if (head == NULL) {
		head = first_num;
		first_num->next = NULL;
	}
	else {
		node* second_node;
		second_node = new node;
		second_node = head;
		while (second_node->next != NULL) {
			second_node = second_node->next;

		}
		second_node->next = first_num;
		first_num->next = NULL;
		
	}
}
	void print(){
		node* printer_node;
		printer_node = new node;
		printer_node = head;
		while (printer_node != NULL) {
			cout<<printer_node->data<<" - ";
			printer_node=printer_node->next;

		}

	}


int main() {
	int x,y;
	cout << "how many numbers you want to store in link list\n";
	cin >> x;
	for (int i = 0; i < x; i++) {
		cout << "enter the first number of your link list\n";
		cin >> y;
		add(y);	
	}
	print();
}