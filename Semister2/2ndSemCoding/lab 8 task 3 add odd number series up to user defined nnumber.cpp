#include<iostream>
using namespace std;
int add(int n);
int add(int n ){
	
if (n<1)
return 0;

if (n>=1&&n%2==1)

return n+add(n-1);	
else
add(n-1);


}


int main()
{
	int x;
cout<<"enter a number"<<endl;
cin>>x;
cout<<add(x);



}
