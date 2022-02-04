#include<cstdio>

int a,b,bilangan;

int main()
{
	printf("Selamat Datang di Program Karisma Dewi\n\n");
	printf("Masukkan nilai bilangan : ");
	scanf("%i",&bilangan);
	
	for(a=bilangan;a>=1;a--)
	{
		for(b=bilangan;b>=a;b--)
		{
			printf("%i ",b);
		}
		printf("\n");
	}
	return 0;
}


/* bentuk output

5
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1

Percobaan 1: a=5; 5>=1 ----> 5
Percobaan 2: a=4; 4>=1 ----> 5 4
 

*/

