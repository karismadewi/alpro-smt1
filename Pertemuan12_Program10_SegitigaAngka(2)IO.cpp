#include<cstdio>

int a,b,bilangan;

int main()
{
	printf("Selamat datang di program karisma\n");
	printf("Masukkan bilangan : ");
	scanf("%i",&bilangan);
	
	for(a=1;a<=bilangan;a++)
	{
		for(b=bilangan;b>=a;b--)
		{
			printf("%i ",b);
		}
		printf("\n");
	}
	return 0;
}

/* output

5 4 3 2 1
5 4 3 2 
5 4 3 
5 4 
5

*/
