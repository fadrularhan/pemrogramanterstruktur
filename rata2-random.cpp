#include <iostream>
#include <conio.h>
#include <stdlib.h> 	//srand, rand
#include <time.h>		//time

using namespace std;

int main()
{
	int nilai[10], jml, i, data, tot;
	int rata2;
	
	tot = 0;
	cout<<"Jumlah Data : ";
	cin>>jml;
	
	srand(time(NULL)); //fungsi u random agar angka muncul selalu berbeda
	
	for (int i=0; i<jml; i++)
	{
		cout<<"Data ke - "<<(i+1)<<" : ";
		nilai[i]=rand()%100; //merandom 0-jumlah-nilai(1000);
		cout<<nilai[i]<<endl;
		tot=tot+nilai[i];
	}
	
	rata2=tot/jml;
	cout<<"Total Data : "<<tot<<endl;	
	cout<<"Rata-Rata : "<<rata2;
	
	
	 
}
