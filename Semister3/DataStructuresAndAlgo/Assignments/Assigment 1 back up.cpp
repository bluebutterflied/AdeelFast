#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Person {
public:
	void read_data(int);
	string get_First_Name();
	string get_Last_Name();
	string get_Telephone();
	string get_email();
	void print();

private:
	string First_Name;
	string Last_Name;
	string Telephone;
	string email;
};

void Person::read_data(int x) {
	ifstream read;
	string temp;
	read.open("Assig01-person-data.txt");
	read.seekg(34L, ios::beg);
	for (int i = 0; i < x; i++) {
		read >> temp;
	}
	read >> First_Name;
	read >> Last_Name;
	read >> Telephone;
	read >> email;
}
void Person::print() {
	cout << First_Name << "\t" << Last_Name << "\t" << Telephone << "\t" << email;
}
string Person::get_First_Name() {
	return First_Name;
}
string Person::get_Last_Name() {
	return Last_Name;
}
string Person::get_Telephone() {
	return Telephone;
}
string Person::get_email() {
	return email;
}
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
	void set_value() {
		first = NULL;
	};
	void append_data(list, list, list, list, int);
	void print();
	void deletedata(int);
	void write_data();
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
	temp1 = first;
	if (temp1 == NULL) {
		temp1 = newnode;
		first = temp1;
		temp2 = newnode;
	}

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
template<class item>
void link_list<item>::deletedata(int pos) {
	nodetype* p, * q;
	p = first;
	q = first;
	for (int i = 2; i < pos; i++) {
		p = p->next;
	}
	q = p->next;
	p->next = q->next;
	delete q;
}
int main() {
	Person p[500];
	nodetype* writer;
	int x, a = 0;
	link_list<string>l1;
	ifstream read;
	read.open("Assig01-person-data.txt");
	for (int i = 0; i < 500; i++) {
		p[i].read_data(a);
		a += 4;
	}
	read.close();
	l1.set_value();
	writer=l1.store_data(p);
	l1.find_and_show();
	cout << "enter the no of persons u want to add in data list\n";
	cin >> x;

	string l, m, n, o;
	for (int i = 1; i <= x; i++) {
		cout << "enter postion where u want to add data of " << i << " person\n";
		int pos;
		cin >> pos;
		cout << "enter first name of " << i << " person\n";
		cin >> l;
		cout << "enter last name of " << i << " person\n";
		cin >> m;
		cout << "enter phone of " << i << " person\n";
		cin >> n;
		cout << "enter email of " << i << " person\n";
		cin >> o;
		l1.append_data(l, m, n, o, pos);
	}
	cout << "enter the position of node u want to delete\n";
	int pos1;
	cin >> pos1;
	l1.deletedata(pos1);
	l1.print();
	l1.write_data(writer);
}
