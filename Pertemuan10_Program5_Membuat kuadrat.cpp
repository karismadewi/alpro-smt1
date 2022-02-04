#include<cstdio>

int batas,a,kuadrat;

int main()
{
	printf("Masukkan sebuah bilangan sembarang : ");
	scanf("%i",&batas);
	a =0;
	kuadrat =a*a;
	
	while(kuadrat<=batas)
	{
		printf("Nilai kuadrat dari %i adalah %i \n",a ,kuadrat);
		a=a+1;
		kuadrat=a*a;
	}
	printf("\n\nTerima kasih telah menjalankan programnya Karisma");
	return 0;
	
}
