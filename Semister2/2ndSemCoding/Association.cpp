#include<iostream>
#include<cstring>
using namespace std;
class doctor {
private:
     char name[40]; 
     char specialization[40];
     int doctor_ID;
  public:
      Doctor(char *,char *);
      void get_data();
      void set_data(int);
	  bool check_id(int x);
};
doctor::Doctor(char*a,char*b){
	strcpy(name,a);
	strcpy(specialization,b);

}
void doctor::set_data(int x){
	doctor_ID=x;
}
bool doctor::check_id(int x){
	//cout<<x<<"\t"<<doctor_ID;
	if (doctor_ID==x){
		return true;
	}
	else return false;
}
void doctor::get_data(){
	cout<<name<<endl<<specialization<<endl<<doctor_ID;
}
class patient{
	char name[40];char disease_name[40];
	int doctor_ID;
	int duration ,age;
public:
    patient();
    void set_data();
    void get_data();
    int give_id();
    
    
};
patient::patient(){
	
}

void patient::set_data(){
cout<<"enter a name of patient\n";cin>>name;
cout<<"enter a age of patient\n";cin>>age;
cout<<"enter a duration of patient\n";cin>>duration;
cout<<"enter the doctor id\n";cin>>doctor_ID;

}
int patient::give_id(){
	return doctor_ID;
}
int main(){
	doctor d[2];
	patient p1;
	char arr1[40]="adeel",arr2[40]="Mbbs";
 
	d[1].Doctor(arr1,arr2);
d[1].set_data(1025);
char a1[40]="akhtar";char a2[40]="surgeon";	
d[2].Doctor(a1,a2);
d[2].set_data(1010);
p1.set_data();
int x,y;
x=p1.give_id();
cout<<x;
y=d[1].check_id(x);
int z=d[2].check_id(x);
if(y==1){
	d[1].get_data();
}
if(z==1){
	d[2].get_data();
}
}











