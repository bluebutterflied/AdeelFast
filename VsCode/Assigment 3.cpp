#include <iostream>
#include <cstring_s>
using namespace std;

class Doctor
{
private:
    char name[40];
    char specialization[40];
    int doctor_ID;
public:
    void display();
    Doctor(char a[20], char b[20]);
    void get_data();
    void set_data();
};

class patient
{
private:
    char name[40];
    char disease_name[40];
    int doctor_ID;
    int duration, age;
public:
    patient();
    void set_data();
    void get_data();
};

Doctor::Doctor(char* a, char* b)
{

    strcpy_s(name, a);


    strcpy_s(specialization, b);

}

void Doctor::display()
{
    cout << "\t\t\tname\t=\t" << name << endl << "\t\t\tspecialization\t=\t" << specialization << endl;
}


int main()

{
    char arr[20] = "Dr.Ali";
    char arr1[20] = "neurologist";


    Doctor dr(arr, arr1);


    dr.display();



    return 0;



}