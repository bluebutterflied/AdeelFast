#include<iostream>
using namespace std;
int main()
{
int x,y,z;
cout<<"enter first integer"<<endl;
cin>>x;
cout<<"enter second integer"<<endl;
cin>>z;
x=x^z;
z=x^z;
x=x^z;
cout<<"first integer is"<<x<<endl;
cout<<"second integer is"<<z<<endl;
}
