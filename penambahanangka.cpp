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
	int n, sum = 0, masukan;
	std::cout << "Masukkan sebuah angka : "; // Jika angka yang dimasukkan lebih dari dua maka akan dijumlahkan
	std::cin >> n;
	
	while(n!=0)
	{
		masukan = n%10;
		// Simpan setiap tempat angka ke sisa
		sum = sum + masukan;
		n = n/10;
		// Pembagian tidak disimpan ke tempat angka
	}
	std::cout << "Hasil jumlah angka-angka yang dimasukkan = " << sum ; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
