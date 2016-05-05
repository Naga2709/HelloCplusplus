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
 	int m, n, c, d, pertama[10][10], kedua[10][10], sum[10][10];
 	
 	std::cout << "Masukkan jumlah dari baris dan kolom pada matriks : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
 	std::cin >> m >> n;
 	std::cout << "Masukkan elemen pertama pada matriks\n";
 	for (c = 0; c < m; c++)
 	for (d = 0; d < n; d++)
 	std::cin >> pertama[c][d];
 	std::cout << "Masukkan elemen dari matrik kedua\n";
 	for (c = 0; c <m; c++)
 	for (d = 0; d < n; d++)
 	std::cin >> kedua[c][d];
 	for ( c = 0; c < m; c++)
 	for ( d = 0; d < n; d++)
 	sum[c][d] = pertama[c][d] + kedua[c][d];
 	// penambahan matriks
 	std::cout << "Jumlah dari matrik yang ditambahkan :-\n";
 	for ( c = 0; c < m; c++)
 	{
 		for (d = 0; d < n; d++)
 		std::cout << sum[c][d] << "\t";
 		std::cout << "\n";
	 }
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
