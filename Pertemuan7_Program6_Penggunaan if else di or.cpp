#include<cstdio>

int bilangan;

int main()
{
	printf("Masukkan bilangan yang dimana kurang dari 5 atau lebih dari 15  :   ");
	scanf("%i",&bilangan);
	
	if((bilangan<5)||(bilangan>15))
	{
		printf("\nBenaar! Kamu memasukkan jawaban yang benar");
	}
	else
	{
		printf("\nJawabanmu salah, Sepertinya kamu harus mencoba lagi");
	}
	printf("\n\nTerima kasih telah menjalankan programnya karisma");
	return 0;
}
