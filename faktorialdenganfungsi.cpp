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
	long fakt = 1;
	
	std::cout << "Masukkan angka untuk dihitung dengan faktorial : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >> angka;
	
	std::cout << angka << " != " << faktorial(angka) << "\n";
	return 0;
}

long faktorial(int n)
{
	int c;
	long result = 1;
	for (c = 1; c <= n; c++)
	result = result * c;
	// mengalikan dengan x1,2,3 ... *
	
	return result;
}
