#include <iostream>
using namespace std ;

int main ()
	{
		int waktu;
		char unit;
		
			cout <<"-----Konversi hari, jam, detik, dan menit-----"<<endl;
			cout <<"\n H. Hari \n J. Jam \n M. Menit \n D. Detik";
			cout <<"\nMasukan waktu yang ingin di konversikan dalam bentuk *.detk,menit,jam,hari : ";
			cin >>waktu;
			cout <<"\nWaktu dalam berbagai bentuk : ";
			cin >> unit;
		
		if (unit == 'h' || unit == 'H')
		{
			cout <<"Hari = "<<waktu<<endl;
			cout <<"Jam = "<<waktu * 24<<endl;
			cout <<"Menit = "<<waktu * 1140<<endl;
			cout <<"detik = "<<waktu * 86400<<endl;
		}
		
		
		else if (unit == 'J' || unit == 'j')
		{
			cout <<"Hari = "<<waktu / 24<<endl;
			cout <<"Jam = "<<waktu<<endl;
			cout <<"Menit = "<<waktu * 60<<endl;
			cout <<"detik = "<<waktu * 3600<<endl;
		}
		
		else if (unit == 'M' || unit == 'm')
		{
			cout <<"Hari = "<<waktu / 1440<<endl;
			cout <<"Jam = "<<waktu / 60<<endl;
			cout <<"Menit = "<<waktu<<endl;
			cout <<"detik = "<<waktu * 60<<endl;
		}
		
		else if (unit == 'D' || unit == 'd')
		{
			cout <<"Hari = "<<waktu / 86400<<endl;
			cout <<"Jam = "<<waktu / 3600<<endl;
			cout <<"Menit = "<<waktu / 60<<endl;
			cout <<"detik = "<<waktu<<endl;
		}
	}
