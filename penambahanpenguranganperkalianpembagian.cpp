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
	int pertama, kedua, jumlahkan, selisih, perkalian;
	float pembagian; // float berfungsi sebagai tipe data angka ang berkoma dan di panggil menggunakan %f
	
	std::cout << "Masukkan dua bilangan bulat\n";
	std::cin >> pertama >> kedua;
	// operator yang digunakan
	jumlahkan = pertama + kedua;
	selisih = pertama - kedua;
	perkalian = pertama * kedua;
	pembagian = pertama/(float)kedua;
	
	std::cout << "Jumlah = " <<jumlahkan<<"\n";
	std::cout << "Selisih = " <<selisih<<"\n";
	std::cout << "Perkalian = " <<perkalian<<"\n";
	std::cout << "Pembagian = " <<pembagian<<"\n";
return 0; // Mengembalikan nilai 0 pada sistem operasi
}
