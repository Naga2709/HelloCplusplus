/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan  
 double Pembagian(int a, int b) // double adalah tipe data pecahan (pecahan presisi ganda) dan memiliki jumlah bit sebanyak 64 
 								// int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
 {
 	if ( b == 0)
 	{
 		throw "Pembagian dengan nol dikecualikan .";
	 }
	 return (a/b);
 }
 int main()
 {
 	int x = 50;
 	int y = 0;
 	double z = 0;
 	try {
 		z = Pembagian (x,y);
 		cout << z << endl;
	 } catch (const char* msg) { cerr << msg << endl;
	 }
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
