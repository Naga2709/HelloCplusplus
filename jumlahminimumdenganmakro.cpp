/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan 
 #define MIN(a,b) ( ( (a) < (b) ) ? a:b)
 
 int main()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	int x,y;
 	x = 95;
 	y = 27;
 	cout << "Jumlah minimum adalah " << MIN(x,y) << endl;
 	
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
