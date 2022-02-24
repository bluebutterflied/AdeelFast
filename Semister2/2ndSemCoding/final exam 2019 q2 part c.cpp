#include<iostream>
using namespace std;
 char* getname();
void print_name(char*);
int main(){
	char*name=getname();
	print_name(name);
	
}
char* getname(){
	cout<<"enter a name"<<endl;
	 char name[20];
	char *p;
	cin>>name;
	p=name;
	return p;
}
void print_name(char *name)
{
	cout<<name;
}
