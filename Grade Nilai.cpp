
#include<iostream>
#include<conio.h>
using namespace std;
main ()
{
double NilaiUjian;
char skor;
cout<<"OTNIEL" ; 
cout<<" Masukan Nilai Ujiannya Dulu  : ";
cin>>NilaiUjian;

if(NilaiUjian >= 90)
skor= 'A' ;
else

if(NilaiUjian >= 70)
skor= 'B';
else

if(NilaiUjian >= 60)
skor= 'C';
else 

if(NilaiUjian >= 50)
skor= 'D';
else
skor= 'E';
    
cout<<" Skor : "<<skor<<endl;
getch () ;
}
