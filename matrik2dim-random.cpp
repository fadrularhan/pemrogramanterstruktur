#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;
int main()
{
	int matrik[10][10];
	int brs, klm;
	srand(time(NULL)); //random
	cout<<"Jml baris: ";cin>>brs;
	cout<<"Jml Kolom: ";cin>>klm;
	
	//input
	for(int i=0; i<brs; i++)  //untuk perulangan baris
	for(int j=0; j<klm; j++)  //untuk perulangan kolom
	{
		cout<<"Matrik["<<i+1<<"]["<<j+1<<"] : ";
		matrik[i][j]=rand()%100; //random nomor  0-99
		cout<<matrik[i][j]<<endl; //output nilai kolom dan baris
	}
	//output
	for (int i=0; i<brs; i++)
	{
		for(int j=0; j<klm; j++)
		cout<<setw(6)<<matrik[i][j]; //agar hasil output nya terlihat rapi menggunakan setw
		cout<<endl;
	}
}
