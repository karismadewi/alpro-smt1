#include<cstdio>

int bilangan;
int main()
{
	printf("Masukkan bilangan yang lebih lebih dari 13 dan kurang dari 23   :    ");
	scanf("%i",&bilangan);
	
	if((bilangan>13)&&(bilangan<23))
	{
		printf("\n\nBenaar! Jawaban kamu benar");
	}
	else
	{
		printf("\n\nJawaban kamu salah");
	}
	
	printf("\n\nTerima kasih telah menjalankan programnya karisma");
	
	return 0;
	
}
