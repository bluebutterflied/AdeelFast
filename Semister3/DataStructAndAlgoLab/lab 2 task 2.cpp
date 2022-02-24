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
	cout<<temp->info;
	temp=temp->link;
}
cout<<"\n";
	
}
int main(){

	stack<int> s;
	//s.empty();
	string str="231*+9-";
	int j,k,l,m;
for(int i=0;i<sizeof(str);i++){
	
	if(isdigit(str[i])){
		s.push(str[i]-'0');
	}
	
	else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||	str[i]=='/'){
		j=s.top();
		s.pop();
		k=s.top();
		s.pop();
	
		switch(str[i]){
		
			case('+'):
			 l=k+j; 
			break;
			 case('-'):
			  l=k-j;
			  
			  break;
			 	case('*'):
			 	 l=k*j;	
			 	break;
	
	}
	s.push(l);
	}	
}
cout<<l;
}


