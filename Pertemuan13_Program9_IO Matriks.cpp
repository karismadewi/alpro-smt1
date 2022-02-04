#include<cstdio>

int** k;
int** p;

int kolom,baris;


int main()
{
	printf("Selamat Datang di Program Penjumlahan Matriks Karisma\n\n");
	
	printf("Masukkan jumlah baris matriks yang diinginkan : ");
	scanf("%i",&baris);
	printf("Masukkan jumlah kolom matriks yang diinginkan : ");
	scanf("%i",&kolom);
	
	
	// MATRIKS A
	k = new int*[baris];
	
	for(int i=0; i<baris; i++)
	{
		
		k[i] = new int[kolom];
			
	}
	
	printf("\n\nData Matriks A\n\n");
	
	for(int i=0; i<baris; i++)
	{
		for(int j=0; j<kolom; j++)
		{
			printf("Masukkan data [%i][%i]  :  ",i+1,j+1);
			scanf("%i",&k[i][j]);
		}
	}
	
	printf("\nData yang kamu masukkan adalah sebagai berikut : \n\n");
	
	for(int i=0;i<baris;i++)
	{
		for(int j=0;j<kolom;j++)
		{
			printf("Data[%i][%i] = %i\n",i+1,j+1,k[i][j]);
		}
	}
	
	printf("\n\nTampilan Berupa Matriks : \n\n");
	for(int i=0;i<baris;i++)
	{
		for(int j=0;j<kolom;j++)
		{
			printf("%i\t",k[i][j]);
		}
		printf("\n");
	}
	
	//MATRIKS B
	p = new int*[baris];
	
	for(int i=0; i<baris; i++)
	{
		
		p[i] = new int[kolom];
			
	}
	
	
	printf("\n\nData Matriks B\n\n");
	
	for(int i=0; i<baris; i++)
	{
		for(int j=0; j<kolom; j++)
		{
			printf("Masukkan data [%i][%i]  :  ",i+1,j+1);
			scanf("%i",&p[i][j]);
		}
	}
	
	printf("\nData yang kamu masukkan adalah sebagai berikut : \n\n");
	
	for(int i=0;i<baris;i++)
	{
		for(int j=0;j<kolom;j++)
		{
			printf("Data[%i][%i] = %i\n",i+1,j+1,p[i][j]);
		}
	}
	
	printf("\n\nTampilan Berupa Matriks : \n\n");
	for(int i=0;i<baris;i++)
	{
		for(int j=0;j<kolom;j++)
		{
			printf("%i\t",p[i][j]);
		}
		printf("\n");
	}
	
	// HASIL PENJUMLAHAN MATRIKS 
	
	printf("Tampilan Matriks C\n");
	printf("Matriks C = MatriksA + MatriksB\n");
	
		
	for(int i=0;i<baris;i++)
	{
		for(int j=0;j<kolom;j++)
		{
			
			printf("%i \t",k[i][j]+p[i][j]);
		}
		printf("\n");
	}
	printf("\n\n"); 
	return 0;
}
