#include<cstdio>

int A,B;


int main()
{
	printf("Masukkan bilangan bulat lebih besar dari 12\n\n");
	printf("Bilangan yang saya masukkan :  ");
	scanf("%i",&A);
	
	if(A==12)
	{
		printf("Bilangan yang anda masukkan sama-sama bernilai 12\n\n");
	}
	else if(A>12)
	{
		printf("Betul,Bilangan yang anda masukkan lebih dari 12\n\n");
	}
	else
	{
		printf("Bilangan yang anda masukkan, kurang dari 12\n\n");
	}
	
	printf("Terima kasih telah menjalankan programnya karisma");
	
	return 0;
}
