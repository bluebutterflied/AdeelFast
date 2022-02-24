//CREATING GRAPHS USING LISTS
#include<iostream>
#include<list>
#include<fstream>
#include<queue>
using namespace std;
struct data{
	int value;
	int weight;
};
class graph{
	private:
		list<data>*array;
		int graph_size;
		void dft(int,bool[]);
		public:
			graph(){
				array=NULL;
			}
			void create_graph();
			void print();
			void dft_at_vertex(int index);
			void full_dft();
			void bft();
};
void graph::create_graph(){
	ifstream read;
	data d1;
	int vertex,adjacent_vertex;
	read.open("temp.txt");
	read>>graph_size;
	
	array=new list<data>[graph_size];
	for(int i=0;i<graph_size;i++){
	read>>vertex;
	read>>d1.value;
	read>>d1.weight;
		while(d1.value!=999){
			array[vertex].push_back(d1);
			read>>d1.value;
			if(d1.value!=999){
			
			read>>d1.weight;
	}
		}
	}
	read.close();
}
void graph::print(){
	list<data>::iterator x;
	for(int i=0;i<graph_size;i++){cout<<"AT index "<<i<<" nodes are ";
		for(x=array[i].begin();x!=array[i].end();x++){
			data w=*x;
			cout<<" value "<<w.value<<" weight "<<w.weight;
		}
		cout<<"\n";
	}
}
void graph::dft_at_vertex(int vertex){
	bool *visited;
	visited=new bool[graph_size];
	for(int i=0;i<graph_size;i++){
		visited[i]=false;
	}
	if(visited[vertex]==false){
		dft(vertex,visited);
	}
	delete []visited;
};
void graph::full_dft(){
	bool *visited;
	visited=new bool[graph_size];
	for(int i=0;i<graph_size;i++){
		visited[i]=false;
	}
	
	for(int index=0;index<graph_size;index++){
		if(visited[index]==false){
			dft(index,visited);
		}
	}
}
void graph::dft(int vertex,bool visited[]){
visited[vertex]=true;
cout<<vertex<<" ";
list<data>::iterator x;
for(x=array[vertex].begin();x!=array[vertex].end();x++){
	data w=*x;
	if(visited[w.value]==false){
	dft(w.value,visited);
	
	}
}	
}
void graph::bft(){
	bool *visited;
	visited=new bool[graph_size];
	queue<int>Q;
	for(int i=0;i<graph_size;i++){
		visited[i]=false;
	}
	list<data>::iterator x;
	for(int i=0;i<graph_size;i++){
		if(visited[i]==false){
			Q.push(i);
		cout<<" "<<i;
	visited[i]=true;
		
		while(!Q.empty()){
			int y=Q.front();
			Q.pop();
			for(x=array[y].begin();x!=array[y].end();x++){
				data w=*x;
				if(visited[w.value]==false){
					Q.push(w.value);
					visited[w.value]=true;
					cout<<" "<<w.value<<" ";
				}
			}
		}
	}
}
}
int main(){
graph g1;
g1.create_graph();
g1.print();
g1.dft_at_vertex(0);
cout<<"\n";g1.bft();
}
