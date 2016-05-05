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
	int jumlah, c , k, ruang = 1;
	
	std::cout << "Masukkan jumlah baris : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> jumlah;
	
	ruang = jumlah -1;
	
	// Disini kita akan membagi intan di dalam 2 bagian atas dan bawah
	
	// Mencetak tampilan atas
	for (k = 1; k <= jumlah; k++)
	{
		for (c=1; c <= ruang; c++)
		std::cout << " ";
		// Menyisakan ruang bebas sebelum menampilkan
		ruang --;
		
		for (c=1; c <= 2 *k-1;c++)
		std::cout << "*";
		// Menampilkan * dengan menghitung nomor baris
		
		std::cout << "\n";
		// Memindahkan ke baris baru setelah ditampilkan yang baru
	}
	
	ruang = 1;
	
	// mencetak bagian bawah
	for (k = 1; k <= jumlah -1; k++)
	{
		for (c = 1; c <= ruang; c++)
		std::cout << " ";
		
		ruang ++;
		
		for (c = 1; c <= 2 *(jumlah-k)-1;c++)
		std::cout << "*";
		std::cout << "\n";
	}
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
