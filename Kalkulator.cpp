#include <iostream>
#include <stdio.h>
using namespace std;
float kalkulator (float a, float b)
{
	float hasil1;
	hasil1=a+b;
	return(hasil1);
	
	float hasil2;
	hasil2=a-b;
	return(hasil2);
	
	float hasil3;
	hasil3=a*b;
	return(hasil3);
}

int main()
{
	float hasil1, angka1,angka2;
	cout<<"Masukkan Angka Pertama : " ;
	cin>>angka1;
	cout<<"Masukkan Angka Kedua : " ;
	cin>>angka2;
	hasil1=kalkulator(angka1,angka2);
	hasil2=kalkulator(angka1,angka2);
	hasil3=kalkulator(angka1,angka2);
	cout<<"Hasil Penjumlahan adalah " <<hasil1;
	cout<<"Hasil Pengurangan adalah " <<hasil2;
	cout<<"Hasil Perkalian adalah " <<hasil3;
	return 0;
}
