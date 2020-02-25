#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>

using namespace std;
int main()
{
   char nama[30];
   cout<<"Masukkan Nama :  ";
	cin.getline(nama, sizeof(nama)); // memasukkan limit dari kata

   nama[0] = toupper(nama[0]);
   
   for (int i=1; i<nama[i]; i++)
   {
        if ( nama[i - 1] == ' ' )
            nama[i] = toupper( nama[i] );
        else
            nama[i] = tolower(nama[i]);
   }

   cout <<"Kapital Di Huruf Pertama :"<<nama<<endl;
   
   return 0;
}
