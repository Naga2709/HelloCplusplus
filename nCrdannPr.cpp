/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
long faktorial(int); // long menyatakan bilangan bulat namun jumlahnya lebih banyak dari biasanya
long cari_ncr(int, int); // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
long cari_npr(int, int);

main()
{
	int n, r;
	long ncr, npr;
	
	std::cout << "Masukkan nilai dari n dan r : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
	std::cin >>n>>r;
	
	ncr = cari_ncr(n,r);
	npr = cari_npr(n,r);
	
	std::cout << "C" << r << " = " << ncr << "\n";
	std::cout << "P" << r << " = " << npr << "\n";
	
	return 0;
}

long cari_ncr(int n, int r)
{
	long result;
	
	result = faktorial(n)/(faktorial(r) * faktorial(n-r));
	
	return result;
}

long cari_npr(int n, int r)
{
	long result;
	
	result = faktorial(n)/faktorial(n-r);
	
	return result;
}

long faktorial (int n)
{
	int c;
	long result = 1;
	for (c = 1; c <= n; c++)
	result = result*c;
	return (result);
}
