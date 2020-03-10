#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>

using namespace std;

//prototype
void cetakC(int brs, char *teks);
void cetak(int klm, int brs, char *teks);
void headerTabel(); //fungsi untuk mencetak bagian atas tabk
void detailTabel(); //fungsi untuk mencetak bagian tengah untuk isian table
void footerTabel(); // fungsi untuk mencetak hasil dari pada penjualan barang
void isi();
void tabel();
char tanya();
float hgBeli(float x, float y);
float discBeli(float bsrDisc, float hgBl);
float hitHgByr (float hgBl, float disc);
float hitTotHg(float hgBl);
float hitTotDisc(float disc);



void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
	//tabel();
	headerTabel();
	detailTabel();
	footerTabel();
	isi();
	tanya();
	getch();
}

//definisi fungsi
void cetakC(int brs, char *teks)
{
	gotoxy(40-(strlen(teks)/2),brs);cout<<teks;
}

void cetak(int klm, int brs, char *teks)
{
	gotoxy(klm,brs);cout<<teks;
}

void headerTabel ()
{
	cetakC(0, "TOKO TUTUP");
	cetakC(1, "Jl. Rosakkkk No. 9872 Yogyakarta");
	cetakC(2, "Selalu Tutup 24 JAM");
	cetak(3,3, "===========================================================================");
	cetak(3,4, "| No | Nama Barang | Jml Beli | Hg Satuan | Hrg Beli | Diskon | Hrg Bayar |");
	cetak(3,5, "===========================================================================");
}

void detailTabel ()
{
	for (int i=1; i<=12; i++)
	{
		cetak(3,5+i, "|    |             |          |           |          |        |           |");
	}
	
}

void footerTabel ()
{
	cetak(3,18, "===========================================================================");
	cetak(3,19, "|                                                  TOTAL HARGA|           |");
	cetak(3,20, "|                                                 TOTAL DISKON|           |");
	cetak(3,21, "|                                                  TOTAL BAYAR|           |");
	cetak(3,22, "|                                                        BAYAR|           |");
	cetak(3,23, "|                                                      KEMBALI|           |");
	cetak(3,24, "===========================================================================");
}

/*void tabel ()
{
	headerTabel();
	detailTabel();
	footerTabel();
}*/
char tanya()
{
	char jw;
	cetak(45,26, "Isi data lagi [Y/T] : ");
	cin>>jw;
	cetak(45,26, "                          ");
	return(jw);
}

float hgBeli (float x, float y)
{
	float z;
	z = x * y;
	return(z);
	// atau bisa di buat simple dengan [return(x*y);]
}

void isi ()
{
	char jw, nmbrg[30];
	float jmlBeli, hgsat, hgBl, bsrDisc, disc, hgByr, totHg, totDisc, byr, kembali;
	int i=1;
	do{
		gotoxy(5,5+i);cout<<i;
		gotoxy(10,5+i);cin>>nmbrg;
		gotoxy(27,5+i);cin>>jmlBeli;
		gotoxy(37,5+i);cin>>hgsat;
		hgBl = hgBeli(jmlBeli, hgsat);
		gotoxy(48,5+i);cout<<hgBl;
		
		
		
		gotoxy(60,5+i);cin>>bsrDisc;
		disc = discBeli(bsrDisc, hgBl);
		gotoxy(59,5+i);cout<<disc;
		
		hgByr = hitHgByr(hgBl, disc);
		gotoxy(69,5+i);cout<<hgByr;
		
		totHg = hitTotHg(hgBl);
		gotoxy (68,19);cout<<totHg;
		
		totDisc = hitTotDisc(disc);
		gotoxy (68,20);cout<<totDisc;
		
		jw=tanya();
		i++;
	}while (jw=='y'||jw=='Y');
	
	while(byr<(totHg))
	{
		gotoxy(68,21);cout<<"Uangnya kurang, total bayar Rp. :";
		gotoxy(68,22);cout<<"    ";	
		gotoxy(68,23);cin>>byr;
	}
	
	if(byr>(totHg-totDisc))
		kembali = byr- (totHg-totDisc);
	else 
		kembali - 0;
		gotoxy (68,24);cout<<kembali;
		getch();
}

	
		
			
float discBeli(float bsrDisc, float hgBl)
{
	float z;
	z = (bsrDisc /100) * hgBl;
	return (z);
}

float hitHgByr (float hgBl, float disc)
{
	return (hgBl - disc);
}

float hitTotHg (float hgBl)
{
	static float totHgBl = 0;
	totHgBl = totHgBl + hgBl;
}

float hitTotDisc (float disc)
{
	static float totDisc;
	totDisc = totDisc + disc;
}


