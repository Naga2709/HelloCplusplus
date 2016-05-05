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
 	int n,c,k;
 	
 	std::cout << "Masukkan sebuah bilangan bulat desimal angka sistem : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
 	std::cin >> n;
	std::cout << n << " di dalam angka biner sistem adalah : \n";
	
	for (c=31; c >= 0; c--)
	{
		k = n >> c;
		// Bagian kanan (biner dibagi dengan 2
		if ( k & 1) // k adalah sebuah logika And dengan 1
		std::cout << " 1";
		else
		std::cout << " 0";
	}
	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
