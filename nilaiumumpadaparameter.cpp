/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
 using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
 int jumlahkan(int a, int b = 20) // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
 							// disini nilai umum dari b diberikan
 {
 	int hasil;
 	hasil = a + b;
 	return (hasil);
 }
 int main() // main sebagai tanda inti program
 {
 	int a = 5;
 	int b = 10;
 	int hasil;
 	
 	// kedua nilai ditempatkan ke fungsi
 	hasil = jumlahkan(a,b);
 	cout << "Nilai total adalah : " << hasil << endl;
 	
 	// hanya satu nilai yang ditempatkan
 	hasil = jumlahkan(a);
 	cout << "Nilai total dengan satu nilai : " << hasil << endl;
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
