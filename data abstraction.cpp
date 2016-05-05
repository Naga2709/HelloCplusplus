/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan 
 class Hitung {
 ;
 public: // public adalah variabel yang dapat diakses oleh semua kelas yang menggunakan kelas yang berisi variabel tersebut
 	// kontruktor
 	Hitung (int i = 0)
 	{
 		total = i;
	 }
	 // Menghubungkan satu sama lain
	 void Deposit (int angka) // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 
	 {
	 	total += angka;
	 }
	 // Menghubungkan satu sama lain
	 void Tarik (int angka)
	 {
	 	total -= angka;
	 }
	 // Menghubungkan satu sama lain
	 int getSetimbang (int angka)
	 {
	 	return total;
	 };
	 private: // private adalah variabel yang hanya dapat diakses oleh metode-metode dalam kelas itu sendiri
	 	// Data yang disimpan dari yang lain
	 	int total; // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
	 };
	 int main() // main sebagai tanda inti program
	 {
	 	Hitung a;
	 	a.Deposit(30);
	 	a.Tarik(20);
	 	a.Deposit(10);
	 	a.Deposit(10);
	 	a.Tarik(20);
	 	
	 	cout << " Setimbang : " << a.getSetimbang() << endl;
	 	return 0; // Mengembalikan nilai 0 pada sistem operasi
	 } 
