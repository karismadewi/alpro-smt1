#include<cstdio>

int bilangan,kuadrat,nilai;

int main()
{
	printf("Masukkan nilai : ");
	scanf("%i",&nilai);
	
	for(bilangan=1;bilangan<=nilai;bilangan=bilangan+1)
	{
		printf("\nNilai bilangan adalah %i\n",bilangan);
		kuadrat=bilangan*bilangan;
		printf("Nilai bilangan kuadratnya adalah %i\n\n",kuadrat);
	}
	
return 0;
}
