#include<iostream>
using namespace std;
struct person{
char name[50];
int accountnumber;
int balance;
};
int addamount(person p1[]);
int addamount1(person p1[]);
int main()
{
person p1[2];	
for(int i=0;i<2;i++)
{
		
cout<<"enter name"<<endl;
cin>>p1[i].name;
cout<<"enter account number"<<endl;
cin>>p1[i].accountnumber;
cout<<"enter balance"<<endl;
cin>>p1[i].balance;
}
 addamount(p1);
 addamount1(p1);
 
 cout<<"new values are"<<endl;
 for(int i=0;i<2;i++)
{
		
cout<<" name"<<endl;
cout<<p1[i].name<<endl;
cout<<" account number"<<endl;
cout<<p1[i].accountnumber<<endl;
cout<<" balance"<<endl;
cout<<p1[i].balance<<endl;
}
return 0;
}
int addamount( person p1[])
{

for(int i=0;i<2;i++)
{
if(p1[i].balance<200)
p1[i].balance+=20;
}

}
int addamount1( person p1[])
{

for(int i=0;i<2;i++)
{
if(p1[i].balance>1000)
p1[i].balance+=100;
}

}


















