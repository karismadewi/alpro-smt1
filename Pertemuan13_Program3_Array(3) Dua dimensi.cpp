#include<cstdio>

int a[3][4]; // [3]=baris [4]=kolom 


int main()
{
	printf("Selamat Datang di Program Karisma Dewi\n\n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Silahkan masukkan data ke [%i][%i] :",i+1,j+1);
			scanf("%i",&a[i][j]);
		}
	}
	
	printf("\n Data yang kamu masukkan adalah sebagai berikut : \n\n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Data[%i][%i] = %i\n",i+1,j+1,a[i][j]);
		}
	}
	
	printf("\n\nTampilan Berupa Matriks : \n\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%i\t",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

/* 
Tampilan berupa Matriks (jika dimulai dari 0)

a[0][0]		a[0][1]		a[0][2]		a[0][3]
a[1][0]		a[1][1]		a[1][2]		a[1][3]
a[2][0]		a[2][1]		a[2][2]		a[2][3]


Tampilan berupa matriks (jika dimulai dari 1) 
a[1][1]		a[1][2]		a[1][3]		a[1][4]
a[2][1]		a[2][2]		a[2][3]		a[2][4]
a[3][1]		a[3][2]		a[3][3]		a[3][4]			
