/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
 
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
 
 int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	int a,b;
 	cout << "\nMasukkan nilai dari angka 1 dan 2 : ";
 	cin >>a>>b;
 	
 	a = a + b;
 	b = a - b;
 	a = a - b;
 	
 	cout << "\nSetelah menyapu nilai dari a : " << a;
 	cout << "\nSetelah menyapu nilai dari b : " << b;
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
