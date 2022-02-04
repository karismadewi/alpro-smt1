#include<cstdio>

void TampilkanMenu()
{
	printf("Silahkan pilih proses yang akan dijalankan : \n\n");
	printf("Proses 1 : Pertambahan\n");
	printf("Proses 2 : Pengurangan\n");
	printf("Proses 3 : Perkalian\n");
	printf("Proses 4 : Pembagian\n");
	return;
}

int PilihMenu()
{
	int proses;
	printf("Masukkan Proses : ");
	scanf("%i",&proses);
	return proses;
}

void OperasiPenjumlahan()
{
	int a,b,hasil;
	
	printf("\nSelamat Datang di operasi Pertambahan\n\n");
	printf("Silahkan masukkan dua buah bilangan yang ingin di tambahkan (dipisah spasi) : ");
	scanf("%i %i",&a,&b); 
	hasil = a+b;
	printf("Jadi hasil dari pertambahan bilangan %i dengan %i adalah %i",a,b,hasil);
	return;
	
}

void OperasiPengurangan()
{
	int a,b,hasil;
	
	printf("\nSelamat Datang di operasi Pengurangan\n\n");
	printf("Silahkan masukkan dua buah bilangan yang ingin di kurangkan (dipisah spasi) : ");
	scanf("%i %i",&a,&b); 
	hasil = a-b;
	printf("Jadi hasil dari pengurangan bilangan %i dengan %i adalah %i",a,b,hasil); 
	return;
	
}

void OperasiPerkalian()
{
	int a,b,hasil;
	
	printf("\nSelamat Datang di operasi Perkalian\n\n");
	printf("Silahkan masukkan dua buah bilangan yang ingin di kalikan (dipisah spasi) : ");
	scanf("%i %i",&a,&b); 
	hasil = a*b;
	printf("Jadi hasil dari perkalian bilangan %i dengan %i adalah %i",a,b,hasil); 
	return;
	
}

void OperasiPembagian()
{
	float c,d;
	
	printf("\nSelamat Datang di operasi Pembagiann\n\n");
	printf("Silahkan masukkan dua buah bilangan yang ingin di bagi (dipisah spasi) : ");
	scanf("%f %f",&c,&d); 
	float hasil = c/d;
	printf("Jadi hasil dari pembagian bilangan %.1f dengan %.1f adalah %.2f",c,d,hasil); 
	return;
	
}


int pilihan;

int main()
{
	TampilkanMenu();
	
	pilihan = PilihMenu();
	
	switch(pilihan)
	{
		case 1:
			{
				OperasiPenjumlahan();
				break;
			}
		case 2:
			{
				OperasiPengurangan();
				break;
			}
		case 3:
			{
				OperasiPerkalian();
				break;
			}
		case 4:
			{
				OperasiPembagian();
				break;
			}
		default:
			{
				printf("\nProses nomor %i tidak ada di program menu\n\n",pilihan);
			}

	}
	
	
	return 0;
}
