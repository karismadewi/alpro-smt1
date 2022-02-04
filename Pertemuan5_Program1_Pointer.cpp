#include<cstdio>


int A; 
int* B;

int main()
{
	A = 10;
	B = new int;
	*B = 20; 
	
	printf("Nilai A adalah %i\n",A);
	printf("B terletak pada alamat memori %i\n", B);
	printf("Nilai B sendiri adalah %i",*B);
	
	
	
	
	
	return 0;

}
