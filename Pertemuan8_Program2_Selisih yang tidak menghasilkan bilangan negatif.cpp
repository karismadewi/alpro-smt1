#include<cstdio>

int bil1,bil2,hasil;

int main()
{
	printf("Silahkan masukkan dua bilangan yang dipisahkan oleh spasi untuk memulai mencari selisih : ");
	scanf("%i %i",&bil1,&bil2);
	
	if(bil1>bil2)
	{
		hasil=bil1-bil2;
		printf("\nJadi hasil dari selisih %i dengan %i adalah %i",bil1, bil2,hasil);
	}
	else if(bil1<bil2)
	{
		hasil=bil2-bil1;
		printf("\nJadi hasil dari selisih %i dengan %i adalah %i",bil2,bil1,hasil);
	}
	else if (bil1==bil2);
	{
		printf("\n\nJadi selisih adalah 0");
	}
	
	printf("\n\nTerima kasih telah menjalankan programnnya karisma");
	
	return 0;
}
