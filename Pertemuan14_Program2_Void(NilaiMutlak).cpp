#include <cstdio>

void mutlak(int* bil)
{
if (*bil<=0)
{
	*bil = -*bil;
}
	return;
}





int main()
{
	int x;
	printf("masukan bilangan   = ");
	scanf("%i",&x);
	
		mutlak(&x);
		printf("\nnilai mutlak\n");
		printf("X =%i\n", x);

return 0;
} 
