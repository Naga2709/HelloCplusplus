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
	int tahun;
	
	std::cout << "Masukkan sebuah tahun untuk di cek apakah sebuah tahun kabisat : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> tahun;
	
	if (tahun%400 == 0)
	std::cout << tahun << " adalah tahun kabisat.\n";
	else if (tahun%100 == 0)
	std::cout << tahun << " adalah bukan tahun kabisat.\n";
	else if (tahun%4 == 0)
	std::cout << tahun << " adalah tahun kabisat.\n";
	else
	std::cout << tahun << " adalah bukan tahun kabisat.\n";
	
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
