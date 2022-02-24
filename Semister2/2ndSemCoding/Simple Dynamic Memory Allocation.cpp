#include <iostream>
using namespace std;
int main()
{
	int i;
int *p;
cout<<"enter how many numbers you want to write"<<endl;
cin>>i;
p=new int[i];
for(int n=0;n<i;n++)
{
cout<<"enter number"<<endl;
cin>>p[n];
}
for(int n=0;n<i;n++)
{
cout<<"number entered is"<<endl;
cout<<p[n]<<endl;
}
}

