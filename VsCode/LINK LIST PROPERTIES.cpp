#include<iostream>
using namespace std;
struct nodetype {
	int info;
	nodetype* link;
};
class link_list {
public:
	void build_link_list();
	void insert_first(int);
	void insert_last(int);
	bool empty_list();
	void print_list();
	int length();
	bool search_list();
	void destroy_list();
	void delete_node();
	int front();//retrun first item of list;
	int back();
	link_list();
	~link_list();
	void copy_list(link_list&);
	link_list(link_list&);//copy constructor
	//link_list operator=(link_list&);
private:
	nodetype* first;
	nodetype* last;
	int count;
};
/*link_list link_list::operator=(link_list& otherlist) {
	if (this != &otherlist);
	copy_list(otherlist);
	return *this;
}*/
void link_list::build_link_list(){
	int size, num;
	count = 0;
	cout << "enter the size of link list u want to create\n";
	cin >> size;
	first = NULL;
	last = NULL;
	for (int i = 1; i <= size; i++) {
		nodetype* newnode;
		newnode = new nodetype;
		cout << "enter the " << i << " number of link list\n";
		cin >> num;
		newnode->info = num;
		newnode->link = NULL;
		if (first == NULL) {
			first = newnode;
			last = newnode;
		}
		else {
			last->link = newnode;
			last = newnode;
		}
		count++;
	}
}
void link_list::insert_first(int a) {
	nodetype* newnode;
	newnode = new nodetype;
	newnode->info = a;
	newnode->link = first;
	first = newnode;
	count++;
}
void link_list::insert_last(int a) {
	nodetype* newnode;
	newnode = new nodetype;
	newnode->info = a;
	newnode->link = NULL;
	if (first == NULL) {
		first = newnode;
		last = first;
	}
	else {
		last->link = newnode;
		last = newnode;
	}
	count++;
}
bool link_list::empty_list() {
	return(first == NULL);
}
void link_list::print_list() {
	nodetype *newnode;
	newnode = first;
	while (newnode != NULL) {
		cout << newnode->info<<" - ";
		newnode = newnode->link;
	}
	cout << "\n";
}
int link_list::length() {

	return count;
}
void link_list::destroy_list() {
	nodetype *newnode;
	while (first != NULL) {
		newnode = first;
		first = first->link;
		
		delete newnode;
		count = 0;
	}
}
int link_list::front() {
	return first->info;
}
int link_list::back() {
	return last->info;
}
link_list::link_list() {
	first = NULL;
	last = NULL;
	count = 0;
}
void link_list::copy_list (link_list& other_list) {
	nodetype* newnode;
	nodetype* current;
	count = 0;
	if (first != NULL) {
		destroy_list();
	}
	if (other_list.first == NULL) {
		first = NULL;
		last = NULL;
	}
	
	else {
		first = new nodetype;
		current = other_list.first;
		count = 0;
		first->info = current->info;
		first->link = current->link;
		last = first;
		current = current->link;
		cout << current->info;
		while (current != NULL) {
			newnode = new nodetype;
			newnode->info = current->info;
			newnode->link = NULL;
			last->link = newnode;
			last = newnode;
			current = current->link;
			
		}

	}
	
		
}
link_list::link_list(link_list& other_list) {
	first = NULL;
	copy_list(other_list);
}
void link_list::delete_node() {
	nodetype* p, * q;
	cout << "enter the position of node u want to delete\n";
	int num;
	cin >> num;
	p = first;

	for (int i = 2; i < num; i++) {
		p = p->link;
	}
	q = p->link;
	p->link = q->link;
	delete q;
}
link_list::~link_list() {
	destroy_list();
}
int main() {
	link_list l1, l2,l3;
	int num;
	num = 100;//temp value;
	while (num != 0) {
		cout << "press 1 to build a list\n";
		cout << "press 2 to display a list\n";
		cout << "press 3 to check length of list\n";
		cout << "press 4 to insert at start of list\n";
		cout << "press 5 to insert at end of list\n";
		cout << "press 6 to delete a list\n";
		cout << "press 7 to copy one list to other\n";
		cout << "press 8 to display second list\n";
		cout << "press 9 to show the first item of list\n";
		cout << "press 10 to show the last item of list\n";
		cout << "press 11 to delete specific node from list\n";
		cout << "press 12 for assigment operaote\n";
		cout << "press 0 to end\n";
		cin >> num;
		if (num == 1) {

			l1.build_link_list();
		}
		else if (num == 2) {
			cout << "linklist is\n";
			l1.print_list();
		}
		else if (num == 4) {
			int a;
			cout << "enter the item u want to add at front\n";
			cin >> a;
			l1.insert_first(a);

		}
		else if (num == 3) {
			cout << "length of link list is\t" << l1.length() << "\n";
		}

		else if (num == 5) {
			cout << "enter the item u want to add at end of link list\n";
			int a;
			cin >> a;
			l1.insert_last(a);
		}
		else if (num == 6) {
			l1.~link_list();
		}
		else if (num == 7) {
			l2.copy_list(l1);
		}

		else if (num == 8) {
			cout << "second link list is\n";
			l2.print_list();
		}
		else if (num == 9) {
			cout << "press 1 for first link list and 2 for second link list\n";
			int y;
			cin >> y;
			if (y == 1) {
				cout << l1.front() << "\n";
			}
			else if (y == 2) {
				cout << l2.front() << "\n";
			}
		}
		else if (num == 10) {

			cout << "press 1 for first link list and 2 for second link list\n";
			int y;
			cin >> y;
			if (y == 1) {
				cout << l1.back() << "\n";
			}
			else if (y == 2) {
				cout << l2.back() << "\n";
			}


		}
		else if (num == 11) {
			cout << "press 1 to delete node from first list and 2 for  second list\n";
			int a;
			cin >> a;
			if (a == 1) {
				l1.delete_node();
			}
			else if (a == 2) {
				l2.delete_node();
			}
		}
		else if (num == 12) {
			//l2 = l1;
		}
	}
}