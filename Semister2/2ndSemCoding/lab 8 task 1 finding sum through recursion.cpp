#include<iostream>
using namespace std;

int sum(int n);
int sum(int n)
{
	if(n>0)
return n%10+sum(n/10);
}
int main()
{
int a;
cout<<"enter a number"<<endl;
cin>>a;
cout<<"the sum is "<<sum(a);


}

