#include<iostream>
using namespace std;
void check_parity(int x);
int main(){
	int x;
	cout<<"enter a number;\n";
cin>>x;
check_parity(x);
}
void check_parity(int x){
	int arr[16],z,mask=1;
	for(int i=0;x!=0;i++){
		arr[i]=x%2;
		x=x/2;
		z++;
	}
		//for(int i=0;i<z;i++){
//cout<<arr[i];
//}

int arrb[16],y=0;
for(int i=(z-1);i>=0;i--){
	arrb[y]=arr[i];
	y++;
}
y=0;
for(int i=0;i<z;i++){
	if((mask&arrb[i])==1){
y++;		
	}

}
cout<<y;
}

