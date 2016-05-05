/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan     
 class tampilkanData
 {
 	public: // public adalah variabel yang dapat diakses oleh semua kelas yang menggunakan kelas yang berisi variabel tersebut
 		void tampilkan(int i) // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 
		 { 
 			cout << "Menampilkan bilangan bulat : " << i << endl;
		 }
		 void tampilkan (double f) // double merupakan tipe data bilangan pecahan presisi ganda
		 {
		 	cout << "Menampilkan pecahan :  " << f << endl;
		 }
		 void tampilkan (char* c) // char berfungsi sebagai tipe data berbentuk karakter tunggal atau karakter seperti A, f, 9
		 {
		 	cout << "Menampilkan karakter : " << c << endl;
		 }
 };
 int main(void) // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
				// main sebagai tanda inti program
 {
 	tampilkanData pd;
 	pd.tampilkan(5); // Panggil tampilkan untuk menampilkan bilangan bulat
 	
 	pd.tampilkan(500.263); // Panggil tampilkan untuk menampilkan bilangan pecahan
 	
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
