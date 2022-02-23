#include<iostream>
using namespace std;
class secret{
	 private:
	 string name;
	 int age;
	 int weight;
	 int height;
	 public:
	 	void print();
	 	void setname();
	 	void setage();
	 	void setweight();
	 	void setheight();
	 	string getname();
	 	int getage()const;
	 	int getweight()const;
	 	double getheight()const;
	 	secret();
	
};
secret::secret(){
	 
	 name=" ";
	 age=0;
	 weight=0;
	 height=0;
	
}
void secret::setname(){
	string name1;
	cout<<"enter the name "<<endl;
	cin>>name1;
	name=name1;
}
void secret::setheight(){
	double height1;
	cout<<"enter the height"<<endl;
	cin>>height1;
	height=height1;
	
}


void secret::setweight(){
	 int weight1;
	 cout<<"enter weight"<<endl;
	 cin>>weight1;
	 weight=weight1;
	
}
void secret::setage(){
	
	int age1;
	cout<<"enter age"<<endl;
	cin>>age1;
	age=age1;
	
}
void secret::print(){
	cout<<"name is "<<getname()<<endl;
	cout<<"weight is "<<getweight()<<endl;
	cout<<"height is "<<getheight()<<endl;
	cout<<"age is "<<getage()<<endl;
	
}
string secret::getname(){
	
	return name;
	
}
int secret::getweight()const{
	
	return weight;
}
double secret::getheight()const{
	return height;
}
int secret::getage()const{
	return age;
}

int main(){
	
secret s;
s.setname();
s.setheight();
s.setweight();
s.setage()	;
s.print();	

}



