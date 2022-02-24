#include<iostream>
using namespace std;
int series(int,int,int,int,int,int&);

int main(){
	int x;
	cout<<"enter a number"<<endl;
	cin>>x;
	int n=1,t1=0,t2=1,nextterm;
	int k=2;
	series(n,x,t1,t2,nextterm,k);
	
	
	if(k=2&&k!=1){
	
	cout<<"number not in series";
} 
}
	   int series(int n,int x,int t1,int t2,int nextterm,int &k){
	   	if(n<1){
	   		return 0;
		   }
		   
	   	if(n>=1&&nextterm<x){
	   		nextterm=t1+t2;
	   		t1=t2;
	   		t2=nextterm;
	   		n++;
	   		
	   		if(x==nextterm)
	   		{
	   			cout<<"number is in series";
	   			k=1;
			 }
			 
			 
			 
	   		return series (n,x,t1,t2,nextterm,k);
	   		
		   }
	   	
	   	
	   	
	   	
	   }
	   	
	   	
	   	
	   	
	   	
	

	

