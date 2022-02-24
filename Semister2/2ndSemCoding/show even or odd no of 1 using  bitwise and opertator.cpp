#include<iostream>
#include<bitset>
using namespace std;
int main()
{
int x,z=0;
unsigned y;
cout<<"enter x"<<endl;
cin>>x;
cout<<"enter y"<<endl;
cin>>y;
y=y<<31;
for(int i=0;i<32;i++)
{

if((x&y)!=0)
{

z++;
}
y=y>>1;
}

if(z%2==0)
cout<<"even no of 1"<<endl;
else
cout<<"odd no of 1"<<endl;
}
