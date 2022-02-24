#include<iostream>
using namespace std;
int series(int,int,int);
int series1(int,int);
int main()
{
	int x,k=0;
cout<<"enter the last number of series"<<endl;
cin>>x;
int n=1;
series(x,n,k);	
series1(x,n);	
		
}
int series(int x,int n,int k)
{
	
if(x<1)
return 0;
if(x>1&&n<=x)
{
	n+=k;
	
	cout<<n;
    
return series(x-1,n+1,k+1);	
		
}
	
}

int series1(int x,int n){
	
if(n<1)
return 0;
if(n>1)
{
	
	
	
	}	
	
	
	
	
}









