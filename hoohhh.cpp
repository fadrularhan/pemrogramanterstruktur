#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),
coord);
}

int main()
{
	cout<<"TOKO SINAR SURYA"<<endl;
	cout<<"Jl. Sendiri Sendiri"<<endl;
	cout<<"NANGGROE-ACEH"<<endl;
	cout<<"TIDAK MENJUAL APA APA | 24 JAM"<<endl;
	
	//head table
	gotoxy(0,4);cout<<"==============================================================";
	gotoxy(0,5);cout<<"| No | Nama Barang | Jml Beli | Haga Sat | Diskon | Total Hg |";
	gotoxy(0,6);cout<<"==============================================================";
	
	//tubuh table
	for(int i = 1; i<12; i++)
	{
		gotoxy(0,6+i);cout<<"|    |             |          |          |        |          |";
	}
	gotoxy(0,18);cout<<"==============================================================";
	gotoxy(0,19);cout<<"|                                      Total Bayar|          |";
	gotoxy(0,20);cout<<"|                                     Total Diskon|          |";
	gotoxy(0,21);cout<<"|                                            Bayar|          |";
	gotoxy(0,22);cout<<"|                                          Kembali|          |";
	gotoxy(0,23);cout<<"==============================================================";
	
	char jw, nmBrg[30];
	float jmlBeli,hgSat,disc, discUang,totHrg, totByr, totDisc, byr, kembali;
	int i=1;
	do{
		gotoxy(2,6+i);cout<<i;
		gotoxy(7,6+i);cin>>nmBrg;
		gotoxy(24,6+i);cin>>jmlBeli;
		gotoxy(34,6+i);cin>>hgSat;
		gotoxy(46,6+i);cin>>disc;
		
		totHrg = jmlBeli * hgSat;
		discUang = (disc/100)*totHrg;
		gotoxy(45,6+i);cout<<discUang;
		gotoxy(55,6+i);cout<<totHrg;
		
		totByr= totByr+totHrg;
		totDisc= totDisc+discUang;
		gotoxy(55,19);cout<<totByr;
		gotoxy(55,20);cout<<totDisc;
		
		
		
		gotoxy(35,25);cout<<"Isi data lagi [Y/T] : ";
		cin>>jw;
		gotoxy(35,25);cout<<"                                          ";
		i++;
	}while(jw=='y'||jw=='Y');
	gotoxy(55,21);cin>>byr;
	
	while(byr<(totHrg-totDisc))
	{
		gotoxy(35,25);cout<<"Uangnya kurang woyyyy, total bayar Rp. : "<<(totHrg-totDisc);
		getch();
		gotoxy(55,21);cout<<"         ";
		gotoxy(35,25);cout<<"                                          ";	
		gotoxy(55,21);cin>>byr;
	}

	if(byr>(totHrg-totDisc))
		kembali = byr - (totHrg-totDisc);
	else
		kembali=0;
	gotoxy(55,22);cout<<kembali;	
	getch();

}
