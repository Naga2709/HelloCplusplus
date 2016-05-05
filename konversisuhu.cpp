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
	int suhu, konversi;
	float nilai; // float berfungsi sebagai tipe data angka ang berkoma dan di panggil menggunakan %f
	
	std::cout << " Konversi Suhu \n"; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cout << " Masukkan no unit untuk mengubahnya ke : \n 1. Celcius \n 2. Farentheit \n 3. Kelvin \n Pilih : ";
	std::cin >> suhu;
	
	std::cout << " Masukkan unit yang akan diubah ke \n : \n 1. Celcius \n 2. Farentheit \n 3. Kelvin \n Pilih : ";
	std::cin >> konversi;
	
	std::cout << " Masukkan nilai yang akan diubah : ";
	std::cin >> nilai;
	
	// Pengubah memberikan nilai dari unit yang tepat ke kelvin
	switch(suhu) {
		case 1 :
		nilai = nilai + 273.15; break;
		case 2 :
		nilai = (nilai + 459.67) * 5/9; break;
		case 3 : break;
		default: break;
	}
	
	// Pengubahan nilai dari kelvin ke unit yang spesifik
	switch(suhu) {
		case 1 :
		nilai = nilai + 273.15; break;
		case 2 :
		nilai = (nilai + 459.67) * 5/9; break;
		case 3 : break;
		default: break;
	}
	std::cout << " Nilai Pengubahan : " << nilai ;
}
