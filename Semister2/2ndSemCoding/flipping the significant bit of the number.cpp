#include<iostream>
#include<bitset>
using namespace std;
int main(){
	cout<<"enter a number"<<endl;
	int x;
	cin>>x;
	int mask;
	mask=1;
	//mask=mask<<30;
	for(int i=0;i<31;i++){
		if((mask&x)!=0){
			mask=(mask^x);
			
		break;
		}
	mask=mask<<1;
	
	}
	cout<<mask;
	
}
