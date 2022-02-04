#include<cstdio>

int* a;
int input;

int main()
{
	printf("Selamat Datang di Program Karisma\n\n");
	printf("Masukkan Banyak Data yang ingin di input : ");
	scanf("%i",&input);
	
	a=new int[input];
	
	for(int i=0; i<input; i++)
	{
		printf("Masukkan data ke-%i : ",i+1);
		scanf("%i",&a[i]);
	}
	printf("\n");
	
	printf("Data yang telah anda masukkan adalah sebagai berikut : \n");
	
		for(int i=0;i<input;i++)
	{
		printf("\nData ke-%i adalah %i\n",i+1,a[i]);
	}
	return 0;
	
}
