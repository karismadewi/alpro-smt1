#include<cstdio>

int bilangan;

int main()
{
	printf("Masukkan nilai antara 1-10 atau 20-30  :   ");
	scanf("%i",&bilangan);
	
	if(((bilangan>=1)&&(bilangan<-10))||(bilangan>=20)&&(bilangan<=30))
	{
		printf("\nWaao, jawabanmu benar ya!");
	}
	else
	{
		printf("\nHmm, jawabanmu salah nih. Coba lagi yaa");
	}
	
	printf("\n\nTerima kasih telah menjalankan programnnya karisma");
	return 0;
}
