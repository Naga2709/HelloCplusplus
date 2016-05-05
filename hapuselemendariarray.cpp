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
 	int array[100], posisi, c, n;
 	
 	std::cout << "Masukkan angka pada elemen di dalam array : "; // Pada penggunaan std, Program akan ditampilkan dalam baris perbaris
 	std::cin >> n;
 	std::cout << "Masukkan " << n << " element\n";
 	
 	for ( c = 0; c < n; c++)
 	std::cin >> array[c];
 	std::cout << "Masukkan lokasi dimana anda ingin menghapus elemen array : ";
 	std::cin >> posisi;
 	
 	if (posisi >= n+1)
 	std::cout << "Menghapus yang mungkin : ";
 	else
 	{
 		for ( c = posisi-1; c <n-1; c++)
 		array[c] = array[c + 1];
 		
 		// dari memberikan posisi masukan semua elemen dalam 1 posisi kebawah
 		
 		std::cout << "Hasil dari array : ";
 		
 		for ( c = 0; c < n - 1;c++)
 		std::cout << array [c] << "\n";
	 }
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
