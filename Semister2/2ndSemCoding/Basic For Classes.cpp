#include<iostream>
using namespace std;
class employee{
	 private:
	 int salary1,salary2,salary3;
	 public:
	 	void setdata(int s1,int s2,int s3);
	     void getdata();
};
void employee::setdata(int s1,int s2,int s3){
	 salary1=s1;
	 salary2=s2;
	 salary3=s3;
}
void employee::getdata(){
	
	 cout<<"value of salary1"<<" "<<salary1<<endl;
	 cout<<"value of salary2"<<" "<<salary2<<endl;
	 cout<<"value of salary3"<<" "<<salary3<<endl;
	
}
int main(){
	 employee em;
	 int a,b,c;
	 cout<<"enter value of s1"<<endl;
	 cin>>a;
	 cout<<"enter value of s2"<<endl;
	 cin>>b;
	 cout<<"enter value of s3"<<endl;
	 cin>>c;
	 em.setdata(a,b,c);
	 em.getdata();
     return 0;
}
