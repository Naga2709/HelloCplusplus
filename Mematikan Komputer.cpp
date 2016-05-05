/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
// Hanya untuk windows 7
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
#include <stdlib.h> // stdlib sebagai header umum dalam C++, digunakan untuk menampilkan Atof(),Atoi() dan lainnya

using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
main() // main sebagai tanda inti program
{
	char ch; // char berfungsi sebagai tipe data berbentuk karakter tunggal atau karakter seperti A, f, 9
	cout << "Apakah anda ingin mematikan komputer anda (y/n)\n";
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
	system ("D:\WINDOWS\system32\shutdown");
	// Perintah mematikan komputer
	return 0; // Mengembalikan nilai 0 pada sistem operasi
}
