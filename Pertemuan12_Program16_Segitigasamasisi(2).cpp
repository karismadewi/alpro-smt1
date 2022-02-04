#include<cstdio>

int a,b;

int main()
{
	printf("Selamat Datang di Program Karisma");
	for(a=0;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%i ",b);
		}
		printf("\n");
	}
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5-a;b++)
		{
			printf("%i ",b);
		}
		printf("\n");
	}
	printf("Terima Kasih telah menjalankan programnnya Karisma");
	return 0;
}
/*
output
1
1 2 
1 2 3
1 2 3 4
1 2 3 4 5 

1 2 3 4 
1 2 3 
1 2 
1
*/
