#include<cstdio>

int main()
{
	
	// memasukkan jumlah inputan data yang akan di proses
	int input;
	printf("SELAMAT DATANG DI PEMROGRAMAN KARISMA\n\n");
	printf("Masukkan jumlah data yang ingin di rata-ratakan : ");
	scanf("%i",&input);
	printf("\n");
	
	
	
	//memasukkan satu persatu data nilai yang akan di rata-ratakan
	float total;
	float rata2;
	float data[input];
	
	for(int i=0; i<input; i++)
	{
		printf("Masukkan nilai data ke-%i : ",i+1);
		scanf("%f",&data[i]);
	}
	printf("\n\n");
	
	//memunculkan data nilai yang telah di input user	
	printf("Data yang telah anda masukkan adalah sebagai berikut : \n");
	for(int i=0;i<input;i++)
	{
		printf("\nData ke-%i adalah %.1f",i+1,data[i]);
	}
	printf("\n");
	
	//melakukan penotalan jumlah dari data nilai yang telah di inputkan user
	total = 0;
	for(int i=0; i<input; i++)
	{
		total =total+data[i];
	}
	
	// menghitung rata-rata dari data nilai 
	rata2 = total/input;
	printf("\n");
	
	//menampilkan rata-rata ke layar
	printf("Jadi rata-rata dari data yang telah dimasukkan adalah sebesar %.2f",rata2);
	
	return 0;
	

	
}
