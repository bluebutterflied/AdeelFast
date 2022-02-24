#include<iostream>
using namespace std;
struct nodetype{
	float info;
	nodetype *link;
};
class link_list{
	public:
		bool operator==(link_list l3);
		void Append(float);
		void Display();
		void Add_At_Front(float);
		void copy_list(link_list&);
		void destroy_list();
		float get_sum();
		float get_average();
		void get_min_max_val();
		int get_length(){
			return count;
		}
		~link_list();
	link_list(link_list &);
	void Add_Specific_Node(float,int);
	void delete_node(int);
		link_list(){first=NULL;
		count=0;}
		
		private:
			nodetype *first,*last;
			int count;
};
link_list::~link_list(){
	destroy_list();
}
void link_list::destroy_list(){

	nodetype* temp;
	while(first!=NULL){
		temp=first;
		first=first->link;
		delete temp;
		count=0;
	}
}
link_list::link_list(link_list& l1){	
	
	copy_list(l1);

}
void link_list::copy_list(link_list &l1){
nodetype* current,*newnode;
if(first!=NULL){
	destroy_list();
}
if(l1.first==NULL){
	first=NULL;
	last=NULL;
	count=0;
}
	else{
		first=new nodetype;
		current=l1.first;
		count=0;
		first->info=current->info;
		first->link=NULL;
		last=first;
		current=current->link;
		while(current!=NULL){
			newnode=new nodetype;
			newnode->info=current->info;
			newnode->link=NULL;
			last->link=newnode;
			last=newnode;
			current=current->link;
		}
	}

}
bool link_list::operator==(link_list l3){
	
	nodetype* temp1,*temp2;

	temp1=first;
	temp2=l3.first;
	int temp=0;
	if(count==l3.count){
		while(temp1!=NULL){
		if(temp1->info==temp2->info){
			temp++;
			
			}	
			temp2=temp2->link;
			temp1=temp1->link;
		}
			
		}
		if(temp==count){
			return true;
	}
	else 
	return false;
	
}

void link_list::Append(float x){
	nodetype *newnode;
	newnode=new nodetype;
	newnode->info=x;
	newnode->link=NULL;
	if(first==NULL){
	first=newnode;
	last=newnode;
	count++;
	}
	else{
		last->link=newnode;
		last=newnode;
	count++;
	}
}
void link_list::Add_At_Front(float x){
	nodetype *newnode,*current;
	newnode=new nodetype;
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
void link_list::delete_node(int x){
	nodetype* p,*q;
	p=first;
if(x==1){
	first=p->link;
	delete p;
	count--;
}
else{

	for(int i=2;i<x;i++){
		p=p->link;
	}
	q=p->link;
	p->link=q->link;
	delete q;
	count--;
}
}
void link_list::Add_Specific_Node(float x,int y){
	nodetype* current,*newnode;
	newnode=new nodetype;
	current=first;
newnode->info=x;
newnode->link=NULL;
	if(y==1){
		newnode->link=first;
		first=newnode;
		count++;
	}
	else{
	
	for(int i=2;i<y;i++){
		current=current->link;
	}
	newnode->link=current->link;
	current->link=newnode;
count++;
}
}
void link_list::Display(){
	nodetype* current;
	current=first;
	while(current!=NULL){
		cout<<current->info<<" - ";
		current=current->link;
	}
	cout<<"\n";
	
}
void link_list::get_min_max_val(){
	nodetype *temp1;
	temp1=first;
	int temp,temp2;
	while(temp1!=NULL){
		if(temp<temp1->info){
			temp=temp1->info;
		}
		if(temp2>temp1->info){
			temp2=temp1->info;
		}
		temp1=temp1->link;
	}
	cout<<"maximum value of list is\t"<<temp<<"\n"<<"minimum value of list is\t"<<temp2<<"\n";
	
	
}
float link_list::get_sum(){
	nodetype* temp;
	float x;
	temp=first;
	while(temp!=NULL){
		x+=temp->info;
		temp=temp->link;
	}
	return x;
}

float link_list::get_average(){
	nodetype* temp;
	float x;
	temp=first;
	while(temp!=NULL){
		x+=temp->info;
		temp=temp->link;
	}
	x/=2;
	return x;
}

int main(){
	int temp;
temp=100;
link_list l2;
l2.Append(10);
l2.Append(20);
l2.Append(30);
l2.Append(40);
l2.Append(50);
link_list l1=l2;
while(temp!=0){
cout<<"press 1 to append data\n";
cout<<"press 2 to add at front\n";
cout<<"press 3 to delete node\n";
cout<<"press 4 to add specific node\n";
cout<<"press 5 to display list\n";
cout<<"press 6 to get sum of list nodes\n";
cout<<"press 7 to get average of list nodes\n";
cout<<"press 8 to get length of list\n";
cout<<"press 9 to get maximum and minimum value\n";
cout<<"press 10 to check list are equal or not\n";
cout<<"press 11 to copy list\n";
cout<<"press 12 to delete list\n";
cin>>temp;
int size,pos;float num;

if(temp==1){

	cout<<"enter the number of nodes u want to append in link list\n";
	cin>>size;	
	for(int i=1;i<=size;i++){
cout<<"enter the "<<i<<" element of link list\n";
cin>>num;		
	l1.Append(num);
}

}
else if(temp==2){

	cout<<"enter the number of nodes u want to Add At Front in link list\n";
	cin>>size;
		for(int i=1;i<=size;i++){
cout<<"enter the "<<i<<" element of link list\n";
cin>>num;		
	l1.Add_At_Front(num);
}
}
else if(temp==3){

cout<<"enter the postion of node u want to delete\n";
float num;
cin>>pos;
l1.delete_node(pos);
}
else if(temp==4){

cout<<"enter the postion of node u want to add\n";
cin>>pos;
cout<<"enter the info field of node\n";
cin>>num;
l1.Add_Specific_Node(num, pos);
}
else if(temp==5){
cout<<"list 1 is\t";l1.Display();cout<<"\n";
cout<<"list 2 is\t";l2.Display();cout<<"\n";
}

else if(temp==6){
	float x;
	x=l1.get_sum();
	cout<<"sum of link list elements is\n";
	cout<<x<<"\n";
}
else if(temp==7){
	float x;
	x=l1.get_average();
	cout<<x<<"\n";
}

else if(temp==8){
	int x;
	x=l1.get_length();
	cout<<x<<"\n";
}
else if(temp==10){
if(l1==l2){
	cout<<cout<<"lists are equal\n";
	
}
else cout<<"lists are not equal\n";
}
else if(temp==11){
l2.copy_list(l1);
}
else if(temp==12){
	l1.destroy_list();
	
}
else if(temp==9){
l1.get_min_max_val();	
}

}
}
