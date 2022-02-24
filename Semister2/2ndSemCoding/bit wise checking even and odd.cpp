#include<iostream>
#include<bitset>
using namespace std;
bool number_checker(int x);
int main(){
	int x;
	cout<<"enter a number\n";
	cin>>x;
	int k;
	k=number_checker(x);
	if(k==1){
		cout<<"number is even\t";
	}
	else if(k==0){
		cout<<"number is odd";
	}
	
}
bool number_checker(int x){
	int n=1;
	int k;
if((x&n)==0){

	return true;
	
}
	else {
		return false;
	}
}

