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
	int jumlah, i, c, a = 1;
	
	std::cout << "Masukkan jumlah dari baris segitiga floyds untuk ditampilkan : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> jumlah;
	
	for ( i = 1; i < jumlah; i++)
	{
		for (c = 1; c < 1; c++)
		{
			std::cout << a;
			a++;
		}
		std::cout << "\n";
	}
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
