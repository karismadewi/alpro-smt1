#include<cstdio>

float A,B;
float *C;

int main()
{
	
	
	printf("Program Pembagian Bilangan Real\n\n");
	printf("Masukkan bilangan pertama :");
	scanf("%f",&A);
	
	C = new float;
	printf("Masukkan bilangan kedua : ");
	scanf("%f",C);
	
	B = A / *C;
	printf("Jadi nilai bagi dari bilangan %.1f dengan %.1f adalah %.2f",A,*C,B);
	
	return 0; 
}
