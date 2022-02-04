#include<cstdio>

int a,b;

int main()
{
	printf("Selamat Datang di Program Karisma\n\n");
	printf("Tangal 23 Desember 2021. I'm Happy\n\n");
	
	for(a=1;a<=5;a++)
	{
		for(b=5;b>=a;b--)
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
