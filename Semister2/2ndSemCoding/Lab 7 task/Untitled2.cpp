#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
struct seat_reservation{
	char seat_no;
	char occupancy[4];
};

void print(seat_reservation[]);
void update_plan(seat_reservation[]);
int main(){
seat_reservation s[7];
ofstream write;
write.open("temp.txt");
write<<1<<" "<<'X'<<" "<<'B'<<" "<<'C'<<" "<<'D'<<endl;	
write<<2<<" "<<'A'<<" "<<'X'<<" "<<'C'<<" "<<'D'<<endl;	
write<<3<<" "<<'A'<<" "<<'B'<<" "<<'C'<<" "<<'D'<<endl;
write<<4<<" "<<'X'<<" "<<'B'<<" "<<'X'<<" "<<'D'<<endl;	
write<<5<<" "<<'X'<<" "<<'B'<<" "<<'C'<<" "<<'D'<<endl;	
write<<6<<" "<<'X'<<" "<<'B'<<" "<<'C'<<" "<<'D'<<endl;	
write<<7<<" "<<'X'<<" "<<'B'<<" "<<'C'<<" "<<'D'<<endl;			
write.close();
ifstream read;
read.open("temp.txt");
int temp,y=0;
for(int i=0;i<7;i++){

read>>s[i].seat_no;

for(int i=0;i<4;i++){
	read>>s[y].occupancy[i];

}
y++;
}

read.close();
print(s);
update_plan(s);
}
void print(seat_reservation s[]){
	int y=0;
	for(int i=0;i<7;i++){

cout<<s[i].seat_no<<" ";

for(int i=0;i<4;i++){
	cout<<s[y].occupancy[i]<<" ";
}
y++;
cout<<"\n";
}
}

void update_plan(seat_reservation s[])
{
char x, y;

cout<<"press 1 to reseverse seat\n";
cin>>x;
if(x=1){
cout<<"enter seat no you want to reserve\n";
char j,z;
cout<<"enter a number and capital character respecively\n";
cin>>j>>z;	
	for(int i=0;i<7;i++){
		if(j==s[i].seat_no){
		y=s[i].seat_no;	
		
		}
	}
for()
}

}



