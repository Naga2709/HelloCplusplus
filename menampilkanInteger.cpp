/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
{
	int a;
	std::cout << "Masukkan sebuah bilangan bulat \n"; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> a;
	
	// Menyimpan nilai integer pada user
	std::cout << "Bilangan bulat yang anda masukkan adalah " << a << "\n";
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
