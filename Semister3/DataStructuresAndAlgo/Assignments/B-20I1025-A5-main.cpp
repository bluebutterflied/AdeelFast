#include<iostream>
#include<fstream>
#include<list>
using namespace std;
struct data{
	int index;
	string city_name;
};
void insert_data(data d[]){
d[0].index=1;d[1].index=2;d[2].index=3;d[3].index=4;d[4].index=5;d[5].index=6;
d[6].index=7;d[7].index=8;d[8].index=9;d[9].index=10;d[10].index=11;d[11].index=12;d[12].index=13;
d[13].index=14;d[14].index=15;d[15].index=16;d[16].index=17;
d[17].index=18;d[18].index=19;d[19].index=20;
d[20].index=21;d[21].index=22;d[22].index=23;d[23].index=24;d[24].index=25;d[25].index=26;
d[26].index=27;d[27].index=28;d[28].index=29;d[29].index=30;d[30].index=31;
d[0].city_name="Islamabad";d[1].city_name="Kohala";d[2].city_name="Jhelum";d[3].city_name="Nowshera";d[4].city_name="Mansehra";
d[5].city_name="Kohat";d[6].city_name="Wazirabad";d[7].city_name="Peshawar";d[8].city_name="Kalam";d[9].city_name="Chitral";
d[10].city_name="Gilgit";d[11].city_name="Bannu";d[12].city_name="Pindi Bhattian";d[13].city_name="Faisalabad";d[14].city_name="Gujranwala";
d[15].city_name="Dera Ismail Khan";d[16].city_name="Jhang";d[17].city_name="Khanewal";d[18].city_name="Multan";d[19].city_name="Lahore";
d[20].city_name="Okara";d[21].city_name="Dera Ghazi Khan";d[22].city_name="Loralai";d[23].city_name="Jacobabad";d[24].city_name="Hyderabad";
d[25].city_name="Larkana";d[26].city_name="Bahawalpur";d[27].city_name="Gwadar";d[28].city_name="Sukkur";d[29].city_name="Quetta";
d[30].city_name="Karachi";
}
struct file_data{
		int adjacent_value;
		float weight;
	};
class graph{
	
	private:
		list<file_data>*array;
		int graph_size;
		public:
			graph(){
			array=NULL;
			}
			void read_data();
			void print(data[]);
			void dikestra(data[],string,string);
			int minimum(int[],bool[]);
};
void graph::read_data(){

file_data f;
	int vertex;
	ifstream read;
read.open("New Text Document.txt");
read>>graph_size;
array=new list<file_data>[graph_size+1];
for(int i=0;i<graph_size;i++){
read>>vertex;
read>>f.adjacent_value;
read>>f.weight;
	while(f.adjacent_value!=999){
	array[vertex].push_back(f);
	read>>f.adjacent_value;
	if(f.adjacent_value!=999){	
	read>>f.weight;
}

	}
	
}
}
int graph::minimum(int distance[],bool visited[]){
	int x=99999;int min,index=0;
	for(int i=1;i<=graph_size;i++){
		if(distance[i]<x&&visited[i]==false){
			min=distance[i];
			index=i;break;
		}
	}
	//cout<<index<<"\n";
	return index;
}
void graph::dikestra(data d[],string city1,string city2){
	int key;
	int key2;
	for(int i=0;i<graph_size;i++){
	
	if(city1==d[i].city_name){
	    key=d[i].index;

	}
	if(city2==d[i].city_name){
		key2=d[i].index;
	}
}
	int distance[graph_size+1];
	bool visited[graph_size+1];
	for(int i=0;i<=graph_size;i++){
		visited[i]=false;
		distance[i]=99999;
	}
	distance[key]=0;
for(int i=1;i<=graph_size;i++){
	int min=minimum(distance,visited);
	visited[min]=true;
	list<file_data>::iterator x;
	for(x=array[min].begin();x!=array[min].end();x++){
		file_data w=*x;
		if(visited[w.adjacent_value]==false&&distance[min]!=99999&&distance[w.adjacent_value]>=distance[min]+w.weight){	
			distance[w.adjacent_value]=w.weight+distance[min];
		}
	}
}

cout<<distance[key2]<<"km\n";
}



void graph::print(data d[]){

list<file_data>::iterator x;
	file_data f;
	for(int i=1;i<=graph_size;i++){
		cout<<"at "<<d[i-1].city_name;
		for(x=array[i].begin();x!=array[i].end();x++){
			f=*x;
			
			for(int i=0;i<graph_size;i++){
				if(f.adjacent_value==d[i].index){
					cout<<" "<<d[i].city_name;
				}
			}
	}
	cout<<"\n";
}
}

int main(){
	data d1[31];
	graph g;
	insert_data(d1);
	g.read_data();
	//g.print(d1);
	int menu=999;
	
	while(menu!=2){	
	cout<<"press 1 to show distance \npress 2 to stop\n";cin>>menu;
if(menu==1){

cin.ignore();
	cout<<"enter city name u want to start\n";
	string city1;
	getline(cin,city1);
		cout<<"enter city name u want to stop\n";
string city2;
	getline(cin,city2);
cout<<"distance between "<<city1<<" and "<<city2<<" is ";  
	g.dikestra(d1,city1,city2);

    }
    else
    break;
  }
 }
