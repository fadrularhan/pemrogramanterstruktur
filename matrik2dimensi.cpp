#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	int matrik[10][10];
	int brs, klm;
	
	cout<<"Jml baris: ";cin>>brs;
	cout<<"Jml Kolom: ";cin>>klm;
	
	//input
	for(int i=0; i<brs; i++)
	for(int j=0; j<klm; j++)
	{
		cout<<"Matrik["<<i+1<<"]["<<j+1<<"] : ";
		cin>>matrik[i][j];
	}
	//output
	for (int i=0; i<brs; i++)
	{
		for(int j=0; j<klm; j++)
		cout<<matrik[i][j]<<"  ";
		cout<<endl;
	}
}


