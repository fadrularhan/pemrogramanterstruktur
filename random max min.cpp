#include <iostream>
#include <conio.h>
#include <stdlib.h> 	//srand, rand
#include <time.h>		//time

using namespace std;

int main()
{
	int jum;
	int nilai[1000], max, min;
	cout<<"Jumlah Data : ";
	cin>>jum;
	
	srand(time(NULL)); //fungsi u random agar angka muncul selalu berbeda
	
	for (int i=0; i<jum; i++)
	{
		cout<<"Data ke - "<<(i+1)<<" : ";
		
		nilai[i]=rand()%1000; //merandom 0-jumlah-nilai(1000);
		
		cout<<nilai[i]<<endl;
	}
	
	//nilai pertama array dianggap sebagai data terkecil dan data terbesar
		max=nilai[0];
		min=nilai[0];
		
	for (int i=1; i<5; i++)
	{
		if (nilai[i] > max)
		max = nilai[i];
		
		if(nilai[i] <min)
		min = nilai[i];
	}
	cout<<"========================== "<<endl;
	cout<<"Max    : "<<max<<endl;
	cout<<"Min    : "<<min<<endl;
	
}
