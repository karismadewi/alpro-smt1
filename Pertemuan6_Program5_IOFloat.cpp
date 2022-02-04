#include<cstdio>

float A,B,C,D;

int main()
{
	printf("Masukkan tiga bilangan real dengan dipisahkan spasi\n\n");
	scanf("%f %f %f",&A,&B,&C);
	D = A+B+C;
	printf("\n\nJadi pertambahan nilai  %.2f + %.2f + %.2f adalah sebesar %.2f",A,B,C,D);
	

	return 0;
}
