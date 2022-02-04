#include<cstdio>


//menghitung luas Lingkaran
float lingkaran(int jari2)
{
	return(jari2*jari2*3.14);
}

int main()
{
	int input;
	float hasil;
	printf("Selamat Datang di Program Luas Lingkaran Karisma Dewi\n\n");
	printf("Masukkan panjang jari jari : ");
	scanf("%i",&input);
		
	hasil =lingkaran(input);
	
	printf("\nJadi luas lingkaran dengan jari jari %i adalah %.2f",input, hasil);
	
	return 0;
}
