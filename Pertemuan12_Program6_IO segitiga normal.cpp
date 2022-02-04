#include <cstdio>

int a,b,input;

int main()
{
	printf("Selamat malam karisma, semoga sehat\n");
	printf("Segitiga Normal, dengan input dan output bintang\n\n");
	scanf("%i",&input);
	
	
	for(a=0;a<=input;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("* ");
		}
		printf("\n");

	}
	return 0;
}
	
	
