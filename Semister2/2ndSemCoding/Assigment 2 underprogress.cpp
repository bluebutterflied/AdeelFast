#include<iostream>
#include<fstream>
struct firstlines{
	char details[41];
	
	
	
};
struct data{
	
char CNIC[50];	
char temp[40];

int AccID;		
int Balance;	
	
};
using namespace std;
int main(){
	int k=0;
	firstlines firstline[5];
	data dat[100];
	
	
     ifstream read;
     read.open("Ass02-BankAccounts.txt");
     for(int i=0;i<5;i++){
     	
     	read>>firstline[i].details;
     	
	 }
	

	read.seekg(55L,ios::beg);

		while(read){
			read>>dat[k].CNIC;
		
		  dat[k].CNIC;
		
			for(int i=0;i<4;i++)
		{
			
		read>>dat[i].temp;
			
				}
	k++;
	}
	read.close();
	k=0;
	read.open("Ass02-BankAccounts.txt");
	read.seekg(71L,ios::beg);
		while(read){
		
			read>>dat[k].AccID;
		
			for(int i=0;i<4;i++)
		{
			
		read>>dat[i].temp;
				
				}
		        k++;        
                  

}
read.close();
	k=0;
	read.open("Ass02-BankAccounts.txt");
	read.seekg(76L,ios::beg);
		while(read){
		
			read>>dat[k].Balance;
		    
			for(int i=0;i<4;i++)
		{
			
		read>>dat[i].temp;
				
				}
		        k++; 
		        
		        }
		       
	int x;
cout<<"MENU"<<endl<<"press 1 for make a transaction"<<endl<<"press 2 for view the transction"<<endl;
	cin>>x;
	if(x==1){
		cout<<"press 1 to deposit amount"<<endl<<"press 2 to withdrawl amount"<<endl;
		int y;
		cin>>y;
		if(y==1)
		{
			
			cout<<"enter the account id"<<endl;
			int z;
			cin>>z;
			
			for(int i=0;i<100;i++){
				
				if(z==dat[i].AccID){
					
				cout<<"Your Account ID Match "<<endl;	
				cout<<"enter the amount you want to deposit"<<endl;
				int l;
				cin>>l;
				dat[i].AccID;
			    dat[i].Balance+=l;
				
				break;
				 }
				
				else if(z!=dat[i].AccID&&i==99){
				cout<<"Your Account ID Doest't Match "<<endl<<"END";
			     
				}
				
				}
			
				
			
		}
			
		         else if(y=2){
		         	
		         cout<<"enter the account id"<<endl;
			int z;
			cin>>z;
			for(int i=0;i<100;i++){
				
				if(z==dat[i].AccID){
					
				cout<<"Your Account ID Match "<<endl;	
				cout<<"enter the amount you want to withdraw"<<endl;
				int l;
				cin>>l;
			    dat[i].Balance-=l;
				
				break;
				}
				else if(z!=dat[i].AccID&&i==99){
					cout<<"Your Account ID Doest't Match "<<endl<<"END";
				
				}	
		         	
		        }
		
			
		
	}
	
	ofstream write;
	write.open("binaryfile.txt",ios::out|ios::binary);
	
	
	
	
	
		
	
	
	}
	else
	cout<<" end";
}
	
	
	
	

	
	
	
	
