#include <cstdio>
char pilihan;

int main()
{
	printf("Hallooo, kamu mau tau rahasia ga?\n\n");
	printf("Ketik huruf y jika ingin dan t jika tidak\n\n");
	printf("Ketik pilihanmu di sini :  ");
	scanf("%c",&pilihan);
	
	if(pilihan=='y') //setelah if, jangan dipakein ; (titik koma) supaya else nya ga eror. 
	{
		printf("Hari ini hari sabtu tanggal 18 Desember 2021\n");
		printf("Sebenernya programnya ini eror, terus Losin ngasih tau kalo if gaboleh pakek titik koma");
	}
	else
	{
		printf("Oh yaudah, ga maksa");
	}
	
	printf("\n\n Terima kasih telah menjalankan programnya karisma. Muah");
		
	return 0;
}
