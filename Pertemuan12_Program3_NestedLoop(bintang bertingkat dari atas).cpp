#include<cstdio>

int a,b,kolom,baris;

int main ()
{
	printf("Selamat malam dan selamat datang di programnnya karisma\n\n");
	
	
	for(a=7;a>=1;a--)
	{
		for(b=1;b<=a;b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
	
}


/* 
output yang akan di tampilkan 

* * * *
* * *
* *
*


Perulangan 1 : a=7 
* * * * * * *


*/
