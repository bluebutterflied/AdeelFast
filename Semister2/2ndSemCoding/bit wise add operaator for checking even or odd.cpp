#include<iostream>

#include<bitset>
using namespace std;
int main()
{
int x;
cout<<"enter x"<<endl;
cin>>x;
int a=1;
cout<< bitset<16>(a)<<endl;
cout<<bitset<16>(x)<<endl;
if((a&x)==1)
{

cout<<"number is odd"<<endl;
}
else
cout<<"number is even"<<endl;
return 0;
}


