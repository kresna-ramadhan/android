#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}

struct karyawan{
int gaji,jam,lembur,pokok;
char nama[30];
};
struct karyawan data;
int main(){
setcolor(2);
cout<<"== PROGRAM MENGHITUNG GAJI KARYAWAN ==\n"<<endl;
setcolor(7);
cout<<"Masukkan Nama Karyawan     : "; 
cin>>data.nama;
cout<<"Masukkan Jumlah Jam Kerja  : "; 
cin>>data.jam;
cout<<"\nNama Karyawan      : "<<data.nama<<endl;
cout<<"Jam Kerja          : "<<data.jam<<" Jam"<<endl;
cout<<"\nStruktur Data Gaji Karyawan a/n "<<data.nama<<" : "<<endl;
cout<<"Gaji Pokok : 350000"<<endl;
if (data.jam <=7 )
{
data.gaji= (data.jam*50000);
cout<<"\nGaji : "<<data.gaji;
cout<<"\nGaji Keseluruhan : "<<data.gaji<<endl;
}
else for (int i=0; i<7; i--){
data.pokok=7*50000;
i=(data.jam-7)*15000;
data.gaji=data.pokok+i;
cout<<"\nGaji Lembur : "<<i<<endl;
cout<<"Gaji Keseluruhan : "<<data.gaji<<endl;
setcolor(6);
cout<<"\nTerimakasih :) ...";
};
getch ();

}
