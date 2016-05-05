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
	int pertama, kedua, jumlah;
	
	std::cout << "Masukkan dua bilangan bulat, untuk dijumlahkan\n :";
	std::cin >> pertama >> kedua;
	
	jumlah = pertama + kedua;
	
	// Penambahan isi dari yang pertama dan kedua dan penyimpanan dalam penjumlahan
	std::cout << "Jumlah dari angka yang dimasukkan = " << jumlah << "\n"; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
