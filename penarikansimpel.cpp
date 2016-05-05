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
	int jumlah, nilai, waktu, jawab;
	
	std::cout << "\nMasukkan jumlah awal : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> jumlah;
	
	std::cout << "\nMasukkan nilai dari penarikan :";
	std::cin >> nilai;
	
	std::cout << "\nMasukkan masa dari waktu :";
	std::cin >> waktu;
	
	jawab = (jumlah * nilai * waktu) / 100; // Rumus simple penarikan
	
	std::cout <<"\nPenarikan Simple : " << jawab;
}
