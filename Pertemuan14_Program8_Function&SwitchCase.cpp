#include<cstdio>


// Tugas 1 : Merubah menjadi nilai mutlak
int mutlak(int nilai)
{
	if(nilai<0)
	{
		nilai = nilai*-1;
	}
	else
	{
		nilai;
	}
	return nilai;
}


// Tugas 2 : Pengubah nilai positif menjadi negatif
int neg(int nilai)
{
	if(nilai>0)
	{
		nilai = nilai*-1;
	}
	else
	{
		nilai;
	}
	return nilai;
}


// Tugas 3 : Luas Bujur Sangkar
int bujursangkar(int a)
{
	return(a*a); 
}


// Tugas 4 : Luas Persegi Panjang
int segipan(int p, int l)
{
	return (p*l);
}


// Tugas 5 : Luas Segitiga 
float segitiga(float alas, float tinggi)
{
	return(alas*tinggi/2);
}


// Tugas 6 : Luas Lingkaran
float lingkaran(int jari2)
{
	return(jari2*jari2*3.14);
}


// Tugas 7 : Volume Balok
int balok(int p, int l, int t)
{
	return(p*l*t);
}


// Tampilan Pilihan
void TampilkanMenu()
{
	printf("Silahkan pilih proses yang akan dijalankan : \n\n");
	printf("Tugas 1 : Merubah menjadi nilai mutlak\n");
	printf("Tugas 2 : Pengubah nilai positif menjadi negatif\n");
	printf("Tugas 3 : Luas Bujur Sangkar\n");
	printf("Tugas 4 : Luas Persegi Panjang\n");
	printf("Tugas 5 : Luas Segitiga \n");
	printf("Tugas 6 : Luas Lingkaran\n");
	printf("Tugas 7 : Volume Balok\n");
	return;
}

//Pilih Tugas 
int PilihMenu()
{
	int proses;
	printf("Masukkan nomor Tugas : ");
	scanf("%i",&proses);
	return proses;
}

int pilihan;

int main()
{
	TampilkanMenu();
	printf("\n\n");
	
	pilihan = PilihMenu();
	printf("\n\n");
	
	switch(pilihan)
	{
	
	case 1: 
		{
			int input,hasil;
	
			printf("Selamat Datang di Program Pengecekan Bilangan Mutlak Karisma Dewi\n\n");
		
			printf("Masukkan bilangan yang ingin diubah menjadi nilai mutlak : ");
			scanf("%i",&input);
			hasil = mutlak(input);
			printf("Nilai mutlak dari %i adalah %i", input, hasil);
			
			break;
		}
		
	case 2:
		{
			int input,hasil;
	
			printf("Selamat Datang di Program Penubahan Bilangan Karisma Dewi\n\n");

			printf("Masukkan bilangan yang ingin diubah menjadi bilangan negatif : ");
			scanf("%i",&input);
	
			hasil = neg(input);
			printf("Bilangan negatif dari %i adalah %i", input, hasil);
	
			break;
		}
		
	case 3:
		{
			int hasil,input;
			
			printf("Selamat Datang di Program Luas Persegi Karisma Dewi\n\n");
			printf("Masukkan sisi : ");
			scanf("%i",&input);
			
			hasil = bujursangkar(input);
			
			printf("Jadi panjang luas dengan panjang sisi sebesar %i adalah %i",input, hasil);
			break;
		}
	
	case 4:
		{
			int hasil,input_p, input_l;
			printf("Selamat Datang di Program Luas Persegi Panjang Karisma Dewi\n\n");
			printf("Masukkan panjang dan lebar yang dipisah dengan spasi : ");
			scanf("%i %i",&input_p, &input_l);
			
			hasil = segipan(input_p, input_l);
			
			printf("\nJadi panjang luas dengan panjang sisi sebesar %i dan lebar sebesar %i adalah %i",input_p, input_l, hasil);
			break;
			
		}
	
	case 5:
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
			break;
		}
	
	case 6:
		{
			int input;
			float hasil;
			printf("Selamat Datang di Program Luas Lingkaran Karisma Dewi\n\n");
			printf("Masukkan panjang jari jari : ");
			scanf("%i",&input);
				
			hasil =lingkaran(input);
			
			printf("\nJadi luas lingkaran dengan jari jari %i adalah %.2f",input, hasil);
			break;
		}
	
	case 7:
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
			break;
		}
	
	default:
		{
			printf("\nProses nomor %i tidak ada di program menu\n\n",pilihan);
		}
	}
	
	printf("\n\n\nTerima Kasih Telah Menjalankan Programnnya Karisma");
	
	return 0;
}
