/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
 int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
{
	int x , y, temp;
	
	std::cout << "Masukkan nilai dari x dan y : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> x >> y;
	
	std::cout << "Sebelum bertukar\nx = " << x << "\ny = " << y << "\n ";
	
	temp = x;
		x = y ;
		y = temp;
	// Gunakan percobaan untuk bertukar menyimpan x ke percobaan dan y ke x lalu ubah ke y
	std::cout << "Setelah perubahan\nx = " << x << "\ny = " << y << "\n ";
	
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
