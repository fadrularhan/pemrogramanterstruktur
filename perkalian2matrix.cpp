#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a[20][20], b[20][20], c[20][20];
	int brsa, klmabrsb, klmb; //baris-a | kolom-a baris-b | kolom-b
	
	cout<<"Baris matrik a 	 : ";cin>>brsa;
	cout<<"Klm mtrik a Brs b : ";cin>>klmabrsb;
	cout<<"Kolom matrik b    : ";cin>>klmb;
	
	//input matrik A
	cout<<"Masukkan matrik A"<<endl;
	for(int i=0; i<brsa; i++)
	for(int j=0; j<klmabrsb; j++)
	{
		cout<<"Matrik A["<<i+1<<"]["<<j+1<<"] : ";
		cin>>a[i][j];
	}
	
	cout<<"Masukkan matrik B"<<endl;
	for(int i=0; i<klmabrsb; i++)
	for(int j=0; j<klmb; j++)
	{
		cout<<"Matrik B["<<i+1<<"]["<<j+1<<"] : ";
		cin>>b[i][j];
	}
	
	//perkalian dua matrik
	for(int i=0; i<brsa; i++)
	for(int j=0; j<klmb; j++)
	{
		c[i][j]=0;
		for(int k=0;k<klmabrsb; k++)
		c[i][j]= c[i][j] + a[i][k] * b[k][j];
	}
	
	cout<<"\nIsi matrik A"<<endl;
	for (int i=0; i<brsa; i++)
	{
		for (int j=0; j<klmabrsb; j++)
		cout<<a[i][j]<<"  ";
		cout<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
	}
	
	cout<<"\nIsi matrik B"<<endl;
	for (int i=0; i<klmabrsb; i++)
	{
		for (int j=0; j<klmb; j++)
		cout<<b[i][j]<<"  ";
		cout<<endl;
	}
	
	cout<<"\nIsi matrik C"<<endl;
	for (int i=0; i<brsa; i++)
	{
		for (int j=0; j<klmb; j++)
		cout<<c[i][j]<<"  ";
		cout<<endl;
	}
	getch();
}
