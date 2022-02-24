#include<iostream>
using namespace std;
struct node {
	int data;
	node* next;
};
node* head;
void link_list(int d) {
	node* first_node;
	first_node = new node;
	first_node->data = d;
	if (head == NULL) {
		head = first_node;
		first_node->next = NULL;
	}
	else {
		node* second_node;
		second_node = new node;
		second_node = head;
		while (second_node->next != NULL) {
			second_node = second_node->next;

		}
		second_node->next = first_node;
		first_node->next = NULL;

	}
}
void print() {
	node* printer_node;
	printer_node = new node;
	printer_node = head;
	while (printer_node != NULL) {
		cout << printer_node->data << " - ";
		printer_node = printer_node->next;

	}
	
}
void add_at_front(int d) {
	node* adding_node;
	adding_node = new node;
	adding_node->data = d;
	//adding_node = head;
	if (head == NULL) {
		head = adding_node;
	}
	else {
		node* second_node;
		second_node = head;
		adding_node->next = second_node;
		head = adding_node;

	}

}

void add_at_end(int d) {
	node* adding_node;
	adding_node = new node;
	adding_node->data = d;
	if (head == NULL) {
		head = adding_node;
		adding_node->next = NULL;
	}
	else {
		node* second_node;
		second_node = new node;
		second_node = head;
		while (second_node->next != NULL) {
			second_node = second_node->next;
		}
		second_node->next = adding_node;
		adding_node->next = NULL;
	}

}
void add_at_mid(int d, int c) {
	node* adding_node;
	adding_node = new node;
	adding_node->data = d;
	if (head == NULL) {
		head = adding_node;
	}
	else {
		node* second_node;
		second_node = new node;
		second_node = head;
		int x;
		cout << "enter the location of where you want to add " << c << " number\n";
		cin >> x;

		if (x == 1) {
			adding_node->next = second_node;
			head = adding_node;

		}
		else {
			for (int i = 1; i < x - 1; i++) {

				second_node = second_node->next;

			}

			//cout << second_node->data;
			adding_node->next = second_node->next;
			second_node->next = adding_node;



		}
	}
}
int main() {
	int a, x, y, z;;
	cout << "\t\tpress 1 to create list\n";
	cout << "\t\tpress 2 to add_at_front list\n";
	cout << "\t\tpress 3 to add_at_mid list\n";
	cout << "\t\tpress 4 to add_at_end list\n";
	cout << "\t\tpress 5 to display list\n";
	cout << "\t\tpress 0 to end\n\n";
	a = 6;
	while (a != 0) {
		cout<<"\t\tpress any number from the given menu\n\t\t\t";
		cin >> a;
		if (a == 1) {
			cout << "\tenter the amount of numbers you want to create in link list\n\t\t\t";
			cin >> x;
			for (int i = 1; i <= x; i++) {
				cout << "\t\tenter numbers\n\t\t\t";
				cin >> y;
				link_list(y);
			}
			cout << "\n";
		}
		else if (a == 2) {

			cout << "\tenter the amount numbers you want to add at front in link list\n\t\t";
			//x = 0; y = 0;
			cin >> x;
			for (int i = 1; i <= x; i++) {
				cout << "\t\tenter numbers\n\t\t\t";
				cin >> y;
				add_at_front(y);

			}
			cout << "\n";
		}
		else if (a == 4) {
			cout << "\tenter the amount numbers you want to add at end in link list\n\t\t\t";
			x = 0; y = 0;
			cin >> x;
			for (int i = 1; i <= x; i++) {
				cout << "\t\tenter numbers\n\t\t\t";
				cin >> y;
				add_at_end(y);
			}
			cout << "\n";
		}
		else if (a == 3) {
			cout << "\tenter the amount numbers you want to add at mid in link list\n\t\t\t";
			x = 0; y = 0;
			cin >> x;
			for (int i = 1; i <= x; i++) {
				cout << "\t\tenter numbers\n\t\t\t";
				cin >> y;
				//cout << "\tenter location\n\t";
				//cin >> z;
				add_at_mid(y, i);
			}
		}
		else if (a == 5) {
			print();
			cout << "\n";
		}
		else if (a == 0) {
			cout << "\t\t****THANK YOU****\n";
		}

	}





}