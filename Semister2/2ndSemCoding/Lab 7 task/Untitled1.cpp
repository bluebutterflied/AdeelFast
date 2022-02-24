#include<iostream>
using namespace std;
class Engine{
	private:
		int cc;
		int power;
		int area;
	public:
		void input();
		void display();
    
};
void Engine::input(){
	cout<<"enter cc\n";
	cin>>cc;
	cout<<"enter power\n";
	cin>>power;
	cout<<"enter area\n";
	cin>>area;
}
void Engine::display(){
	cout<<"cc is\t"<<cc;
	cout<<"power is\t"<<power;
	cout<<"area is\t"<<area;
}
class car{
	private:
		char name[10];
		int model;
		char brand[10];
		public:
			void input();
			void display();
            Engine e;
};
void car::input(){
	cout<<"enter name\n";
	cin>>name;
	cout<<"enter model\n";
	cin>>model;
	cout<<"enter brand\n";
	cin>>brand;
}
void car::display(){
	cout<<"car name is\t"<<name;
	cout<<"model name is\t"<<model;
	cout<<"brand\t"<<brand;
}

int main(){
car c;

	c.input();
	c.e.input();
	c.display();
	c.e.display();

}
