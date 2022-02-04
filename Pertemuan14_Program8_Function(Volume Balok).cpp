#include<cstdio>


//menghitung Volume Balok
int balok(int p, int l, int t)
{
	return(p*l*t);
}

int main()
{
	int panjang, lebar, tinggi;
	int hasil;
	printf("Selamat Datang di Program Volume Balok Karisma Dewi\n\n");
	printf("Masukkan panjang sisi balok : ");
	scanf("%i",&panjang);
	
	printf("Masukkan lebar sisi balok : ");
	scanf("%i",&lebar);
	
	printf("Masukkan tinggi sisi balok : ");
	scanf("%i",&tinggi);
		
	hasil =balok(panjang,lebar,tinggi);
	
	printf("\nJadi luas balok dengan ketentuan :\n\n");
	printf("Panjang : %i\n",panjang);
	printf("Lebar : %i\n",lebar);
	printf("Tinggi : %i\n",tinggi);
	
	printf("\nMempunyai Volume sebesar %i",hasil);
	
	return 0;
}
