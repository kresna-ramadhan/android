#include <iostream>
#include <stdio.h>
using namespace std;
float balok (float p, float l, float t)
{
	float volume;
	volume=p*l*t;
	return(volume);
}

int main()
{
	float volume, panjang,lebar,tinggi;
	cout<<"Masukkan Panjang : " ;
	cin>>panjang;
	cout<<"Masukkan Lebar : " ;
	cin>>lebar;
	cout<<"Masukkan Tinggi : " ;
	cin>>tinggi;
	volume=balok(panjang,lebar,tinggi);
	cout<<"Volume balok adalah " <<volume;
	return 0;
}
