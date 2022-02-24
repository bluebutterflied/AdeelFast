#include<iostream>
#include<bitset>
using namespace std;
int main()
{
int x,y,z=0;
cout<<"enter value of x"<<endl;
cin>>x;
cout<<bitset<16>(x)<<endl;
cout<<"enter value of y"<<endl;
cin>>y;
cout<<bitset<16>(y)<<endl;
z=z|x;
z=z<<16;
z=z|y;
cout<<bitset<32>(z);
}


