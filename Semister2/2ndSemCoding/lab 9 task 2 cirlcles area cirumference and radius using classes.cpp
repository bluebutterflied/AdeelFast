#include<iostream>
using namespace std;
class circle{
	 private:
	 float radius;
	 float area;
	 float circumference;
	 char max[50];
     public:
     	circle();
     	float set_value(float radius,char *max);
         void get_value();


};
circle::circle(){
	 radius=0;
	 area=0;
	 circumference=0;

}
float circle::set_value( float r,char *m){
	 
	 
	 radius=r;
	
	 area=(3.14*(r*r));
     circumference=2*3.14*r;
    for(int i=0;i<50;i++){
    	
    	max[i]=m[i];
    	
	}
}

void circle::get_value(){
	
	 cout<<"radius of first circle is ="<<radius<<endl;
	 cout<<"Area of the that circle is ="<<area<<endl;
	 cout<<"Circumference of that circle is"<<circumference<<endl;
	 cout<<max;
	 	
	 	
	 	
	 }

int main(){
	 
	 float r1,r2,r3;
	 
	 cout<<"enter the value of radius of first circle"<<endl;
	 cin>>r1;
	 cout<<"enter the value of second of first circle"<<endl;
	 cin>>r2;
	 cout<<"enter the value of third of first circle"<<endl;
	 cin>>r3;
	 circle c1,c2,c3;
	 if(r1>r2&&r1>r3){
	 	
	 char m[50]="first circle has maximum area";		
	 	c1.set_value(r1,m);
	 	c2.set_value(r2,m);
	 	c3.set_value(r3,m);
	 }
	 	if(r2>r3&&r2>r1){
	 	char m[50]="second circle has largest area";
	     c1.set_value(r1,m);
	 	c2.set_value(r2,m);
	 	c3.set_value(r3,m);
	 }
	 
	 if(r3>r2&&r3>r1){
	 	char m[50]="third circle has largest area";
	     c1.set_value(r1,m);
	 	c2.set_value(r2,m);
	 	c3.set_value(r3,m);
	 }
	 
	 
	 
	 /*circle c1,c2,c3;
	 c1.set_value(r1,m);
	 c2.set_value(r2,m);
     c3.set_value(r3,m);
     */
     c1.get_value();
     c2.get_value();
     c3.get_value();



}

