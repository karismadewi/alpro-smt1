#include<cstdio>


// menghitung luas bujur sangkar
int bujursangkar(int a)
{
	return(a*a); 
}


int main()
{
	int hasil,input;
	printf("Selamat Datang di Program Luas Persegi Karisma Dewi\n\n");
	printf("Masukkan sisi : ");
	scanf("%i",&input);
	
	hasil = bujursangkar(input);
	
	printf("Jadi panjang luas dengan panjang sisi sebesar %i adalah %i",input, hasil);
	
	return 0;
}
