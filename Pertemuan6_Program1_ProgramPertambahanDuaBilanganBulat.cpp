#include<cstdio>

int A,B;
int *C;

int main()
{
	C = new int; //harus diawal di kasih new int, kalo di pertengahan, program gabisa jalan
	
	printf("Penjumlahan dua bilangan bulat\n");
	printf("Masukkan nilai A :");
	scanf("%i",&A);
	printf("\n\n Masukkan nilai *C :");
	scanf("%i",C);
	
	
	B = *C + A;
	
	printf("Jadi nilainya adalah %i", B);
	
	return 0;
	
}
