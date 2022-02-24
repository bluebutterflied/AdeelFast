#include<iostream>
using namespace std;
int factorial(int n);
int factorial(int n)
{
	if(n>1)
return n*factorial(n-1);
else
return 1;


}
int main()
{
int a;
cout<<"enter a number"<<endl;
cin>>a;
cout<<"factorial of "<<a<<" is "<<factorial(a);
}

