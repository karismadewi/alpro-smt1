#include<cstdio>

int a,b,hasil,proses;

int main()
{
	printf("Silahkan pilih proses yang akan dijalankan : \n\n");
	printf("Proses 1 : Pertambahan\n");
	printf("Proses 2 : Pengurangan\n");
	printf("Proses 3 : Perkalian\n");
	printf("Proses 4 : Pembagian\n");
	printf("Proses 5 : mod dan div\n"); 
	printf("Masukkan Proses : ");
	scanf("%i",&proses);
	
	switch (proses)
	{
		case 1:
			{
				printf("\nSelamat Datang di operasi Pertambahan\n\n");
				printf("Silahkan masukkan dua buah bilangan yang ingin di tambahkan (dipisah spasi) : ");
				scanf("%i %i",&a,&b); 
				hasil = a+b;
				printf("Jadi hasil dari pertambahan bilangan %i dengan %i adalah %i",a,b,hasil); 
				break;
			}
		case 2:
			{
				printf("\nSelamat Datang di operasi Pengurangan\n\n");
				printf("Silahkan masukkan dua buah bilangan yang ingin di kurangkan (dipisah spasi) : ");
				scanf("%i %i",&a,&b); 
				hasil = a-b;
				printf("Jadi hasil dari pengurangan bilangan %i dengan %i adalah %i",a,b,hasil); 
				break;
			}
		case 3:
			{
				printf("\nSelamat Datang di operasi Perkalian\n\n");
				printf("Silahkan masukkan dua buah bilangan yang ingin di kalikan (dipisah spasi) : ");
				scanf("%i %i",&a,&b); 
				hasil = a*b;
				printf("Jadi hasil dari perkalian bilangan %i dengan %i adalah %i",a,b,hasil); 
				break;
			}
		case 4:
			{
				float c,d;
				printf("\nSelamat Datang di operasi Pembagiann\n\n");
				printf("Silahkan masukkan dua buah bilangan yang ingin di bagi (dipisah spasi) : ");
				scanf("%f %f",&c,&d); 
				float hasil = c/d;
				printf("Jadi hasil dari pembagian bilangan %.1f dengan %.1f adalah %.2f",c,d,hasil); 
				break;
			}
		case 5:
		{		int sisa;
				printf("\nSelamat Datang di operasi Mecari Hasil bagi dan sisa\n");
				printf("Silahkan masukkan dua buah bilangan yang ingin di bagi (dipisah spasi) : ");
				scanf("%i %i",&a,&b); 
				hasil = a/b;
				sisa = a%b;
				printf("Jadi hasil dari pertambahan bilangan %i dengan %i adalah %i sisa %i",a,b,hasil,sisa); 
				break;
		}
		default:
			{
				printf("\nProses nomor %i tidak ada di program menu\n\n",proses);
			}
	}
	printf("\n\nTerima Kasih telah menjalankan programnnya Karisma");

}
