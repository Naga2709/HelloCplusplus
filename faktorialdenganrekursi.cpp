/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya

long faktorial(int); // long menyatakan bilangan bulat namun jumlahnya lebih banyak dari biasanya

int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
{
	int angka;
	long f; // long menyatakan bilangan bulat namun jumlahnya lebih banyak dari biasanya
	
	std::cout << "Masukkan sebuah angka untuk dicari faktorialnya : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> angka;
	
	if (angka < 0)
	std::cout << "Bilangan bulat negatif tidak diijinkan.\n";
	else
	{
		f = faktorial(angka);
		std::cout << angka << " != " << f << "\n";
	}
	
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}

long faktorial (int angka)
{
	if (angka == 0)
	return 1;
	else
	return (angka * faktorial(angka-1));
	// rekursif dipanggil pada fungsi faktorial
}
