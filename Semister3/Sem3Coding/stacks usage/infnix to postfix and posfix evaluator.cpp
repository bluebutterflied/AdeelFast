#include<iostream>
//#include<stack>
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
void evaluate_operator(char ,string,stack&,bool&);
void evaluate_expression(string,stack&);
void infix_to_postfix(string infx,string &pofx,stack&s2);
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
int precedence(char str){
	if(str=='+'||str=='-'){
		return 1;
	}
	else if(str=='*'||str=='/'){
        return 2;
}
else if(str=='^'){
	return 3;
}
else 
    return -1;
}
template<class datatype>
void stack<datatype>::infix_to_postfix(string infx,string &pofx,stack&s2){
	int x=0;
	for(int i=0;i<infx.length();i++){
	
	if(isdigit(infx[i])){
		pofx+=infx[i];
	
	}
	else if(infx[i]=='('){
		s2.push(infx[i]);
	
	}
	else if(infx[i]==')'){
		while((s2.top()!='(')){
			char temp;	
temp=s2.top();

			pofx+=temp;
			s2.pop();
			
		}
		if(s2.top()=='('){
			s2.pop();
		}	
	}
	else{
	
	 if(infx[i]=='+'||infx[i]=='-'||infx[i]=='/'||infx[i]=='*'){
       	
       	if(s2.empty()){
       		s2.push(infx[i]);
		   }
		else if(precedence(infx[i])>=precedence(s2.top())){
			s2.push(infx[i]);
		}
		else 
		{
		while((!s2.empty())&&(precedence(infx[i])<=precedence(s2.top()))){
		
		char temp;
		temp=s2.top();
		pofx+=s2.top();
		s2.pop();
	}
	s2.push(infx[i]);
}

		}
	}
	
		
	}
	while(!s2.empty()){
			pofx+=s2.top();
			s2.pop();
		}
		cout<<pofx;
}

template<class datatype>
void stack<datatype>::evaluate_expression(string str,stack &s1){
	int x;bool isOK;
	for(int i=0;i<str.length();i++){
	//	cout<<"at outer loop value of is is"<<i<<"\t";
		if(isdigit(str[i])){
		x=str[i]-'0';	
			for(int z=i+1;z<str.length();z++){
				
				if(isdigit(str[z])){
					x*=10;
					x+=str[z]-'0';
					i++;
				//	cout<<"\ninside loop value of i is"<<i<<"\n";
			}
				else if(!isdigit(str[z])){
				s1.push(x);
					break;
					
				}
			}
		}
		
		else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){
			char a;
			a=str[i];
			s1.evaluate_operator(a,str,s1,isOK);
		}
		else if(str[i]==' '){
			
			i=i;
			
		}

	}
	
}
template<class datatype>
void stack<datatype>::evaluate_operator(char a,string str,stack &s1,bool &isOK){
	int x,y,z;
	switch(a){
		case('+'):
			if(s1.empty()){
				
			}else {
		x=s1.top();
		
		s1.pop();
		if(s1.empty()){
			
		}else{
		
		y=s1.top();
		s1.pop();
			z=y+x;
			s1.push(z);
		
	}
	
}
break;
	case('-'):
			if(s1.empty()){
				
			}else {
		x=s1.top();
		
		s1.pop();
		if(s1.empty()){
			
		}else{
		
		y=s1.top();
		s1.pop();
			z=y-x;
			s1.push(z);
	}
	
}
break;

	case('*'):
			if(s1.empty()){
				
			}else {
		x=s1.top();
		
		s1.pop();
		if(s1.empty()){
			
		}else{
		
		y=s1.top();
		s1.pop();
			z=y*x;
			s1.push(z);
			
	}
	break;
}

	case('/'):
			if(s1.empty()){
				
				break;
			}else {
		x=s1.top();
		
		s1.pop();
		if(s1.empty()){
		
			break;
		}else{
		
		y=s1.top();
		s1.pop();
			z=y/x;
			s1.push(z);
		
			
	}
	
}
break;
}

}
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

	return 1;
}
else{
		
return 0;
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
	string str,infix,postfix;
	//cout<<"enter the posfix expression\n";
//	getline(cin,str);
//	stack<int>s1;
	stack<int>s2;
	//s1.evaluate_expression(str,s1);
//	cout<<s1.top();
cout<<"enter infix expression\n";
cin>>infix;
s2.infix_to_postfix(infix,postfix,s2);
}
