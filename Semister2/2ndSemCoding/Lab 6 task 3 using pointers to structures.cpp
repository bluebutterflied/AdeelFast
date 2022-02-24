#include<iostream>
using namespace std;
void input(int*p,int*x);
//void grade(char*g,int*x);
void sort(struct student*,int);
struct student{
int PF_marks;
char grades;
char name[50];	
	
	
};
int main()
{

int x,p[x];
char g[x];
student std[x];
student *pstd;
pstd=std;

input(p,&x);

cout<<"enter name of students"<<endl;
for(int i=-1;i<x;i++)
{
cin.getline(std[i].name,50);
}




for(int i=0;i<x;i++)
{
	std[i].PF_marks=p[i];
}

//grade(g,&x);
//student std[x];

//for(int i=0;i<x;i++)
//{
//	std[i].grades=g[i];
//}
//student *pstd;
//pstd=std;
sort(pstd,x);

}

void input(int*p,int*y)
{
int x;	
cout<<"enter the number of students  ";
cin>>x;
*y=x;
int*z;
z=new int[x];

cout<<"enter "<<x<<"  students marks "<<endl;

for(int i=0;i<x;i++)
{
cin>>p[i];

}

}
void grade(char*g,int*x){
char z;

 z=*x;
char*i;
i=new char[z];

cout<<"enter grades of "<<*x<<" students"<<endl;
for(int k=0;k<z;k++)
{
cin>>g[k];
}

}
void sort(struct student*pstd,int x){
int y=1;



for(int i=0;i<x;i++)
{
	
if((pstd+i)->PF_marks<(pstd+y)->PF_marks){

//cout<<(pstd+0)->PF_marks<<endl<<(pstd+1)->PF_marks;		
//swap((pstd+0)->grades,(pstd+1)->grades)	;
	swap((pstd+i)->PF_marks,(pstd+y)->PF_marks);
		swap((pstd+i)->name,(pstd+y)->name);
}
y++;
		
	}

	cout<<(pstd)->name;
	
	
	}	
	
	
