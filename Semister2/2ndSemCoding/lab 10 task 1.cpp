#include<iostream>
#include<cstring>
using namespace std;
class doctor
{
  private:
     char name[40]; 
     char specialization[40];
     int doctor_ID;
  public:
      Doctor(char *,char *);
      void get_data();
      void set_data();
      void check_id(int x);   
};

doctor::Doctor(char *p,char *p1){
strcpy(specialization,p1);
strcpy(name,p);

}

void doctor::set_data(){

	cout<<"enter id of doctor"<<endl;
	cin>>doctor_ID;	
}
void doctor::get_data(){
	cout<<"doctors data is "<<endl;;
	cout<<"name is "<<name<<endl;
	cout<<"specialization is "<<specialization<<endl;
	cout<<"id is "<<doctor_ID<<endl;
	
}
void doctor::check_id(int x){
	
	
	if (x==doctor_ID){
		
		doctor::get_data();

	}
}

class patient
 {
private:
    char name[40];         char disease_name[40];       int doctor_ID;    int duration, age;
public:
    //patient();
    void set_data();
    void get_data();
    int give_id();
};

void patient::set_data(){
	
	cout<<"enter patient name"<<endl;
	cin>>name;
	cout<<"enter disease name"<<endl;
	cin>>disease_name;
	cout<<"enter doctor_ID"<<endl;
	cin>>doctor_ID;
	cout<<"enter duration"<<endl;
	cin>>duration;
	cout<<"enter age"<<endl;
	cin>>age;
		
}
void patient::get_data(){
	
	
	    cout<<"patient name is "<<name<<endl;
		cout<<"disease_name is "<<disease_name<<endl;
		cout<<"doctor_ID is "<<doctor_ID<<endl;
		cout<<"duration is "<<duration<<endl;
        cout<<"age "<<age<<endl;

}

int patient::give_id(){
	
	return doctor_ID;
}

int main(){
	
	doctor d[2];
	char name[40]="ali";
	char spec[40]="neurologist";
	char name2[40]="Ahmad";
	char spec2[40]="orthoptist";
    
	
	d[1].Doctor(name,spec);
	d[1].set_data();
	d[1].get_data();
    d[2].Doctor(name2,spec2);
	d[2].set_data();
	d[2].get_data();
	int x;
	patient p;
	p.set_data();
	p.get_data();
	x=p.give_id();
	d[1].check_id(x);
	d[2].check_id(x);
	}
