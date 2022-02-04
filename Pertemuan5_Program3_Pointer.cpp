#include<cstdio>

int A;
int *B;

int main()
{
	
	printf("Selamat datang di program pengenalan pointer yang ke Tiga.\n");
	printf("Karisma Dewi 14 Desember 2021\n\n");
	printf("Masukkan nilai A  ");
	scanf("%i",&A);
	printf("Jadi nilai A adalah %i\n\n",A);
	
	B = new int;
	printf("Masukkan nilai *B  ");
	scanf("%i",B);
	printf("Jadi nilai *B adalah %i",*B);
	
	return 0;
}
