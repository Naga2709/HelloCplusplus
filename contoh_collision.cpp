/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya 
int cout()  // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// deklarasi fungsi cout
{
	return 5;
}
int main() // main sebagai tanda inti program
{
	/* Contoh terjadi pada using namespace std; //membuat std::cout dapat mengakses "cout" */
	using std::cout; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
	cout<<"Akses Std dilakukan"; // Akses cout dilakukan
	return 0; // Mengembalikan nilai ke semula atau sama dengan 0
}
