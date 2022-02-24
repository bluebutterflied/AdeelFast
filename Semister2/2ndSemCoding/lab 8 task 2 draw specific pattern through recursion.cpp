#include<iostream>
using namespace std;
int pattern(int n);
int pattern1(int n);

int main()
{
int n=5;
//pattern(n);
pattern1(n);
}
int pattern(int n){
	
if(n<1)
return 0;
if(n>=1)
cout<<"*";
return pattern(n-1);		
	
}
int pattern1(int n){

if(n<1)
return 0;
if(n>=1)
{
	pattern(n);	
	cout<<endl;
return pattern1(n-1);	
	
	
	}	
	
	
	
}
