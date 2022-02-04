#include<iostream>

using namespace std; 

int A,B,C;

int main()
{
	cout<<"Halo, nama saya Ni Putu Karisma Dewi"<<endl;
	cout<<"Dan Aku anak pertama dari 4 bersaudara"<<endl<<endl;
	
	cout<<"Halo, nama saya Ni Putu Karisma Dewi"<<endl<<"Dan saya anak pertama dari 4 bersaudara"<<endl<<endl;
	
	A=5;
	B=10;
	C=15;
	
	cout<<A<<" "<<B<<" "<<C<<endl;
	cout<<A<<", "<<B<<", "<<C<<endl;
	
	cout<<"Saya mempunyai bilangan bernilai "<<A<<", "<<B<<", "<<C<<"."<<endl<<endl;
	
	//cara cin 
	cout<<"Masukkan bilangan A :";
	cin>>A;
	cout<<"Jadi nilai A sebesar "<<A<<endl<<endl; 
	
	cout<<"Masukkan tiga bilangan yang dipisahkan sesuai spasi :";
	cin>>A>> B>> C ;
	cout<<"Jadi bilangan yang dimasukkan adalah "<<A<<" "<<B<<" "<<C<<endl<<endl;
	
	
	
	
	return 0;
}
