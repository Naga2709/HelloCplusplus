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
	int gaji, awal, da, ta;
	
	std::cout << "Masukkan gaji awal : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> awal;
	
	da = (10 * awal)/100;
	ta = (12 * awal)/100;
	
	gaji = awal + da + ta;
	std::cout << "\nGaji : " << gaji;
}
