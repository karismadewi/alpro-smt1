#include<iostream>


using namespace std;

struct Mahasiswa
{
	char NIM[11];
	char nama[51];
	char JK;
	int thMasuk;
	float IPK;
};

Mahasiswa mhs1;
Mahasiswa *mhs2;
int main()
{
	mhs2 = new Mahasiswa;
	
	// TANPA MENGGUNAKAN POINTER
	cout << "SIlahkan masukkan data mahasiswa : \n\n";
	cout << "Data Mahasiswa ke-1 : \n\n";
	
	cout << "NIM : ";
	cin >> mhs1.NIM;
	
	cout << "Nama : ";
	//cin >> mhs1.nama;	
	gets(mhs1.nama);
	gets(mhs1.nama);
	
	cout << "Jenis Kelamin (L/P) : ";
	cin >> mhs1.JK;
	
	cout <<"Tahun masuk : ";
	cin >> mhs1.thMasuk;
	
	cout <<"IPK : ";
	cin >> mhs1.IPK;
	
	cout <<"\n\nData Mahasiswa yang telah berhasil di-Input : \n\n";
	cout << "Data mahasiswa ke-1"<<endl;
	cout << "NIM :" <<mhs1.NIM << endl;
	cout << "Nama :"<<mhs1.nama << endl;
	cout << "Jenis Kelamin :"<<mhs1.JK <<endl;
	cout << "Tahun Masuk :"<<mhs1.thMasuk <<endl;
	cout << "IPK :" <<mhs1.IPK<<endl;
	
	
	
	//MENGGUNAKAN POINTER
	
	
	cout << "SIlahkan masukkan data mahasiswa : \n\n";
	cout << "Data Mahasiswa ke-2 : \n\n";
	
	cout << "NIM : ";
	cin >> mhs2->NIM;
	
	cout << "Nama : ";
//	cin >> mhs2->nama;	
	gets(mhs2->nama);
	gets(mhs2->nama);
	
	cout << "Jenis Kelamin (L/P) : ";
	cin >> mhs2->JK;
	
	cout <<"Tahun masuk : ";
	cin >> mhs2->thMasuk;
	
	cout <<"IPK : ";
	cin >> mhs2->IPK;
	
	cout <<"\n\nData Mahasiswa yang telah berhasil di-Input : \n\n";
	cout << "Data mahasiswa ke-2"<<endl;
	cout << "NIM :" <<mhs2->NIM << endl;
	cout << "Nama :"<<mhs2->nama << endl;
	cout << "Jenis Kelamin :"<<mhs2->JK <<endl;
	cout << "Tahun Masuk :"<<mhs2->thMasuk <<endl;
	cout << "IPK :" <<mhs2->IPK<<endl;
	
	
	return 0;
	
	
	
}
