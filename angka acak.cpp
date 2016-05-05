/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
#include <stdlib.h> // stdlib sebagai header umum dalam C++, digunakan untuk menampilkan Atof(),Atoi() dan lainnya
 
 using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
 
 int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	int c, n;
 	
	 // rand() digunakan untuk mendapat angka acak
	 cout << "Sepuluh angka acak dalam rangka 1 hingga 100\n";
	 
	 for (c = 1; c <= 10; c++) { n = rand()%100+1;
	 
	 // rand()%100 memberikan angka acak dalam 0 hingga 100
	 cout << n << "\n";
	 }
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
