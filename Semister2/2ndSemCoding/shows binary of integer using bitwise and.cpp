#include<iostream>
#include<bitset>
using namespace std;
int main()
{
int x;
unsigned y;
cout<<"enter first number"<<endl;
cin>>x;
cout<<"enter second number"<<endl;
cin>>y;
y=y<<31;
for(int i=0;i<32;i++)
{
if((x&y)==0)
cout<<"0";
else
{
cout<<"1";
}
y=y>>1;
}
}
