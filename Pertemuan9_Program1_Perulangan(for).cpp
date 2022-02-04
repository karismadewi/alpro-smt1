#include<cstdio>

int bilangan;

int main()
{
	printf("Perulangan menggunakan for\n\n");
	
	for(bilangan=1;bilangan<=3;bilangan=bilangan+1) 
	{
		printf("di Tahun 2021, karisma umurnya 18 Tahun\n");
	}
	
	return 0;
}
/* cara penggunaan for 
for(..(1)...;....(2)...;...(3)...)

kolom (1) digunakan untuk memulai dariurutan berapa akan dijalankan programnya
kolom (2) digunakan untuk perintah boolean (true false) 
---		misal : bilangan <=3
				kalo bilangan itu belum lebih atau sama dengan 3, berarti perintah masih bisa dijalankan, karena masih bernilai (true)
kolom(3) digunakan untuk menambahkan nilai variabel ketika akan di muat ulang
---		misal : bilangan=bilangan+1
				perulangan 1   : bilangan berisi 1 : perulangan selanjutnya +1
				perulangan 1+1 : bilangan berisi 2 : perulangan selanjutnya +1
				perulangan 2+1 : bilangan berisi 3 : perulangan selanjutnya +1 
				dan seterusnya sampai mencapai pernyataan false (program salah dan tidak bisa dijalankan lagi 
				
				note : semoga ngerti waktu buka ini di hari lain, hehe :"D */
