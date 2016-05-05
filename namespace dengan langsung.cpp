/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan  
 // Ruang nama awal
 namespace awal{
 	void func() // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 
	 {
 		cout << "Dalam nama awal" << endl;
	 }
 }
 // Ruang nama kedua
 namespace kedua{
 	void func() {
 		cout << "Dalam ruang nama kedua " << endl;
	 }
 }
 using namespace awal;
 int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 
 // Hal ini memanggil fngsi dari ruang nama awal
 func();
 return 0; // Mengembalikan nilai 0 pada sistem operasi
}
