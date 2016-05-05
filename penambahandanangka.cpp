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
	int n, jumlah = 0, c, nilai;
	
	std::cout << "Masukkan jumlah bilangan bulat yang ingin anda jumlahkan\n :"; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> n;
	
	std::cout<<"Masukkan " << n << " bilangan bulat : " << "\n";
	
	for (c = 1; c <= n ; c++)
	{
		std::cin >> nilai;
		jumlah = jumlah + nilai;
		
		// Penambahan setiap jumlah dalam hasil
	}
	
	std::cout << "Hasil dari masukan bilangan bulat = " << jumlah << "\n";
	
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
