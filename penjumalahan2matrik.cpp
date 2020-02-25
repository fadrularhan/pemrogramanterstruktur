#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a[10][10], b[10][10], c[10][10];
	int brs,klm;

	cout<<"Masukan jumlah Baris : ";cin>>brs;
	cout<<"masukan Jumlah kolom : ";cin>>klm;

	for(int i=0;i<brs;i++) //input matrik A
{
		for(int j=0;j<klm;j++)
	{
		cout<<" Matrik A["<<i<<"]["<<j<<"] = ";
		cin>>a[i][j];
	}
	
}
	
	for(int i=0;i<brs;i++) //input matrik B
{
		for(int j=0;j<klm;j++)
	{
		cout<<" Matrik B["<<i<<"]["<<j<<"] = ";
		cin>>b[i][j];
	}
}
	for(int i=0;i<brs;i++) //menjumlahkan matrik A dengan B
{
	for(int j=0;j<klm;j++)
	{
	c[i][j]=a[i][j]+b[i][j];
	}
}
	
	cout<<"Matrik A"<<endl; //menampilkan matrik A
	for(int i=0;i<brs;i++)
{
	for(int j=0;j<klm;j++)
	{
	cout<<a[i][j]<<" ";
	}
	cout<<endl;
}

	cout<<"\nMatrik B"<<endl; //menampilkan matrik B
	for(int i=0;i<brs;i++)
{
	for(int j=0;j<klm;j++)
	{
	cout<<b[i][j]<<" ";
	}
	cout<<endl;
}

	cout<<"\nMatrik C hasil penjumlahan"<<endl;
	for(int i=0;i<brs;i++) //menampilkan matrik C
{
	for(int j=0;j<klm;j++)
	{
	cout<<c[i][j]<<" ";
	}
	cout<<endl;
}
		getch();
}
