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
	long int angkabiner, angkaoktal = 0, j = 1, ulang; // long menyatakan bilangan bulat namun jumlahnya lebih banyak dari biasanya
	
	std::cout << "Masukkan angka untuk bilangan biner : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> angkabiner;
	while (angkabiner != 0)
	{
		ulang = angkabiner % 10;
		angkaoktal = angkaoktal + ulang * j;
		j = j * 2;
		angkabiner = angkabiner / 10;
	}
	std::cout << "Pembagian nilai oktal : " << angkaoktal ;
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
