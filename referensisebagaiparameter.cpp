/*
// Barisan kode ini diketik dan diedit oleh Matius Celcius Sinaga
// Sumber : berbagai sumber
// Diketik pada Dev-C++ 5.11
// Email : matiussinaga27@gmail.com
*/
#include <iostream> // iostream sebagai header umum dalam C++, digunakan untuk menampilkan input masukan keluaran dan lainnya
 using namespace std; // using sebagai penggunaan std tanpa harus mengetikkannya pada setiap fungsi keluaran dan masukan   
 // // deklarasi fungsi dengan referensi
 void swap(int&x, int&y); // void atau juga disebut prosedur. void tidak mengembalikan suatu nilai keluaran yang didapat dari hasil proses fungsi tersebut 
 
 int main() // int sebagai fungsi yang menyatakan nilai masukannya adalah angka/bilangan bulat
			// main sebagai tanda inti program
 {
 	int a = 10;
 	int b = 20;
 	
 	cout << "Nilai dari a sebelum disamakan : " << a << endl;
 	cout << "Nilai dari b sebelum disamakan : " << b << endl;
 	
 	// memanggil fungsi
 	swap (a,b);
 	cout << "Nilai dari a setelah disamakan : " << a << endl;
 	cout << "Nilai dari b setelah disamakan : " << b << endl;
 	
 	return 0; // Mengembalikan nilai 0 pada sistem operasi
 }
 
 void swap(int&x, int&y) // referensi variabel sebagai parameter ke fungsi
 {
 	int temp;
 	temp = x;
 	x = y;
 	y = temp;
 	return;
 }
