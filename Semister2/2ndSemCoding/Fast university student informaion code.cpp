#include<iostream>
#include<fstream>
struct student{
char name[50];
char rollno[50];
float gpa;
char department[50];	
	
};
struct roll{
char rollno[];	
};
struct late{
char name[50];
char rollno[50];
float gpa;
char department[50];	
	
};
void display(student s[9]);
void search(student s[9],roll r);
void sort(student s[9]);
void admission(student s[9],late l[],int&);
using namespace std;
int main()
{
int x;	
	
student s[10];	
roll r;
ifstream show;
show.open("Lab_4_Students_data_2021.txt");

for(int i=0;i<=8;i++)
{

show>>s[i].name;
show>>s[i].rollno;
show>>s[i].department;
show>>s[i].gpa;

}
display(s);
search(s,r);
sort (s);
cout<<"enter the no of late admission students "<<endl;
cin>>x;
late l[x];

admission(s,l,x);
}
void display(student s[9])
{
for(int i=0;i<=8;i++)
{
cout<<s[i].name<<" "<<s[i].rollno<<" "<<s[i].department<<" "<<s[i].gpa<<endl;
}
cout<<endl<<endl<<endl;
}
void search(student s[9],roll r)
{
int z=0,k=0;
cout<<"enter roll no"<<endl<<endl;;
cin>>r.rollno;
cout<<endl;
for(int i=0;i<=8;i++)
{
	
for(int y=0;r.rollno[y]!='\0';y++)
{
k++;
if(r.rollno[y]==s[i].rollno[y])
{
z++;
}
}
if(z==k)

{
cout<<"data of roll no entered is"<<endl<<endl<<endl;
cout<<s[i].name<<" "<<s[i].rollno<<" "<<s[i].department<<" "<<s[i].gpa<<endl;
break;
}
z=0,k=0;

}
if(z==0)
cout<<"wrong rollno"<<endl;

}
void sort(student s[9])
{
for(int z=0;z<=5;z++)
{

for(int i=0;i<=8;i++)
{
if(s[i].gpa<s[i+1].gpa)
{
swap(s[i],s[i+1]);
}
}
}

cout<<endl<<endl<<endl;
cout<<"sort data is"<<endl<<endl;
for(int y=0;y<=8;y++)
{
cout<<s[y].name<<" "<<s[y].rollno<<" "<<s[y].department<<" "<<s[y].gpa<<endl;
}

cout<<endl<<endl<<endl;
}

void admission(student s[9],late l[9],int &x)
{

for(int i=0;i!=x;i++)
{

cout<<"enter late admission student name"<<endl;
cin>>l[i].name;
cout<<"enter late admission student rollno"<<endl;
cin>>l[i].rollno ;
cout<<"enter late admission student department"<<endl;
cin>>l[i].department;
cout<<"enter late admission student gpa "<<endl;
cin>>l[i].gpa;
}
ofstream write;
write.open("Lab_4_Students_data_2021.txt");
for(int k=0;k<=8;k++)
{

write<<s[k].name;
write<<s[k].rollno;
write<<s[k].department;
write<<s[k].gpa<<endl;

}

for(int y=0;y!=x;y++)
{

write<<l[y].name;
write<<l[y].rollno;
write<<l[y].department;
write<<l[y].gpa;
}
}















