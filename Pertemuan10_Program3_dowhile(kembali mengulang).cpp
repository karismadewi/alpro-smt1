#include<cstdio>

int a,b,hasil;
char proses;

int main()
{	
	do
	{
		printf("Masukkan dua buah bilangan bulat dengan dipisahkan spasi : ");
		scanf("%i %i",&a,&b);
		hasil = a+b;
		printf("Jadi hasil pertambahan antara bilangan %i dengan %i adalah %i\n",a,b,hasil);
		printf("\nApakah kamu ingin mengulanginya lagi?\n\n");
		printf("y = untuk mengulang kembali\n");
		printf("t = untuk menyudahi\n\n");
		printf("Pilihanmu : ");
		scanf("%s", &proses);
	}
	while(proses =='y');
	
	printf("Terima kasih telah menjalankan programnnya Karisma");
	
	
}
