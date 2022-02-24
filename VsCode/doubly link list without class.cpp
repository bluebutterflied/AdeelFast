#include<iostream>
using namespace std;
struct nodetype {
	int data;
	nodetype* next,*previous;
};
nodetype* head, * last;
void buildlinklist(int size) {
	int num;
	nodetype * newnode,*newnode_lag;
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
			head->previous = NULL;
		}
		else {
			last->next = newnode;//only address of old newnode link is change from Null to new node address
			newnode_lag = last;
			last = newnode;//only last pointer address is change from older newnode to newer newnode
			last->previous = newnode_lag;
						   //so next time last->next also updated to previous newnode.
		}

	}


}
void print() {
	nodetype* temp;
	temp = last;
	while (temp != NULL) {
		cout << temp->data<<" - ";
		temp = temp->previous;
	}
}
void print1() {
	nodetype* temp;
	temp = head;
	while (temp != NULL) {
		cout << temp->data << " - ";
		temp = temp->next;
	}
}
int main() {
	nodetype* p;
	int size;
	cout << "enter size of link list\n";
	cin >> size;
 buildlinklist(size);
	print();//use when print through last pointer
	//print1(); //use when print through head pointer
}

