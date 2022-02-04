#include<cstdio>

int bilangan;

int main()
{
	printf("Masukkan bilangan antara 1-100 yang bernilai genap  :  ");
	scanf("%i",&bilangan);
	
	if((bilangan%2==0)&&((bilangan>=1)&&(bilangan>=100)))
	{
		printf("\nHoraay, angka yang kamu masukkan benar!");
	}
	else
	{
		printf("\nSepertinya kamu harus mencoba lagi. Jawabanmu salah");
	}
	printf("\n\nTerima kasih telah menggunakan progamnnya karisma");
	return 0;
}
