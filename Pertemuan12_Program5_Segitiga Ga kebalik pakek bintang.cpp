#include<cstdio>

int a,b;

int main()
{
	printf("Program Segitiga Ga kebalik, dan pakek bintang\n\n");
	
	for(a=1;a<7;a++)
	{
		for(b=1;b<a;b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
