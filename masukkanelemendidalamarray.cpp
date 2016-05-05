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
 	int array [100], posisi, c, n, nilai;
 	
 	std::cout << "Masukkan angka pada elemen di dalam array : ";
 	std::cin >> n;
 	std::cout << "Masukkan " << n << " elements : ";
 	for (c = 0; c < n; c++)
 	std::cin >> array[c];
 	std::cout << "Masukkan lokasi dimana anda ingin memasukkan sebuah elemen : ";
 	std::cin >> posisi;
 	std::cout << "Masukkan nilai yang akan dimasukkan : ";
 	std::cin >> nilai;
 	
 	for (c=n-1; c >= posisi - 1; c--)
 	array [c+1] = array[c];
 	// dari memeberikan posisi masukan element menjadi 1 posisi
 	
 	array[posisi - 1] = nilai;
 	// masukkan nilai untuk diberikan posisi
 	
 	std::cout << "Menghasilkan array : ";
 	for (c=0; c <= n; c++)
 	std::cout << array[c] << "\n";
 	
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
