#include<iostream>
#include<fstream>
using namespace std;
struct yearly_data{
char disciplines[50];
float value;	
};
struct total{
	float count;
};
int print(yearly_data data[]);

int main()
{
int x;	
cout<<"enter the size of array of yearly data"<<endl;
cin>>x;	
	
	total tot[18];
yearly_data data[x];
		
ifstream read;
read.open("Binary_Data.txt",ios::in|ios::binary);
for(int i=0;i<=15;i++)
{
	read.read((char*)data[i].disciplines,50);
	
	
}
int z=0;
      for(int i=0;i<=15;i++)
      {
	        cout<<(char*)(data[i].disciplines);
     
	
	           cout<<endl;
} 

             while(read)
	          {
		        for(int i=0;i<18;i++)
		         {      
			      
			      read.read((char*)&tot[i].count,sizeof(float));
			      
		        }
		      
		        z++;
		 
		
			}
			
cout<<z<<endl;
read.close();
print(data);
		                
}

int print(yearly_data data[])
{
ifstream read;	
read.open("Binary_Data.txt",ios::in|ios::binary);
for(int i=0;i<=15;i++){
	
read.read((char*)&data[i].disciplines,50);

}
for(int i=0;i<=15;i++){
 
cout<<(char*)(data[i].disciplines);
}

while(read)	
{

  for(int i=0;i<18;i++){
  	
  	read.read((char*)&data[i].value,sizeof(float));
  	
  	
  }	
	
}
read.close();
read.open("Binary_Data.txt",ios::in|ios::binary);
for(int i=0;i<=15;i++){
	
read.read((char*)&data[i].disciplines,50);

}
//while(read)	
//{

  for(int i=0;i<18;i++){
  	
  cout<<((char*)&data[i].value);
  	
  	
  }

	
	
//}	
	

	
}



