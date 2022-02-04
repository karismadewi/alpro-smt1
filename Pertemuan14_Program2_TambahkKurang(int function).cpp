#include<cstdio>


int Tambah(int a,int b)
{
	int hasil;
	hasil = a + b;
	
	/* atau jika mau mempersingkat :
	
	solusi 1 			int hasil = a + b;		
	solusi 2			return (a+b); 				*/
						
	
	return hasil;
}

int Kurang(int a, int b)
{
	return (a-b);
}

int main()
{
	int bil1, bil2, hasiltambah, hasilkurang;
	
	bil1 = 5;
	bil2 = 3;
	
	hasiltambah = Tambah(bil1, bil2);
	hasilkurang = Kurang(bil1, bil2);
	
	printf("Hasil penjumlahan = %i\n", hasiltambah);
	printf("Hasil pengurangan = %i\n", hasilkurang);
	
	return 0;
}


