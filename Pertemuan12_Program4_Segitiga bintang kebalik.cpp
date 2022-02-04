#include<cstdio>

int a,b;

int main()
{
	for(a=1;a<7;a++)
	{
		for(b=7;b>a;b--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}


/* out put

perulangan 1 : 1<7 
* * * * * * *

