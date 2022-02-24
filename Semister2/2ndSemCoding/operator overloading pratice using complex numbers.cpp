#include<iostream>
using namespace std;
class complex_number{
	private:
		float real;
		float img;
		public:
			void input(){
				cout<<"enter the real part "<<endl;
				cin>>real;
				cout<<"enter the img part "<<endl;
				cin>>img;
			}
			complex_number operator+(complex_number d){
			  complex_number temp;
				
				temp.real=real+d.real;
				real=temp.real;
			temp.img;
				temp.img=img+d.img;
				img=temp.img;
			return temp;
			}
		
	void display(){
		cout<<"img part is "<<endl<<img<<endl;
		cout<<"real part is "<<endl<<real;
	
	}	
};

int main(){
	
	complex_number c1,c2,c3;
	c1.input();
	c2.input();
	c3=c1+c2;
    c3.display();
	
}



