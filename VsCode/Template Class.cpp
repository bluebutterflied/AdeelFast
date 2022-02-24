#include<iostream>
#include<string>
using namespace std;
template<class element>
class list {
public:
	bool empty();
	bool full();
	int get_length();
	int max_size();
	void sort();
	void print();
	void insert_at(element&, int);
	list();
	~list();
private:
	int length;
	int maxsize;
	element* lister;
};
template<class element>
list<element>::list() {
	maxsize = 50;
	lister = new element[50];
	length = 0;
}
template<class element>
bool list<element>::empty() {
	return (length == 0);
}
template<class element>
bool list<element>::full() {
	return (length == maxsize);
}

template<class element>
int list<element>::get_length() {
	return length;
}
template<class element>
int list<element>::max_size() {
	return maxsize;
}
template<class element>
void list<element>::sort() {
	int a;
	element temp;
	for (int i = 0; i < length; i++) {
		a = i;
		for (int j = i + 1; j < maxsize; j++)
			if (lister[j] < lister[i]) {
				temp = lister[i];
				lister[i] = lister[a];
				lister[a] = temp;
			}
	}
}
template<class element>
void list<element>::print() {
	for (int i = 1; i <= length; i++) {
		cout << lister[i] << "\n";
	}
}
template<class element>
void list<element>::insert_at(element& a, int pos) {
	lister[pos] = a;
	
	length++;
}
template<class element>
list<element>::~list() {
	//delete[] list;
}
int main() {
	string str[5];
	list<int> l1;
	int num;
	num = 100;//temp value;
	while (num != 0) {
		cout << "press 1 to insert a list\n";
		cout << "press 2 to display a list\n";
		cout << "press 3 to check length of list\n";
		cout << "press 4 to check maxsize of list\n";
		cout << "press 5 to delete list\n";
		cout << "press 6 to sort list\n";
		cout << "press 7 to check list is empty\n";
		cout << "press 8 to check list is full\n";
		cin >> num;
		if (num == 1) {
			cout << "enter the size of list\n";
			int a; int num;
			cin >> a;
			for (int i = 1; i <= a; i++) {
				cout << "enter " << i << " number\n";
				cin >> num;
				
				l1.insert_at(num, i);
			}
		}
		else if (num == 2) {
			cout << "linklist is\n";
			l1.print();
		}
		else if (num == 4) {
			
			cout << "maxsize of list is\t";
			cout<<l1.max_size()<<"\n";

		}
		else if (num == 3) {
			cout << "length of link list is\t" << l1.get_length() << "\n";
		}

		else if (num == 5) {
			cout << "delte list\n";
			l1.~list();
		}
		else if (num == 6) {
			l1.sort();
		}
		else if (num == 7) {
			if (l1.empty() == true) {
				cout << "list is empty\n";
			}
			else
				cout << "list is not empty\n";
			}
		}
	}


