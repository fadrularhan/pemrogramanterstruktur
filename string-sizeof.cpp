#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char nama[20];
	char alamat[30];
	
	cout<<"Masukkan nama : ";
	cin.getline(nama,sizeof(nama));
	
	cout<<"Masukkan alamat : ";
	cin.getline(alamat,sizeof(alamat));
	
	cout<<"\nNama anda : "<<nama<<endl;
	cout<<"Alamat anda : "<<alamat<<endl;
	
	getch();
}
