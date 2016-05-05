/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
 int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	int a,b,c;
 	
 	std::cout << "Masukkan satu persatu ketiga angka:\n"; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
 	std::cin >> a >> b >> c;
 	if (a>b&&a>c)
 	// jika a lebih besar dari b & c
 	std::cout << "angka terbesar adalah : " << a;
 	else if (b>c)
 	// jika bukan a lalu jika b lebih besar dari c
 	std::cout << "angka terbesar adalah : " << b;
 	else
 	// jika a&b bukan terbesar
 	std::cout << "angka terbesar adalah : " << c;
 	
 }
