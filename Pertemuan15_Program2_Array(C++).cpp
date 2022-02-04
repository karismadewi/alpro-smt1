#include <iostream>
#include <ctime>
#include<stdlib.h>


using namespace std;

void tampilkanData(int*arr, int jumlahData)
{
	for (int nilai=0; nilai<jumlahData; nilai++)
	{
		cout<< arr[nilai]<< " ";
	}
	return;
}


int jumlahkanData(int*arr, int jumlahData)
{
	int jumlah=0;
	for(int nilai=0; nilai<jumlahData; nilai++)
	{
		jumlah = jumlah+arr[nilai];
	}
	return jumlah;
}

int* gandakanData(int*arr, int jumlahData)
{
	for(int nilai=0; nilai<jumlahData; nilai++)
	{
		arr[nilai]=arr[nilai]*2;
	}
	return arr;
}


const int jumlahData = 7;
int BanyakData[jumlahData];

int main()
{
	srand(time(NULL));
	for(int nilai=0; nilai<jumlahData; nilai++)
	{
		BanyakData[nilai]=rand()%7;
	}
	
	cout<< "Selamat Datang di Program Karisma"<< endl <<endl;
	cout<< "Tugas 1: Menampilkan Data Suatu Array" <<endl;
	tampilkanData(BanyakData,jumlahData);
	
	cout<<endl<<endl<<"Tugas 2 : Menjumlahkan Data Suatu Array" <<endl;
	cout<<"Jumlah Data :"<<" "<<jumlahkanData(BanyakData,jumlahData);
	
	cout<<endl<<endl<<"Tugas 3 : Menggandakan Dat Suatu Array" <<endl;
	cout<<"Data Setelah Digandakan : ";
	tampilkanData(gandakanData(BanyakData,jumlahData),jumlahData);
	
	
	return 0;
}



