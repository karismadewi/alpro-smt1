#include<cstdio>
using namespace std;

int A,B,C,D,E,I;
float F,G,H;
bool J,K,L,M,N,O;
char P,Q,R,S,T,U;

int main()
{
	A = 10;
	B = 4;
	C = A-B; /*6*/
	D = A*B;
	E = A/B;
	F = 10.0/3;
	G = 10/3;
	H =(float) A/B; /* disebut casting karena mengubah nilai int ke bilangan pecahan. Mka harus diisi dalam kurung float di salah satu faktor pembagian, entah A atau B */
	I = (A+B)*C; /* Operasi aritmatika*/
	
	/*Operasi Aljabar Boolean*/
	J = true; //true = 1
	K = false; // false = 0
	
	L = J && K; /* && = operasi AND, dalam aljabar boolean*/
	M = J || K; // lambang || menandakan operasi OR pada aljabar boolean
	N = J ^ K; //lambang XOR pada aljabar boolean
	O = !J; // tanda !(seru) menandakan operasi NOT pada aljabar boolean
	
	// Operasi Bitwise
	P = 12; 		// 0000 1100 gesek ke kiri 1 digit berarti 0001 1000 (desimal 24)
	Q = 5; 			// 0000 0101
					//...............AND
					// 0000 0100  ....> desimal = 4
	R = P & Q; //  & artinya AND dalam operasi BITWISE
				
	S = P | Q;  // arti | adalah OR dalam operasi BITWISE
	
	T = P << 1; // artinya nilai P digeser ke kiri sebanyak 1 digit yaitu hasilnya adalah 24 pada desimal 
	U = P >> 2;  // artinya nilai P digeser ke kanan sebanyak 2 digit  ....> 0000 0011 yaitu 3 dalam desimal 
	// kalau 1 digit geser ke kiri, berarti kali 2 
	// kalau 1 digit geser ke kanan, berarti bagi 2 
	
	//LARANGAN 
	// jika bit paling kiri adalah 1, tidak boleh di geser ke kiri. Contoh 1000 0000 (tidak boleh) karena akan menjadi min 
	
	
	
	printf("Nilai A adalah %i\n",A);
	printf("Nilai B adalah %i\n",B);
	printf("Nilai C adalah %i\n",C);
	printf("Nilai D adalah %i\n",D);
	printf("Nilai E adalah %i\n",E); /*karena yang diminta adalah integer,  bilangan bulat, maka tidak ada koma*/
	printf("Nilai F adalah %f\n",F); /*Nilai menggunakan floating point, jadi kebaca angka koma-komanya */
	printf("Nilai G adalah %f\n",G); /*tidak ada koma angka karena yang dipanggil di nilai G bukan merupakan nilai bilangan real atau floating point. G =10/3, dibaca sebgai bilangan bulat */
	printf("Nilai H adalah %.1f\n",H); 
	printf("Nilai I adalah %i\n\n",I);
	
	printf("Masuk ke Aljabar Boolean\n");
	printf("Nilai J adalah %i\n",J);
	printf("Nilai K adalah %i\n",K);
	printf("Nilai L adalah %i\n",L);
	printf("Nilai M adalah %i\n",M);
	printf("Nilai N adalah %i\n",N);
	printf("Nilai O adalah %i\n",O);
	
	printf("Masuk ke Materi Operasi Bitwise\n\n");
	printf("Nilai P adalah %i\n",P);
	printf("Nilai Q adalah %i\n",Q);
	printf("Nilai R adalah %i\n",R);
	printf("Nilai S adalah %i\n",S);
	printf("Nilai T adalah %i\n",T);
	printf("Nilai U adalah %i\n",U);
	return 0;
}

