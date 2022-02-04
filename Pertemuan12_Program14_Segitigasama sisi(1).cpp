#include<cstdio>

int a,b;

int main()
{
	printf("Selamat Datang di Program Karisma\n\n");
	
	for(a=5;a>=1;a--)
	{
		for(b=5;b>=a;b--)
		{
			printf("%i ",b);
		}
		printf("\n");		
	}
	for(a=1;a<=5;a++)
	{
		for(b=5;b>=a+1;b--)
		{
			printf("%i ",b);
		}
		printf("\n");
	}
	printf("Terima Kasih");
	return 0;
	
}
/* bentuk output

5
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1
5 4 3 2 
5 4 3 
5 4 
5
Percobaan 1: a=5; 5>=1 ----> 5
Percobaan 2: a=4; 4>=1 ----> 5 4
 

*/

