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
	int n;
	
	std::cout << "Masukkan sebuah bilangan bulat = \n"; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> n; // n sebagai nilai masukan
	
	// jika n sudah selesai dibagi dengan 2 lalu tampilkan genap maupun jika ganjil
	if (n%2==0) // Jika dapat dibagi dua sama dengan 0 maka nilai tersebut genap
	std::cout << "Angka Genap\n"; 
	else
	std::cout << "Angka Ganjil\n";
	
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
