#include<iostream>
using namespace std;
struct nodetype {
	int data;
	nodetype* next;
};
nodetype* head, * last;
void buildlinklist(int size) {
	int num;
	nodetype* newnode;
	head = NULL;
	last = NULL;
	
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
			last->next = newnode;//only address of old newnode link is change from Null to new node addres
			last = newnode;//only last pointer address is change from older newnode to newer newnode
			//so next time last->next also updated to previous newnode.
		}
		
	}
	last->next = head;
	 head=last ;

}
void print() {
	nodetype* temp;
	temp = head;
		cout << temp->data << " - ";
	cout<< temp->next->data;
	//""""""  ACEESING FIRST DATA AND LAST DATA THROUGH HEAD SINGLE POINTER CIRCULAR LINK LIST"
}
int main() {
	
	int size;
	cout << "enter size of link list\n";
	cin >> size;
	buildlinklist(size);
	print();

}

