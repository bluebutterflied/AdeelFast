#include<iostream>
using namespace std;
int main()
{
	int *p;
 p=new int;
int *p1;
*p=100;
p1=p;
*p1=20;
*p=35;
cout<<*p1<<endl;
 p=new int;
*p=100;
cout<<*p;
delete p;
}

