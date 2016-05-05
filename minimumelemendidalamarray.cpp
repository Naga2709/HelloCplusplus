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
 	int array[100], minimum, ukuran, c, lokasi = 1;
 	
 	std::cout << "Masukkan angka pada element di dalam array : ";
 	std::cin >> ukuran;
 	std::cout << "Masukkan " << ukuran << " bilangan bulat : ";
 	
 	for ( c = 0; c < ukuran; c++)
 	std::cin >> array [c];
 	
 	minimum = array[0];
 	// asumsikan yang pertama sebagai minimum
 	
 	for ( c = 1; c < ukuran; c++ )
 	{
 		if ( array[c] < minimum)
 		{
 			minimum = array [c];
 			lokasi = c+1;
 			// setiap nomor yang lebih kecil ndari maximum yang ditemukan dan set hal tersebut menjadi minimum dan simpan dalam lokasi
		 }
	 }
	 std::cout << "Elemen minimum sudah menyediakan lokasi " << lokasi << " dan nilainya adalah " << minimum << "\n";
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
