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
 	public: // public adalah variabel yang dapat diakses oleh semua kelas yang menggunakan kelas yang berisi variabel tersebut
 		Kubus() {
 			cout << "Memanggil konstruktor " << endl;
		 }
		 ~Kubus() {
		 	cout << "Memanggil destruktor " << endl;
		 }
 };
int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	Kubus*myKubusArray = new Kubus[500000];
 	delete[] myKubusArray; // Hapus Array
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
