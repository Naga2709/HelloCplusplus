 /*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
 int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	// Deklarasi variabel lokal
 	int a = 1;
 	
 	// Lompati eksekusi
 	do
 	{
 		cout << " nilai dari a :" << a << endl;
 		a = a + 1;
	 }
	 while
	 (a < 8); // Penentuan nilai yang akan tampil kurang dari 8
	 
	 return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
