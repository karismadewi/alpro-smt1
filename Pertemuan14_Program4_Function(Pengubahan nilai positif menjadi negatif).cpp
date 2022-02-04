#include<cstdio>
/*
2. Fungsi yang bisa mengubah nilai suatu bilangan menjadi negatifnya. 
(contoh: negatif dari 5 adalah -5, negatif dari -5 adalah 5)
*/

int mutlak(int nilai)
{
	if(nilai>0)
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
	
	printf("Selamat Datang di Program Penubahan Bilangan Karisma Dewi\n\n");

	printf("Masukkan bilangan yang ingin diubah menjadi bilangan negatif : ");
	scanf("%i",&input);
	
	hasil = mutlak(input);
	printf("Bilangan negatif dari %i adalah %i", input, hasil);
	
	return 0;
}
