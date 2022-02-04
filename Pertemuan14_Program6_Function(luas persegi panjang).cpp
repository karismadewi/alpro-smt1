#include<cstdio>


//menghitung luas persegi panjang
int segipan(int p, int l)
{
	return (p*l);
}

int main()
{
	int hasil,input_p, input_l;
	printf("Selamat Datang di Program Luas Persegi Panjang Karisma Dewi\n\n");
	printf("Masukkan panjang dan lebar yang dipisah dengan spasi : ");
	scanf("%i %i",&input_p, &input_l);
	
	hasil = segipan(input_p, input_l);
	
	printf("\nJadi panjang luas dengan panjang sisi sebesar %i dan lebar sebesar %i adalah %i",input_p, input_l, hasil);
	
	return 0;
}
