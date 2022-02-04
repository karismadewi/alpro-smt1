#include<cstdio>

float A,B,C;

int main()
{
	printf("Program Pembagian\n\n");
	printf("Masukkan bilangan pertama :");
	scanf("%f",&A);
	printf("Masukkan bilangan kedua  :");
	scanf("%f",&B);
	
	C = A/B;
	printf("Jadi hasil bagi %.f dengan %.f adalah sebesar = %.2f",A,B,C);
	
	return 0; 
	
}
