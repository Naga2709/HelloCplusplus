/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
 using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan
 // deklarasi fungsi
 int Kecil(int x, int y); // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
 int main() // main sebagai tanda inti program
 {
 	int a = 2;
 	int b = 7;
 	int angkaKecil;
 	
 	// memanggil fungsi
 	angkaKecil = Kecil(a,b);
 	cout << "Nilai Kecil adalah : " << angkaKecil << endl;
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
 
 // definisi fungsi
 int Kecil(int x, int y)
 {
 	int result;
 	if (x<y)
 	result = x;
 	else
 	result = y;
 	return result;
 }
