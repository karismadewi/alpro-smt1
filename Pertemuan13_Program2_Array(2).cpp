#include<cstdio>

int a[5];

int main()
{
	printf("Selamat Datang di Program Array Karisma\n\n");
	
	for(int i=0;i<5;i++)
	{
		printf("Masukkan nilai ke-%i : ",i+1);
		scanf("%i",&a[i]);
	}
	
	printf("\nBerikut adalah data yang sudah anda masukkan : \n\n");
	
	for(int i=0;i<5;i++)
	{
		printf("Nilai data ke-%i adalah = %i\n",i+1,a[i]);
	}
	return 0;
	
}
