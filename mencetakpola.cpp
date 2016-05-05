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
	int baris, c, jumlah, temp;
	
	std::cout << "Masukkan jumlah angka untuk membentuk piramid : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> jumlah;
	
	temp = jumlah;
	
	for (baris = 1; baris <= jumlah; baris++)
	{
		for (c=1; c < temp; c++)
		std::cout << " ";
		
		// Menyisakan ruang sebelum di tampilkan
		
		temp --;
		
		for ( c = 1; c <= 2 * baris - 1; c++)
		std::cout << "*";
		// Menampilkan bintang dengan menghitung baris
		std::cout << "\n";
		// Mengubah baris baru setelah menampilkan yang baru
	}
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
