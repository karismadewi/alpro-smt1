#include<cstdio>

int matriksA[3][3];
int matriksB[3][3];
int matriksC[3][3];

int main()
{
	printf("Selamat Datang di Program Karisma Dewi yang Cantik\n\n");
	
	for(int i=0;i<3;i++)
	{
		printf("Masukkan Tiga Bilangan data baris ke-%i  Matriks A, dengan dipisah spasi : ",i+1);
		scanf("%i %i %i", &matriksA[i][0],&matriksA[i][1],&matriksA[i][2]);
	}
	
	printf("\n");
	
	for(int i=0;i<3;i++)
	{
		printf("Masukkan Tiga Bilangan data baris ke-%i Matriks B, dengan dipisah spasi : ",i+1);
		scanf("%i %i %i", &matriksB[i][0],&matriksB[i][1],&matriksB[i][2]);
	}
	
	printf("\n");
	

	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			matriksC[i][j] = matriksA[i][j] + matriksB[i][j];
		}
	}
	
	printf("\n\n Data yang sudah Anda masukkan adalah sebagai berikut : \n\n");
	
	printf("Tampilan Matriks A\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%i \t",matriksA[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Tampilan Matriks B\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%i \t",matriksB[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Tampilan Matriks C\n");
	printf("Matriks C = MatriksA + MatriksB\n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%i \t",matriksC[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("Terima Kasih Telah Menjalankan Programnnya Karisma");
	
	
	return 0;
}
