#include<cstdio>

int nilai;

int main()
{
	printf("Masukkanlah nilai angka yang ingin di cek  :  ");
	scanf("%i",&nilai);
	
	if(nilai >=85)
	{
		printf("\n\nNilai yang kamu dapatkan adalah A\n\n");
	}
	else if(nilai >=75)
	{
		printf("\n\nNilai yang kamu dapatkan adalah B\n\n");
	}
	else if(nilai >=65)
	{
		printf("\n\nNilai yang kamu dapatkan adalah C\n\n");
	}
	else
	{
		printf("\n\nNilai yang kamu dapatkan adalah D\n\n");
	}
	
	printf("Terima kasih telah melakukan pengecekan di program karisma");
	
	return 0;
}
