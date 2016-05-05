/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya   
 #include <string.h> // string sebagai header umum dalam C++, digunakan untuk menampilkan strcp, strlen dan lainnya
 using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
 int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	char a[100]; // char berfungsi sebagai tipe data berbentuk karakter tunggal atau karakter seperti A, f, 9
 	int panjang;
 	cout << "Masukkan sebuah string untuk dihitung panjangnya : ";
 	gets(a);
 	panjang = strlen(a);
 	// strlen(string) adalah fungsi yang memberikan panjang string
 	cout << "Panjang yang dimasukkan pada string adalah = " << panjang << "\n";
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
