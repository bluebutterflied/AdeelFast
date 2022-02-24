#include<iostream>
using namespace std;
class Student{
private :
     char  name[50];
     float gpa_semster1;
     float gpa_semster2;
     float Cgpa;

 public :
     Student ();
     Student(char *name1, float gpa1, float gpa2);
     float get_gpa1();       //accessor
     float get_gpa2();      //accessor
     void cgpa(float gpa1,float gpa2); 
};

 Student::Student (){
 	cout<<"enter first student name"<<endl;
 	cin.getline(name,50);
 	cout<<"enter first student first semester gpa"<<endl;
 	cin>>gpa_semster1;
	 cout<<"enter first student second semester gpa"<<endl;
	 cin>>gpa_semster2;
 	
 }
 float Student::get_gpa1(){
 	cout<<"first student name = "<<name<<endl;
 	cout<<"first student first semester gpa = "<<gpa_semster1<<endl;
 	 cout<<"first student second semester gpa = "<<gpa_semster2<<endl;
    Cgpa=(gpa_semster1+gpa_semster2)/2; 
    return Cgpa;
 }

 
 Student::Student(char *name1, float gpa1, float gpa2){
 	 for(int i=0;i<50;i++){
	  
     name[i]=name1[i];
 }
	
 	gpa_semster1=gpa1;
 	gpa_semster2=gpa2;

 }
 float Student::get_gpa2(){
 	
 	cout<<"second student name "<<name<<endl;
 	cout<<"second student first semester gpa = "<<gpa_semster1<<endl;
 	 cout<<"second student second semester gpa = "<<gpa_semster2<<endl; 
	  Cgpa=(gpa_semster1+gpa_semster1)/2;
	  cout<<"cgpa is of second student is"<<endl<<Cgpa<<endl;	
 }
 void Student::cgpa(float gpa1,float gpa2){
 	cout<<"cgpa is of first student is"<<endl<<get_gpa1()<<endl;
 	
 	
 }
 
 
 int main(){
 	
 	
 	 
 	Student s;
 	 
 	 float gpa1,gpa2;
 	 char name1[50];
 	cout<<"enter second student name"<<endl;
 	cin>>name1;
 	
 	cout<<"enter second student first semester gpa"<<endl;
 	cin>>gpa1;
 	cout<<"enter second student second semester gpa"<<endl;
	 cin>>gpa2;
 	 Student s1(name1,gpa1,gpa2);
	//s.get_gpa1();
 	s1.get_gpa2();
 	s.cgpa( gpa1, gpa2);
 }
 
 
 
