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
 	int angka, biner_val, desimal_val = 0, awal = 1, ulang;
 	
 	std::cout << "Masukkan angka biner ( angka 1 dan 0 ) : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
 	std::cin >> angka;
 	biner_val = angka;
 	while (angka > 0)
 	{
 		ulang = angka % 10;
 		desimal_val = desimal_val + ulang * awal;
 		angka = angka / 10;
 		angka = angka / 10;
 		awal = awal * 2;
	 }
	 
	 std::cout << "Angka biner yang anda masukkan adalah = " << biner_val << "\n";
	 std::cout << "Pembagian desimal adalah = " << desimal_val << "\n";
 }
