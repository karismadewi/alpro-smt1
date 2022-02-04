#include<cstdio>

int jawaban;
int bil1,bil2,proses;

int main()
{
	printf("Selamat Datang di Program Karisma\n\n");
	printf("1. Pertambahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n");
	printf("Silahkan memilih nomor pemrosesan :");
	scanf("%i",&proses);
	
	
	if(proses == 1)
	{
		printf("Masukkan dua buah bilangan yang akan di tambahkan, di pisah dengan spasi : ");
		scanf("%i %i",&bil1,&bil2);
		jawaban = bil1+bil2;
		printf("\nJadi jawaban pertambahan dari %i dengan %i adalah %i\n\n",bil1,bil2,jawaban);
	}
	else if(proses ==2)
	{
		printf("Masukkan dua buah bilangan yang akan di dikurangkan, di pisah dengan spasi : ");
		scanf("%i %i",&bil1,&bil2);
		jawaban = bil1-bil2;
		printf("\nJadi jawaban pengurangan dari %i dengan %i adalah %i\n\n",bil1,bil2,jawaban);
	}
	else if(proses == 3)
	{
		printf("Masukkan dua buah bilangan yang akan di kalikan, di pisah dengan spasi : ");
		scanf("%i %i",&bil1,&bil2);
		jawaban = bil1*bil2;
		printf("\nJadi jawaban perkalian dari %i dengan %i adalah %i\n\n",bil1,bil2,jawaban);
	}
	else if(proses == 4)
	{
		float float1,float2;
		printf("Masukkan dua buah bilangan yang akan di bagi, di pisah dengan spasi : ");
		scanf("%f %f", &float1, &float2);
		float result = float1/float2;
		printf("\nJadi jawaban pembagian dari %f dengan %f adalah %f\n\n",float1,float2,result);
	}
	
	printf("Terima kasih telah menjalankan programnnya karisma");
	return 0;
}
