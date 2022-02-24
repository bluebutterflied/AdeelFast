#include<iostream>
using namespace std;
struct person{
char name[50];
int age;
float salary;
};
int main()
{
person p1;
cout<<"enter full name"<<endl;
cin.getline(p1.name,50);
cout<<"enter age"<<endl;
cin>>p1.age;
cout<<"enter salary"<<endl;
cin>>p1.salary;
cout<<"dispaly information"<<endl;
cout<<"name "<<" "<<p1.name<<endl;
cout<<"age "<<" "<<p1.age<<endl;
cout<<"salary "<<" "<<p1.salary<<endl;
return 0;
}
