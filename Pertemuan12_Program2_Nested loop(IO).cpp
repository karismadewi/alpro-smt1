#include<cstdio>

int a,b,kolom,baris,hasil;

int main()
{
	
	printf("Selamat Malam\n\n");
	printf("Masukkan bilangan untuk kolom : ");
	scanf("%i",&kolom);
	printf("Masukkan bilangan untuk baris : ");
	scanf("%i",&baris);
	
	for(a=1;a<=kolom;a++)
	{
		for(b=1;b<=baris;b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
