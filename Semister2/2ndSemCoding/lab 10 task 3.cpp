#include<iostream>
using namespace std;
class person{
	private:
		string name;
		string nationality;
		string birth;
	public:
		void setvalue1();
		void getvalue1();
};
void person::setvalue1(){
	name="Adeel";
	nationality="Pakistan";
	birth="17_oct_2002";	
}
void person::getvalue1(){
	cout<<name<<endl;
	cout<<nationality<<endl;
	cout<<birth<<endl<<endl;

}

class student:public person{
	string dog;
	float gpa;
   public:
   void setvalue();
   void getvalue();
};
void student::setvalue(){
	
	dog="31-12-2004";
	gpa=3.06;
	
}
void student::getvalue(){
	
	cout<<dog<<endl;
	cout<<gpa<<endl;
	
}
int main(){
	person p;
	p.setvalue1();
	p.getvalue1();
    student s;
    
	s.setvalue();	
    s.getvalue();
	s.setvalue1();
	s.getvalue1();
}

