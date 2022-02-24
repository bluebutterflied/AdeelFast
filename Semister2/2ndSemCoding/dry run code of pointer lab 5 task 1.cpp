#include<iostream>
using namespace std;


int main()
{   int set[5] = { 15,30,45,60,75};
     int w=10; char *ch; float *fl; double *db;
     int *ptr = &w;
     int *ptr1;char*ptr2;float*ptr3;double*ptr4;
     int i=1;
     char c='a';
     float f=3.12;
     double d=3.1234;
     db=&d;      fl=&f;
     int *pt= set;
     cout<<*ptr<<endl;
 
             for(int q=3;q<5;q++)
                 {
                      cout<<*ptr++<<endl;
                 }
      cout<<*(ptr+2)<<endl;
      cout<<*(ptr+3)<<endl;
      cout<<db<<"\t" <<fl<<endl;
      ptr1=&i;
      ptr2=&c;
      ptr3=&f;
      ptr4=&d;
      cout<<*ptr1<<*ptr2<<f<<d;
}

