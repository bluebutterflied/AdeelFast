#include<iostream>
using namespace std;
template<class datatype>
struct nodetype {
	datatype info;
	nodetype<datatype>* link;
};
template<class datatype>
class stacks {
private:
	nodetype<datatype>* stacktop;
public:
	stacks() {
		stacktop = NULL;
	}
	bool isEmpty();
	stacks(stacks &otherstack);
	~stacks();
	void delete_stack();
	void copy_stack(stacks&);
	datatype top();
	void pop();
	void push(datatype);
};
template<class datatype>
void stacks<datatype>::copy_stack(stacks &s) {
	nodetype<datatype>* current, * last, *newnode;
	stacktop = NULL;
	last = NULL;
	current = s.stacktop;
	stacktop = new nodetype<datatype>;
	stacktop->info = current->info;
	stacktop->link = current->link;
	current = current->link;
	last = stacktop;
	while (current != NULL) {
		newnode = new nodetype<datatype>;
		newnode->info = current->info;
		newnode->link = current->link;
		last->link = newnode;
		last = newnode;
		current = current->link;
	}

}
template<class datatype>
void stacks<datatype>::push(datatype x) {
	nodetype<datatype>* newnode;
	newnode = new nodetype<datatype>;
	newnode->info = x;
	newnode->link = NULL;
	if (stacktop == NULL) {
		stacktop = newnode;
	}
	else {
		newnode->link = stacktop;
		stacktop = newnode;
	}
}
template<class datatype>
bool stacks<datatype>::isEmpty() {
	return (stacktop == NULL);
}
template<class datatype>
datatype stacks<datatype>::top() {
	return stacktop->info;
}
template<class datatype>
void stacks<datatype>::delete_stack() {
	nodetype<datatype>* temp;
	while (stacktop != NULL) {
		temp = stacktop;
		stacktop=stacktop->link;
		delete temp;
	}
}
template<class datatype>
void stacks<datatype>::pop() {
	nodetype<datatype>* temp;
	temp = stacktop;
	stacktop = stacktop->link;
	delete temp;
}
template<class datatype>
stacks<datatype>::stacks(stacks &s) {
	copy_stack(s);
}
template<class datatype>
stacks<datatype>::~stacks() {
	delete_stack();
}
int main() {
	stacks<int> s1;
	s1.push(10);
	s1.push(20); 
	s1.push(30); 
	s1.push(40); 
	s1.push(50); 
	s1.push(60); 
	s1.push(70); 
	s1.push(80);
	stacks<int>s2 = s1;
}