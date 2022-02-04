#include<cstdio>
/*
1. Fungsi yang menghasilkan return value berupa nilai mutlak dari suatu bilangan. 
nilai mutlak adalah nilai positif dari suatu bilangan. 
contoh: 
	nilai mutlak dari -5 adalah 5, 
	nilai mutlak dari 5 adalah 5.
*/

int mutlak(int nilai)
{
	if(nilai<0)
	{
		nilai = nilai*-1;
	}
	else
	{
		nilai;
	}
	return nilai;
}

int main()
{
	int input,hasil;
	
	printf("Selamat Datang di Program Pengecekan Bilangan Mutlak Karisma Dewi\n\n");

	printf("Masukkan bilangan yang ingin diubah menjadi nilai mutlak : ");
	scanf("%i",&input);
	
	hasil = mutlak(input);
	printf("Nilai mutlak dari %i adalah %i", input, hasil);
	
	return 0;
}
