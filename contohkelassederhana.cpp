/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
 using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan    
 class Kubus
 {
 	public :
 		// double adalah tipe data pecahan (pecahan presisi ganda) dan memiliki jumlah bit sebanyak 64 
 		double panjang;
 		double alas;
 		double tinggi;
 };
 
 int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	Kubus C1; // deklarasikan C1 sebagai tipe kubus
 	Kubus C2; // deklarasikan C2 sebagai tipe kubus
 	double volume = 0.0; // simpan volume kubus disini
 	
 	// Kubus 1 spesifikasi
 	C1.tinggi = 3.0;
 	C1.panjang = 10.0;
 	C1.alas = 5.0;
 	
 	// Kubus 2 spesifikasi
 	C2.tinggi = 20.0;
 	C2.panjang = 4.0;
 	C2.alas = 8.0;
 	
 	// volume dari Kubus 1
 	volume = C1.tinggi*C1.panjang*C1.alas;
 	cout << "Volume dari kubus 1 : " << volume << endl;
 	
 	// volume dari Kubus 2
 	volume = C2.tinggi*C2.panjang*C2.alas;
 	cout << "Volume dari kubus 2 : " << volume << endl;
 	
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
