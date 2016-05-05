/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya   
#include <string.h> // string sebagai header umum dalam C++, digunakan untuk menampilkan strcp, strlen dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
 main() // main sebagai tanda inti program
 {
 	char kalimat[] = "Program C++ "; // char berfungsi sebagai tipe data berbentuk karakter tunggal atau karakter seperti A, f, 9
 	char salin[50];
 	
 	strcpy(salin, kalimat);
 	// strcpy akan menyalin string dari kalimat ke hitung
 	cout << "Kalimat yang ditampilkan : "<< kalimat << "\n";
 	cout << "Salin kalimat : " << salin << "\n";
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 } 
