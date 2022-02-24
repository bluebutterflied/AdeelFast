#include<iostream>

using namespace std;

struct Address{
char streetno[15];
char sector[20];
char city[20];
char country[20];
		
};
struct Employee{
Address addr;
char name[50];
char id[15];
int salary;
		
};
void display(Address addr,Employee emp[]);
int main()
{
Address addr;
Employee emp[2];
display(addr,emp);
for(int i=0;i<=1;i++)
{

cout<<emp[i].name<<endl;
cout<<emp[i].id<<endl;
cout<<emp[i].salary<<endl;
cout<<emp[i].addr.streetno<<endl;
cout<<emp[i].addr.sector<<endl;
cout<<emp[i].addr.city<<endl;
cout<<emp[i].addr.country<<endl;
}


}
void display(Address addr,Employee emp[2])
{
	int i;
	for(i=0;i<=1;i++)
	{
	
cout<<"enter the name of employee"<<endl;
cin>>emp[i].name;
cout<<"enter the id of employee"<<endl;
cin>>emp[i].id;
cout<<"enter the salary of employee"<<endl;
cin>>emp[i].salary;
cout<<"enter the streetno of employee"<<endl;
cin>>emp[i].addr.streetno;
cout<<"enter the sector of employee"<<endl;
cin>>emp[i].addr.sector;
cout<<"enter the city of employee"<<endl;
cin>>emp[i].addr.city;
cout<<"enter the country of employee"<<endl;
cin>>emp[i].addr.country;
}
}
