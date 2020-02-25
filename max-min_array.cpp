#include <iostream>

using namespace std;

int main()
{
	int nilai [5], max, min;

	for ( int i=0; i<5; i++)
	{
		cout<<"Masukkan data ke- "<<i+1<< "  :  ";
		cin>>nilai[i];
		
	}
		max = nilai[0];
		min = nilai[0];
		
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

