#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int main(){
stack<int>s;
//cout<<"enter a binary number\n";
int y;
s.push(1);
s.push(0);
s.push(1);
s.push(0);
s.push(1);
s.push(0);
//s.push(0);
//s.push(1);
int z=0,k;
for(int i=0;i<6;i++){
	y=s.top();
	k=	1;
	for(int j=0;j<i;j++){
		k*=2;
	}
	z+=y*k;
	s.pop();
}
cout<<z;	
	
}
