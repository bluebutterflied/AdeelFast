#include<iostream>
#include<string>
#include<fstream>
#include"B-20i1025-A1-person.h"
using namespace std;
struct nodetype {
	string First_name, Last_name, telephone, Email;
	nodetype* next, * previous;
};
template<class list>
class link_list {
public:
	nodetype* store_data(Person p[]);
	void write_data(nodetype *);
	void find_and_show();
	link_list(){
		first=NULL;
	}
	void append_data(list, list, list, list, int);
	void print();
	void deletedata(int);
	void write_data();
	void delete_list();
	void copy_list(link_list&);
	~link_list();
	link_list(link_list&);
private:
	nodetype* first, * last;
	int count;
};

template<class list>
void link_list<list>::write_data(nodetype* x)
 {
	nodetype* temp;
	temp = x;
	ofstream write;
	ifstream read;
	write.open("Assig01-person-data.txt");
	read.open("Assig01-person-data.txt");
	write << "first_name" << "\t" << "last_name" << "\t" << "phone" << "\t" << "email"
		<< "\n";
	while (temp != NULL) {
		write << temp->First_name << "\t" << temp->Last_name << "\t" << temp->telephone
			<< "\t" << temp->Email << "\n";
		temp = temp->next;
	}
	
}


template<class list>
nodetype* link_list<list>::store_data(Person p[500]) {
	nodetype* newnode_lead;
	nodetype* newnode_lag;

	for (int i = 0; i < 500; i++) {
		newnode_lead = new nodetype;
		newnode_lead->First_name = p[i].get_First_Name();
		newnode_lead->Last_name = p[i].get_Last_Name();
		newnode_lead->telephone = p[i].get_Telephone();
		newnode_lead->Email = p[i].get_email();
		newnode_lead->next = NULL;

		if (first == NULL) {
			first = newnode_lead;
			last = newnode_lead;
			first->previous = NULL;
		}
		else {

			last->next = newnode_lead;

			newnode_lag = last;
			last = newnode_lead;
			last->previous = newnode_lag;
		}
	}
	return first;
}

template<class list>
void link_list<list>::find_and_show() {
	nodetype* temp;
	temp = first;
	cout << "enter the first and last name of person u want to show respectively \n";
	string temp1, temp2;
	cout << "enter first name\n";
	cin >> temp1;
	cout << "enter last name\n";
	cin >> temp2;
	while (temp != NULL) {
		if (temp1 == temp->First_name && temp2 == temp->Last_name) {
			cout << "Person founded\t" << "Data of student is given below\n";
			cout << "first name is\t" << temp->First_name
				<< "\n" << "last name is\t" << temp->Last_name << "\n"
				<< "telephone number is\t" << temp->telephone << "\n"
				<< "email id is\t" << temp->Email << "\n";
			break;
		}
		else {
			temp = temp->next;
		}
		if (temp == NULL) {
			cout << "record not found\n";
		}
	}

}
template<class list>
void link_list<list>::append_data(list a, list b, list c, list d, int pos) {
	nodetype* temp1, * temp2, * newnode;
	newnode = new nodetype;
	newnode->First_name = a;
	newnode->Last_name = b;
	newnode->telephone = c;
	newnode->Email = d;
	newnode->next=NULL;
	temp1 = first;

	if (temp1 == NULL) {
		temp1 = newnode;
		first = temp1;
		temp2 = newnode;
	}
	else if(pos==1){
		newnode->next=first;
		first=newnode;
		temp2=newnode->next;
		temp2->previous=newnode;
		
	}
	else{
	
	temp2 = first;
	for (int i = 2; i < pos; i++) {
		temp1 = temp1->next;
	}
	newnode->next = temp1->next;
	temp1->next = newnode;
	temp2 = newnode;
	temp2 = temp2->next;
	temp2->previous = newnode;
}
}
template<class list>
void link_list<list>::print() {
	nodetype* temp;
	temp = first;
	while (temp != NULL) {
		cout << temp->First_name << "\t" << temp->Last_name << "\t" << temp->telephone
			<< "\t" << temp->Email << "\n";
		temp = temp->next;
	}
}
template<class list>
void link_list<list>::deletedata(int pos) {
	nodetype* p, * q;
		p=first;
	
if(pos==1){
	first=p->next;
	delete p;
	
	
}
else{
	p = first;
	q = first;

	for (int i = 2; i < pos; i++) {
		p = p->next;
	}
	q = p->next;
	p->next = q->next;
	delete q;
}
}
template<class list>
void link_list<list>::delete_list(){
	nodetype* temp;
	while(first!=NULL){
		temp=first;
		first=first->next;
		delete temp;
	}
}
template<class list>
link_list<list>::~link_list(){
	delete_list();

}
template<class list>
void link_list<list>::copy_list(link_list &l1){
	nodetype *newnode,*current;
	
	if(first!=NULL){
		delete_list();
	}

	if(l1.first){
		first=NULL;
		last=NULL;	count=0;
	}
	
	else{
		current=l1.first;
		first=new nodetype;
		first->First_name=current->First_name;
    	first->First_name=current->First_name;
		first->Last_name=current->Last_name;
		first->telephone=current->telephone;
		first->Email=current->Email;
       first->next=NULL;
	    last=first;
		current=current->next;
		cout<<"A";
while(current!=NULL){
	newnode=new nodetype;
	newnode->First_name=current->First_name;
    newnode->Last_name=current->Last_name;
	newnode->telephone=current->telephone;
	newnode->Email=current->Email;
    newnode->next=NULL;
    last->next=newnode;
    last=newnode;
    current=current->next;
}
	}
		
}
template<class list>
link_list<list>::link_list(link_list &l1){
first=NULL;	
copy_list(l1);
	
}
