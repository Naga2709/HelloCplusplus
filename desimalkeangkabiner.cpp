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
	long angka, desimal_angka, ulang, awal = 1, biner = 0; // long menyatakan bilangan bulat namun jumlahnya lebih banyak dari biasanya
	
	std::cout << "Masukkan sebuah angka desimal  : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> angka;
	desimal_angka = angka;
	while (angka > 0)
	{
		ulang = angka % 2;
		biner = biner + ulang * awal;
		angka = angka / 2;
		awal = awal * 10;
	}
	std::cout << "Masukkan angka = " << desimal_angka << "\n";
	std::cout << "Adalah angka biner dibagi dengan = " << biner << " \n";
}
