#include<cstdio>


//menghitung luas Segitiga
float segitiga(float alas, float tinggi)
{
	return(alas*tinggi/2);
}

int main()
{
	float input_a, input_t;
	float hasil;
	printf("Selamat Datang di Program Luas Segitiga Karisma Dewi\n\n");
	printf("Masukkan panjang alas : ");
	scanf("%f",&input_a);
	printf("Masukkan panjang tinggi : ");
	scanf("%f",&input_t);
	
	hasil =segitiga(input_a, input_t);
	
	printf("\nJadi panjang luas dengan panjang alas sebesar %.f dan tinggi sebesar %.f adalah %.2f",input_a, input_t, hasil);
	
	return 0;
}
