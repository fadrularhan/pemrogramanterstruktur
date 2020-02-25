#include <iostream>
using namespace std;
int main ()
{
	int jml, tamp, med;
	int nilai[10]={5,4,3,2,1};
	cin>>jml;
	
	//sorting
	for(int i=0; i<(jml-1); i++)
	for(int j=i+1; j<jml; j++)
	{
		cout<<"i = "<<i<<"  j = "<<j<<" ==> ";
		if(nilai[i]>nilai[j])
		{
			//tukar
			tamp = nilai[i];
			nilai[i]= nilai[j];
			nilai[j]= tamp;
		}
		for (int i=0; i<jml; i++)
		cout<<nilai[i]<<"   ";
		cout<<endl;
		
	}
	if(jml%2==0)
	{
		med=0.5*(nilai[(jml/2)]+nilai[(jml/2)-1]);
	}
	else
	{
		med=nilai[(jml/2)];
	}
	cout<<"Median= "<<med;
	cout<<"  "<<endl;

	for (int i=0; i<5; i++)
	cout<<nilai[i]<<"  ";
	
}



