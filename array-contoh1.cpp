#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int nilai[5];
	cout<<"Masukkan Nilai data nilai"<<endl;
	
	cout<<"=========================="<<endl;
	
	cout<<"Nilai 1 : ";cin>>nilai[0];
	cout<<"Nilai 2 : ";cin>>nilai[1];
	cout<<"Nilai 3 : ";cin>>nilai[2];
	cout<<"Nilai 4 : ";cin>>nilai[3];
	cout<<"Nilai 5 : ";cin>>nilai[4];
	
	cout<<endl;
	
	cout<<"Data Nilai yang anda masukkan"<<endl;
	cout<<"1      2      3      4      5"<<endl;
	cout<<"============================="<<endl;
	
	cout<<nilai[0]<<"      ";
	cout<<nilai[1]<<"      ";
	cout<<nilai[2]<<"      ";
	cout<<nilai[3]<<"      ";
	cout<<nilai[4]<<"      "<<endl;
	
	getch();
}
