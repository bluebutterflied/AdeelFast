#include<iostream>
#include<fstream>
#include<ctime>
struct firstlines{
	char details[41];
	

};
struct data{
	
char CNIC[50];	
char temp[40];
char firstname[20];
char secondname[20];
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
		        read.close();
		        k=0;
		        read.open("Ass02-BankAccounts.txt");
		        read.seekg(42L,ios::beg);
				while(read){
				
				read>>dat[k].firstname;
				
				read>>dat[k].secondname;
				
				for(int i=0;i<3;i++)
				{
					read>>dat[i].temp;
					
					
				}
				k++;
			}
		
		
		
		
		
		       
	int x,a,b,c,y,d;
cout<<"MENU"<<endl<<"press 1 for make a transaction"<<endl<<"press 2 for view the transction"<<endl;
	cin>>x;
	if(x==1){
		cout<<"press 1 to deposit amount"<<endl<<"press 2 to withdrawl amount"<<endl;
		int y;
		cin>>y;
		d=y;
		if(y==1)
		{
			
			cout<<"enter the account id"<<endl;
			int z;
			cin>>z;
			z;
			
			for(int i=0;i<100;i++){
				
				if(z==dat[i].AccID){
					
				cout<<"Your Account ID Match "<<endl;	
				cout<<"enter the amount you want to deposit"<<endl;
				int l;
				cin>>l;
				c=l;
				a=dat[i].AccID;
			    b=dat[i].Balance+=l;
				
				break;
				 }
				
				else if(z!=dat[i].AccID&&i==99){
				cout<<"Your Account ID Doest't Match "<<endl<<"END"<<endl;
			     
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
				c=l;
				a=dat[i].AccID;
			    b=dat[i].Balance-=l;
				
				break;
				}
				else if(z!=dat[i].AccID&&i==99){
					cout<<"Your Account ID Doest't Match "<<endl<<"END"<<endl;
				
				}	
		         	
		        }
		
			
		
	}
		time_t totalsec;
	totalsec=time(NULL);
	//cout<<totalsec<<endl;
	
	tm *t;
	t=localtime(&totalsec);
int g,h,j;
	
	
	g=totalsec;
	h=t->tm_hour;
	j=t->tm_mday;
	
		
	char arr[20]="seconds are ";
	char arr1[20]=" hour is ";
	char arr2[20]=" date is ";
	char arr3[20]=" Account_ID is ";
	char arr4[20]=" Changed_Balnce is ";
	char arr5[30]=" Transaction_Amount is ";
	char arr6[30]=" Type of transtion is ";
	ofstream write;
	write.open("binaryfile.txt",ios::out|ios::binary);
	write.write((char*)arr,20);
	write.write((char*)&g,sizeof(int));
	write.write((char*)arr1,20);
	write.write((char*)&h,sizeof(int));
	write.write((char*)arr2,20);
	write.write((char*)&j,sizeof(int));
	write.write((char*)arr3,20);
    write.write((char*)&a,sizeof(int));
    write.write((char*)arr4,20);
    write.write((char*)&b,sizeof(int));
    write.write((char*)arr5,30);
    write.write((char*)&c,sizeof(int)); 
    write.write((char*)arr6,30); 
    write.write((char*)&y,sizeof(int));

write.close();
	
	
}
cout<<"press 2 for display"<<endl;
	
	cin>>x;
	 if(x==2){
	
		
		ifstream read;
		
		read.open("binaryfile.txt",ios::in|ios::binary);
		 char arr[20],arr1[20],arr2[20],arr3[20],arr4[20],arr5[30],arr6[30];
		 int g,h,j,a,b,c,y;
		read.read((char*)arr,20);
		cout<<arr;
		read.read((char*)&g,sizeof(int));
		cout<<g;
		cout<<endl;
		read.read((char*)arr1,20);
		cout<<arr1;
		read.read((char*)&h,sizeof(int));
		cout<<h;
		cout<<endl;
		read.read((char*)arr2,20);
		cout<<arr2;
		read.read((char*)&j,sizeof(int));
		cout<<j;
		cout<<endl;
			read.read((char*)arr3,20);
			cout<<arr3;
		read.read((char*)&a,sizeof(int));
		cout<<a<<endl;
		read.read((char*)arr4,20);
		cout<<arr4;
		read.read((char*)&b,sizeof(int));
		cout<<b<<endl;
		read.read((char*)arr5,30);
		cout<<arr5;
		read.read((char*)&c,sizeof(int));
	    cout<<c<<endl;
	    read.read((char*)arr6,30);
		cout<<arr6;
		read.read((char*)&y,sizeof(int));
		if(y==1){
			
			cout<<"deposit";
		}
		else{
		
		cout<<"withdraw";
	}
		read.close();
		
	}
ofstream write;
		write.open("Ass02-BankAccounts.txt");
		for(int i=0;i<5;i++)
		{
			
			write<<firstline[i].details<<" ";
			
		}
		write<<endl;
		
		for(int i=0;i<99;i++){
			
			write<<dat[i].firstname<<" "<<dat[i].secondname<<" ";
			write<<dat[i].CNIC<<" "<<dat[i].AccID<<" "<<dat[i].Balance<<endl;
		}
	}

	
