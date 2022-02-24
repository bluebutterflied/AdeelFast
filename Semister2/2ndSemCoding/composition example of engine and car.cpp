#include<iostream>
#include<cstring>
using namespace std;

class Engine{
	private:
	string name;
	int cc;
	int cylinder;
	public:
		void input(){
			cout<<"enter name "<<endl;
			cin>>name;
			cout<<"enter cc "<<endl;
			cin>>cc;
			cout<<"enter cylinder"<<endl;
			cin>>cylinder;
		}
       void data(){
       	 string a;
		   a=name;
       	   int b;
		   b=cc;
		   int c;
		   c=cylinder;
		   
	   }   
       void display(){
       	
       	cout<<"cc is "<<cc<<endl;
       	cout<<"name is "<<name<<endl;
       	cout<<"cylinder is "<<cylinder<<endl;
	   }

};

class car{
	private:
	string brand;
	string model;
	int year;
	
	public:
	Engine E;	
    void input(){
    	
    	cout<<"enter brand"<<endl;
    	cin>>brand;
    	cout<<"enter model"<<endl;
    	cin>>model;
        cout<<"enter year"<<endl;
        cin>>year;
	    
		}
	void display(){
		
		cout<<"brand is "<<brand<<endl;
		cout<<"model is "<<model<<endl;
		cout<<"year is "<<year<<endl;	
        	
	}
	
};
	int main(){
		car c;
      c.input();
      c.E.input();
      c.display();
	  c.E.display();
	}
		
			
