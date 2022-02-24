#include<iostream>
using namespace std;
template<class datatype>
class stack{
struct node_type{
	datatype info;
	node_type *link;
};
public:
stack(){
	first=NULL;
	count=0;
}
void print();
bool empty();
int size();
void push(datatype);
void pop();
datatype top();
private:
	node_type *first,*last;
	int count;
};
template<class datatype>
int stack<datatype>::size(){
	return count;
}
template<class datatype>
datatype stack<datatype>::top(){
	return first->info;
}
template<class datatype>
bool stack<datatype>::empty(){
datatype x;
if(first==NULL){
	cout<<"stack is empty\n";
	return true;
}
else{
	cout<<"stack is not empty\n";	
return false;
}
}

template<class datatype>
void stack<datatype>::push(datatype x){
	node_type *newnode;
	newnode=new node_type;
	newnode->info=x;
	newnode->link=NULL;
	if(first==NULL){
		first=newnode;
		last=newnode;
		count++;
	}
	else{
		newnode->link=first;
		
		first=newnode;
		count++;
		
	}
	
}

template<class datatype>

void stack<datatype>::pop(){
	node_type *p;
	p=first;
	first=first->link;
	delete p;
	count--;
	
} 
template<class datatype>
void stack<datatype>::print(){
node_type*temp;
temp=first;
while (temp!=NULL){
	cout<<temp->info<<" - " ;
	temp=temp->link;
}
cout<<"\n";
	
}
int main(){

	stack<int> s;
	s.empty();
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
s.print();
	cout<<"top of tack is\t"<<s.top()<<"\n";
s.pop();
cout<<"after first pop top of stack is\t"<<s.top()<<"\n";
cout<<"size of stack is\t"<<s.size()<<"\n";

}


