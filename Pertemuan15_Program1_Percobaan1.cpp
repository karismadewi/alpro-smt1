#include<iostream>
#include<ctime>

using namespace std;

int HitungRerata(int* data, int jumlahData)
{
	int sum = 0;
	
	for(int i=0; i<jumlahData; i++)
	{
		sum +=data[i];
	}
	
	return(sum/jumlahData);
		
}

void TampikanData(int* data, int jumlahData)
{
	for(int i=0; i<jumlahData; i++)
	{
		cout << data[i] << endl;
	}
	return;
	
}


const int jmlData = 10;
int dataKu[10];
int rerata;

int main()
{

	srand(time(NULL));
	
	for(int i=0; i<jmlData; i++)
	{
		dataKu[i] = rand()%10;
	}
	HitungRerata(dataKu,jmlData);
	rerata = HitungRerata(dataKu,jmlData);
	cout <<endl <<endl << "Rata-rata : " << rerata << endl;
	
	return 0;
}
