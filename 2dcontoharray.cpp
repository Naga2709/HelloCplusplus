/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
#define size 16
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
{
	int m,n;
	int a[size][size];
	std::cout << "Masukkan angka pada baris : " << endl;
	std::cin >> m;
	std::cout << "Masukkan angka pada kolom : " << endl;
	std::cin >>n;
	
	std::cout << "Masukkan elemen pada tabel : " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> a[i][j];
		}
	}
	
	// hasil dari nilai setiap element array
	for (int i = 0; i < m; i++)
	for (int j = 0; j < n; j++)
	{
		std::cout << " a[ " << i << " ][ " << j << " ]: ";
		std::cout << a[i][j] << endl;
	}
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
