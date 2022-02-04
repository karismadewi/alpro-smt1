#include<cstdio>

int* A;
int* B;
int C, E;
int *D;


int main()
{
	
	A = new int;
	*A = 20;
	printf("Nilai A = %i\n",A);
	printf ("Nilai A sebesar %i didapatkan dari perintah 'new int'\n",A);
	printf("Isi data di memori dengan alamat %i adalah = %i\n\n",A, *A);
	
	
	B = new int;
	*B = 10;
	printf("Nilai B = %i\n",B);
	printf("Nilai B sebesar %i didapatkan dari perintah 'new int'\n",B);
	printf("isi data di memori dengan alamat %i adalah = %i \n\n", B, *B); 
	
	
	
	D = &C; // isi D akan berubah ketika C berubah 
	C = 15;
	printf("Nilai D adalah sebesar = %i\n",*D);
	C = 12;
	printf("Nilai D adalah sebesar = %i\n",*D);
	
	E = 30;
	A = new int; 
	*A = E; // isi A tidak akan berubah ketika E berubah jika E dimasukkan data baru. 
	printf("Nilai E adalah = %i\n",*A);
	E = 24;
	printf("Nilai E adalah = %i\n",*A);
	
	
	
	return 0; 
	
}
