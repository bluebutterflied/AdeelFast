#include<iostream>
using namespace std;
void input (int *p,int&);
void grade (char *G,int&);  
struct student{
char name;	
int PFmarks;
int ITCgrades;	
	
};            
int main()
{
int*p,i;

char *G;
p=new int[i];
input(p,i);     

grade (G,i);   
cout<<*(p+1);
student *s[i];

}



void input (int *p,int &i)
{

	cout<<"enter the number of students enrolled in Pf"<<endl;
	cin>>i;
	
	int marks[i];

cout<<"enter the marks of "<<i<<" students"<<endl;
for(int y=0;y<i;y++)
{
cin>>marks[y];
	
}
p=marks;

}
void grade (char *G,int &i){	
char grade[i];

G=new char[i];
cout<<"enter the grades of "<<i<<" students"<<endl;
for(int y=0;y<i;y++)
{
cin>>grade[i];
	
}
G=grade;
	
}
	
	
	
