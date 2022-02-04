#include<cstdio>

int bilangan;

int main()
{
	printf("Masukkan bilangan yang habis di bagi 3 dan habis dibagi 4  =  ");
	scanf("%i",&bilangan);
	
	if((bilangan%3==0)&&(bilangan%4==0)) //arti dari % di if adalah mod. Jadi bilangan mod 3 yang = 0. artinya sisanya 0
	{
		printf("\nHebaat! jawaban kamu benar");
	}
	else{
		printf("\nJawabanmu salah, mungkin kamu harus belajar lagi");
	}
	
	printf("\n\nTerima kasih telah menggunakan programnnya karisma");
	
	return 0;
}
