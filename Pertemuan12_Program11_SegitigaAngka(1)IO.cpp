#include<cstdio>

int a,b,bilangan;

int main()
{
	printf("Selamat datang di programnya Karisma\n\n");
	printf("Masukkan bilangan yang diinginkan : ");
	scanf("%i",&bilangan);
	
	for(a=1;a<=bilangan;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%i ",b);
		}
		printf("\n");
	}
	return 0;
}





/* bentuk output

1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

Percobaan 1: a=1; 1<=5 ----> 1 
	1 
*/

