/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
 using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan 
 // deklarasi fungsi
 int penjumlahan(int x, int y); // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
 
 int main() // main sebagai tanda inti program
 {
 	int a = 5;
 	int b = 10;
 	int seluruh;
 	
 	cout << "Nilai dari a = " << a << endl;
 	cout << "Nilai dari b = " << b << endl;
 	
 	// fungsi untuk memanggil angka
 	seluruh = penjumlahan (a,b); // memanggil dengan nilai dari variabel
 	cout << "menjumlahkan dari dua angka = " << seluruh << endl;
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
 int penjumlahan(int x, int y)
 {
 	int add;
 	add = x + y;
 	return add;
 }
