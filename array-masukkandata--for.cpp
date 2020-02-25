#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int nilai[5];
	cout<<"Masukkan lima nilai data"<<endl;
	cout<<"========================"<<endl;
	
	for (int i=0; i<5; i++)
	{
		cout<<"Nilai ke- "<<i+1<<" : ";
		cin>>nilai[i];
	}
	cout<<endl;
	cout<<"Data Nilai yang anda masukkan"<<endl;
	cout<<"1      2      3      4      5"<<endl;
	cout<<"============================="<<endl;
	
	for (int i=0; i<5; i++)
	{
		cout<<nilai[i]<<"      ";	
	}
	getch();
	
}
