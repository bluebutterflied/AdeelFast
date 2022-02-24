#include<iostream>
#include<bitset>
using namespace std;
void bitwiseoperator(int x,int y);
int main(){
	int x,y;
	cout<<"enter two numbers\n";
	//cin>>x;
	cin>>y;
	bitwiseoperator( x,y);
}
void bitwiseoperator(int x,int y){
	int mask=1;
	cout<<bitset<4>(y)<<endl;
		mask=mask<<2;
				cout<<bitset<4>(mask)<<endl; 

		cout<<"mask&b is\t"<<bitset<4>(mask|y); 

}
