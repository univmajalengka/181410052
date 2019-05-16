#include<iostream>
#include<string>
#include<sstream>
using namespace std;

	struct minuman
	{
		string minuman;
		int harga;
	}mnmn1[3];

void printminuman1(minuman minuman1);

int main ()
{
     string hausss;
     int b;
             for(b=0; b<3;b++)
             {
             cout<<"Masukkan Nama Minuman	: ";
             getline(cin,mnmn1[b].minuman);
             cout<<"Masukkan Harga		: Rp.";
             
             getline(cin,hausss);
             stringstream(hausss)>>mnmn1[b].harga;                    }
             
       cout<<"\nBarang yang Telah Diinput :\n";
       for(b=0;b<3;b++)
       printminuman1(mnmn1[b]);   
     
return 0;

}

void printminuman1(minuman minuman1)
{
	cout<<minuman1.minuman<<"\t";
	cout<<"\tRp. "<<minuman1.harga<<",-\n";
}
