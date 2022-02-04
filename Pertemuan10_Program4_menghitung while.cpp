#include<cstdio>

int a,b,hasil;

int main()
{
	printf("Masukkan dua buah bilangan dipisahkan dengan spasi : ");
	scanf("%i %i",&a,&b);
	while(a>0)
	{
		printf("%i\n",a);
		a=a-b;
	}
	printf("\n\nTerima kasih telah menjalankan programnnya Karisma");
}

/* cara perulangannya :

contoh a=10 b=3
perulangan 1 : a=10 ..... a=10-3 
perulangan 2 : a=7 ...... a=7-3
perulangan 3 : a=4 ......a=4-3
perulangan 4 : a=1 ......a=1-3 */


