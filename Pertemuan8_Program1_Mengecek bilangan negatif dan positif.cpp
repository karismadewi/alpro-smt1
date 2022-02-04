#include<cstdio>

float bilangan;

int main()
{
	//mengecek angka positif dan negatif
	printf("Masukkan angka yang ingin di cek : ");
	scanf("%f",&bilangan);
	
	if(bilangan>0)
	{
		printf("\n%.1f merupakan bilangan positif",bilangan);
	}
	else if(bilangan<0)
	{
		printf("\n%.1f merupakan bilangan negatif",bilangan);
	}
	else if(bilangan ==0)
	{
		printf("\nBilangan yang anda masukkan adalah bilangan netral",bilangan);
	}
	
	printf("\n\nTerima kasih telah menggunakan programnnya karisma");
	
	return 0;
}
