#include<iostream>
using namespace std;
void doub(int,int);
void doub1(int&,int&);
void doub2(int *p1,int *p2);
void doub3(int ptr[]);
int main()
{
	int *p1,*p2;
	int x,y,k,o;
cout<<"enter first number"<<endl;
cin>>x;
k=x;
int n;
n=k;
cout<<"enter second number"<<endl;
cin>>y;
o=y;
int m;
m=o;
doub(x,y);
cout<<"In pass by value inside main first double value is"<<endl<<x<<endl;
cout<<"In pass by value inside main second double value is"<<endl<<y<<endl;

 doub1(x,y);
 cout<<"In pass by reference inside main first double value is"<<endl<<x<<endl;
 cout<<"In pass by reference inside main second double value is"<<endl<<y<<endl;
 
 doub2(&k,&o);
  cout<<"In pass by pointer inside main first double value is"<<endl<<x<<endl;
 cout<<"In pass by pointer inside main second double value is"<<endl<<y<<endl;
 
 int a[2]={n,m};
 
 int *ptr;
 ptr=a;
 doub3(ptr);
  cout<<"In pass by array inside main first double value is"<<endl<<ptr[0]<<endl;
   cout<<"In pass by pointer inside main second double value is"<<endl<<ptr[1]<<endl;
}
void doub(int x,int y)
{
int z,a;
x*=2;
y*=2;
cout<<"Inside pass by value fuction first double value is"<<endl<<x<<endl;
cout<<"Inside pass by value fuction second double value is"<<endl<<y<<endl;
}


void doub1(int &x,int &y)
{
int z,a;
x*=2;
y*=2;
cout<<"Inside pass by reference fuction first double value is"<<endl<<x<<endl;
cout<<"Inside pass by reference fuction second double value is"<<endl<<y<<endl;
}
void doub2(int *p1,int *p2)
{
	int z;
*p1=2*(*p1);
cout<<"Inside pass by pointer adress fuction first double value is"<<endl;
cout<<*p1<<endl;
*p2=2*(*p2);
cout<<"Inside pass by pointer adress fuction first double value is"<<endl;
cout<<*p2<<endl;

}
void doub3(int ptr)
{
ptr[0]*=2;
ptr[1]*=2;
cout<<"Inside pass by array fuction first double value is"<<endl;	
cout<<ptr[0]<<endl;
cout<<"Inside pass by array fuction second double value is"<<endl;
cout<<ptr[1]<<endl;
}










