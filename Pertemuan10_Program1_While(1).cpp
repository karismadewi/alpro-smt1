#include<cstdio>

int jawaban; 

int main()
{
	printf("Jawablah soal ini dengan benar : \n\n");
	printf("3+3 = ");
	scanf("%i",&jawaban);
	while(jawaban!=6)
	{
		printf("Maaf, jawaban kamu salah. Silahkan ulang hingga benar =,=\n\n");
		printf("3+3 = ");
		scanf("%i",&jawaban);
	}
	printf("Waah, jawaban kamu benar! hebat");
	
	return 0;
}
