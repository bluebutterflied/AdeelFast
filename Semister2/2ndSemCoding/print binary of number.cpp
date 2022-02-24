#include<iostream>
using namespace std;
int main(){
	cout<<"enter a number";
	int num;
	cin>>num;
	int mask=1;
	mask=mask<<30;
	for(int i=0;i<31;i++){
		if((mask&num)!=0)
			cout<<"1";
			else 
			cout<< "0";
		mask=mask>>1;
	}
	
	
}
